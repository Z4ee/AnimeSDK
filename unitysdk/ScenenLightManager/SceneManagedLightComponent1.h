#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Transform; }

#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xE910B10)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE910A70)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE910BB0)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xE910BC0)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE910B50)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xE910B80)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE910B60)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xE910B90)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE910B40)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xE910B70)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0xE910BA0)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0xE910B30)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONTURNON_OFFSET UNITYSDK_OFFSET(0xE910B20)
#define SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1__CTOR_OFFSET UNITYSDK_OFFSET(0xE910BD0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int SceneManagedLightComponent1_TypeDefinitionIndex = 49498;

	class SceneManagedLightComponent1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_E4CB20B056222958* IMEKHJOPMDI; // 0x18
		::System::Boolean KAIGPKAJOAM; // 0x20
		::System::Boolean OINDCKEEHPF; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_lightTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_GET_LIGHTTRANSFORM_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void OnTurnOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONTURNON_OFFSET))(this);
		}

		::System::Void OnTurnOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONTURNOFF_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGEDLIGHTCOMPONENT1_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}
	};
}
