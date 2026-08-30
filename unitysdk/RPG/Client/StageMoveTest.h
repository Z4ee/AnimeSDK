#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MoveAnchor.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoMovementPropHandle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEMOVETEST_START_OFFSET UNITYSDK_OFFSET(0xE0E46E0)
#define RPG_CLIENT_STAGEMOVETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xE0E4940)
#define RPG_CLIENT_STAGEMOVETEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E4D40)

namespace RPG::Client
{
	inline static constexpr unsigned int StageMoveTest_TypeDefinitionIndex = 68739;

	class StageMoveTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MoveAnchor>* MoveAnchors; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* KBAIBBPMPGD; // 0x20
		::UnityEngine::Transform* KPICCGKNKGN; // 0x28
		::System::Single ELAADMBJOGD; // 0x30
		::System::Int32 APHKIJIMBGD; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMOVETEST__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMOVETEST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMOVETEST_UPDATE_OFFSET))(this);
		}
	};
}
