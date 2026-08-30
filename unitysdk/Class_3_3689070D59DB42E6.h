#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_26377AA2C176BCA5.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define CLASS_3_3689070D59DB42E6_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15B4CC40)
#define CLASS_3_3689070D59DB42E6_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15B4D940)
#define CLASS_3_3689070D59DB42E6_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x15B4D830)
#define CLASS_3_3689070D59DB42E6_METHOD_3_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x15B4D8F0)
#define CLASS_3_3689070D59DB42E6_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15B4D530)
#define CLASS_3_3689070D59DB42E6_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15B4D620)
#define CLASS_3_3689070D59DB42E6_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15B4D3E0)
#define CLASS_3_3689070D59DB42E6_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x15B4CF20)
#define CLASS_3_3689070D59DB42E6_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15B4CC90)
#define CLASS_3_3689070D59DB42E6_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15B4D980)
#define CLASS_3_3689070D59DB42E6_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15B4D160)
#define CLASS_3_3689070D59DB42E6_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15B4D300)
#define CLASS_3_3689070D59DB42E6_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x15B4D6E0)
#define CLASS_3_3689070D59DB42E6_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15B4CDF0)
#define CLASS_3_3689070D59DB42E6__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4CC30)

inline static constexpr unsigned int Class_3_3689070D59DB42E6_TypeDefinitionIndex = 49475;

class Class_3_3689070D59DB42E6 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*>
{
public:
	::System::Single LICHAEJHAJO; // 0x40
	::System::Single DJPCKGAJFKP; // 0x44
	::System::Boolean GIKNGLNMPOO; // 0x48
	::System::Single CCIDCHOPEJO; // 0x4C

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_METHOD_3_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONRELEASE_OFFSET))(this);
	}
};
