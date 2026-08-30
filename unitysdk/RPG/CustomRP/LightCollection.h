#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/LightCollection_LightMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }

#define RPG_CUSTOMRP_LIGHTCOLLECTION_APPLYLIGHTMODE_OFFSET UNITYSDK_OFFSET(0xE447D80)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_GET_MODE_OFFSET UNITYSDK_OFFSET(0xE447CC0)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_METHOD_5_4A3C3BDB6511B6FD_OFFSET UNITYSDK_OFFSET(0xE447E70)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE447DF0)
#define RPG_CUSTOMRP_LIGHTCOLLECTION_SET_MODE_OFFSET UNITYSDK_OFFSET(0xE447CD0)
#define RPG_CUSTOMRP_LIGHTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE447FA0)
#define RPG_CUSTOMRP_LIGHTCOLLECTION__GET_LIGHTSCANNOTBEBAKED_B__9_0_OFFSET UNITYSDK_OFFSET(0xE447FB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LightCollection_TypeDefinitionIndex = 52132;

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

		::System::Collections::Generic::List_1<::UnityEngine::Light*>* Method_5_4A3C3BDB6511B6FD()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION_METHOD_5_4A3C3BDB6511B6FD_OFFSET))(this);
		}

		::System::Boolean _get_LightsCanNotBeBaked_b__9_0(::UnityEngine::Light* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTCOLLECTION__GET_LIGHTSCANNOTBEBAKED_B__9_0_OFFSET))(this, a1);
		}
	};
}
