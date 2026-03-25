#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_METHOD_5_7B438E278CE1B5EB_OFFSET UNITYSDK_OFFSET(0xA056740)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA0569C0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA056970)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0566F0)
#define RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA056A10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelModelShadowView_TypeDefinitionIndex = 63782;

	class ChimeraDuelModelShadowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMODELSHADOWVIEW_ONENABLE_OFFSET))(this);
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
