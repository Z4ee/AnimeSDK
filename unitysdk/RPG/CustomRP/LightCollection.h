#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/LightCollection_LightMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }

#define RPG_CUSTOMRP_LIGHTCOLLECTION_APPLYLIGHTMODE_OFFSET UNITYSDK_OFFSET(0xA7AAB30)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA7AAA70)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_METHOD_5_778B92FF9B739AF4_OFFSET UNITYSDK_OFFSET(0xA7AAC20)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA7AABA0)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_SET_MODE_OFFSET UNITYSDK_OFFSET(0xA7AAA80)
#define RPG_CUSTOMRP_LIGHTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA7AAD30)
#define RPG_CUSTOMRP_LIGHTCOLLECTION__GET_LIGHTSCANNOTBEBAKED_B__9_0_OFFSET UNITYSDK_OFFSET(0xA7AAD40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LightCollection_TypeDefinitionIndex = 41871;

	class LightCollection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::CustomLightQualityFilter qualityFilter; // 0x18
		::RPG::CustomRP::LightCollection_LightMode m_Mode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION__CTOR_OFFSET))(this);
		}

		::RPG::CustomRP::LightCollection_LightMode get_Mode()
		{
			return ((::RPG::CustomRP::LightCollection_LightMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::RPG::CustomRP::LightCollection_LightMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::LightCollection_LightMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION_SET_MODE_OFFSET))(this, a1);
		}

		::System::Void ApplyLightMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION_APPLYLIGHTMODE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION_ONENABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Light*>* Method_5_778B92FF9B739AF4()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION_METHOD_5_778B92FF9B739AF4_OFFSET))(this);
		}

		::System::Boolean _get_LightsCanNotBeBaked_b__9_0(::UnityEngine::Light* l)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION__GET_LIGHTSCANNOTBEBAKED_B__9_0_OFFSET))(this, l);
		}
	};
}
