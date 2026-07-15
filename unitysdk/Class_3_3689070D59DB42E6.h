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

#define CLASS_3_3689070D59DB42E6_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1453F250)
#define CLASS_3_3689070D59DB42E6_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1453FAA0)
#define CLASS_3_3689070D59DB42E6_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1453F7B0)
#define CLASS_3_3689070D59DB42E6_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1453F8A0)
#define CLASS_3_3689070D59DB42E6_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x1453F760)
#define CLASS_3_3689070D59DB42E6_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1453F3D0)
#define CLASS_3_3689070D59DB42E6_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x1453FAE0)
#define CLASS_3_3689070D59DB42E6_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1453F4E0)
#define CLASS_3_3689070D59DB42E6_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1453F680)
#define CLASS_3_3689070D59DB42E6_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1453F960)
#define CLASS_3_3689070D59DB42E6_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1453F2A0)
#define CLASS_3_3689070D59DB42E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1453F240)

inline static constexpr unsigned int Class_3_3689070D59DB42E6_TypeDefinitionIndex = 47195;

class Class_3_3689070D59DB42E6 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*>
{
public:
	::System::Single Field_3_0; // 0x40
	::System::Boolean Field_3_1; // 0x44
	::System::Single Field_3_2; // 0x48

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_GETQUALITYFILTER_OFFSET))(this);
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

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3689070D59DB42E6_ONRELEASE_OFFSET))(this);
	}
};
