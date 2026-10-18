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

#define CLASS_3_3689070D59DB42E6_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15E68BC0)
#define CLASS_3_3689070D59DB42E6_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15E698C0)
#define CLASS_3_3689070D59DB42E6_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x15E697B0)
#define CLASS_3_3689070D59DB42E6_METHOD_3_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x15E69870)
#define CLASS_3_3689070D59DB42E6_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15E694B0)
#define CLASS_3_3689070D59DB42E6_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15E695A0)
#define CLASS_3_3689070D59DB42E6_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15E69360)
#define CLASS_3_3689070D59DB42E6_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x15E68EA0)
#define CLASS_3_3689070D59DB42E6_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15E68C10)
#define CLASS_3_3689070D59DB42E6_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15E69900)
#define CLASS_3_3689070D59DB42E6_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15E690E0)
#define CLASS_3_3689070D59DB42E6_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15E69280)
#define CLASS_3_3689070D59DB42E6_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x15E69660)
#define CLASS_3_3689070D59DB42E6_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15E68D70)
#define CLASS_3_3689070D59DB42E6__CTOR_OFFSET UNITYSDK_OFFSET(0x15E68BB0)

inline static constexpr unsigned int Class_3_3689070D59DB42E6_TypeDefinitionIndex = 49049;

class Class_3_3689070D59DB42E6 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*>
{
public:
	::System::Single DJPCKGAJFKP; // 0x40
	::System::Single CCIDCHOPEJO; // 0x44
	::System::Single LICHAEJHAJO; // 0x48
	::System::Boolean GIKNGLNMPOO; // 0x4C

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
