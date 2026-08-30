#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FIVEDIMSTAFFENTRY_AWAKE_OFFSET UNITYSDK_OFFSET(0x190D1670)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_METHOD_6_4181217681EC94BE_OFFSET UNITYSDK_OFFSET(0x190D19B0)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_METHOD_6_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x190D1810)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x190D17C0)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x190D1960)
#define RPG_CLIENT_FIVEDIMSTAFFENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x190D1B20)

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
