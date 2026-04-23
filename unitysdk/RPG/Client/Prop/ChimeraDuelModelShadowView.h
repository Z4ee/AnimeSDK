#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelModelShadowView_EventType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_METHOD_5_7B438E278CE1B5EB_OFFSET UNITYSDK_OFFSET(0xADC0FC0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xADD5680)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xADD5620)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xADD5560)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_START_OFFSET UNITYSDK_OFFSET(0xADD55C0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xADD56D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelModelShadowView_TypeDefinitionIndex = 71828;

	class ChimeraDuelModelShadowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::RPG::Client::Prop::ChimeraDuelModelShadowView_EventType _AutoEnableEvent; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_7B438E278CE1B5EB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_METHOD_5_7B438E278CE1B5EB_OFFSET))(this, a1);
		}
	};
}
