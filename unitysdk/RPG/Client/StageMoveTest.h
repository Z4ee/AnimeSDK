#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MoveAnchor.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoMovementPropHandle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STAGEMOVETEST_START_OFFSET UNITYSDK_OFFSET(0xA4D20F0)
#define RPG_CLIENT_STAGEMOVETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xA4D22A0)
#define RPG_CLIENT_STAGEMOVETEST__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D2660)

namespace RPG::Client
{
	inline static constexpr unsigned int StageMoveTest_TypeDefinitionIndex = 56171;

	class StageMoveTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MoveAnchor>* MoveAnchors; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::System::Single Field_5_3; // 0x30
		::System::Int32 Field_5_4; // 0x34

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
