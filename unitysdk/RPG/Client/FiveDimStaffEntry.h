#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FIVEDIMSTAFFENTRY_AWAKE_OFFSET UNITYSDK_OFFSET(0xD096C00)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_METHOD_6_4181217681EC94BE_OFFSET UNITYSDK_OFFSET(0xD096F40)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_METHOD_6_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xD096DA0)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD096D50)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xD096EF0)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xD0970B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimStaffEntry_TypeDefinitionIndex = 60510;

	class FiveDimStaffEntry : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::BoxCollider* Trigger; // 0x18
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::UnityEngine::Animation* KCOAILOHDND; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void Method_6_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_METHOD_6_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_6_4181217681EC94BE(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMSTAFFENTRY_METHOD_6_4181217681EC94BE_OFFSET))(this, a1);
		}
	};
}
