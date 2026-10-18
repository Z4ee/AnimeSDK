#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7AAFF9DFD3D41721.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIDragScope; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIDRAGGHOST_AWAKE_OFFSET UNITYSDK_OFFSET(0xE38E9C0)
#define RPG_CLIENT_UIDRAGGHOST_METHOD_5_A3BBE4D24F1C2B1F_OFFSET UNITYSDK_OFFSET(0xE38EED0)
#define RPG_CLIENT_UIDRAGGHOST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE38ED10)
#define RPG_CLIENT_UIDRAGGHOST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE38EAA0)
#define RPG_CLIENT_UIDRAGGHOST__CTOR_OFFSET UNITYSDK_OFFSET(0xE38EFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragGhost_TypeDefinitionIndex = 73059;

	class UIDragGhost : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIDragScope* OAMCDOCACHG; // 0x18
		::UnityEngine::RectTransform* JAKMENOCECF; // 0x20
		::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_A3BBE4D24F1C2B1F(::Struct_2_7AAFF9DFD3D41721 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_7AAFF9DFD3D41721))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGHOST_METHOD_5_A3BBE4D24F1C2B1F_OFFSET))(this, a1);
		}
	};
}
