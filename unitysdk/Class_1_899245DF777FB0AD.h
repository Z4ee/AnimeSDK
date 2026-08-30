#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Transform; }

#define CLASS_1_899245DF777FB0AD_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x176F6F90)
#define CLASS_1_899245DF777FB0AD_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x176F6EE0)
#define CLASS_1_899245DF777FB0AD_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x176F7440)
#define CLASS_1_899245DF777FB0AD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x176F7400)
#define CLASS_1_899245DF777FB0AD_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x176F7110)
#define CLASS_1_899245DF777FB0AD_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x176F7220)
#define CLASS_1_899245DF777FB0AD_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x176F7160)
#define CLASS_1_899245DF777FB0AD_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x176F7280)
#define CLASS_1_899245DF777FB0AD_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x176F73C0)
#define CLASS_1_899245DF777FB0AD_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x176F7370)
#define CLASS_1_899245DF777FB0AD_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x176F70B0)
#define CLASS_1_899245DF777FB0AD_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x176F71B0)
#define CLASS_1_899245DF777FB0AD_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x176F72E0)
#define CLASS_1_899245DF777FB0AD_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0x176F7070)
#define CLASS_1_899245DF777FB0AD_ONTURNON_OFFSET UNITYSDK_OFFSET(0x176F7030)
#define CLASS_1_899245DF777FB0AD_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x176F7330)
#define CLASS_1_899245DF777FB0AD_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x176F6FE0)
#define CLASS_1_899245DF777FB0AD__CTOR_OFFSET UNITYSDK_OFFSET(0x176F7490)

inline static constexpr unsigned int Class_1_899245DF777FB0AD_TypeDefinitionIndex = 49499;

class Class_1_899245DF777FB0AD : public ::System::Object
{
public:
	::Class_1_E4CB20B056222958* IMEKHJOPMDI; // 0x10
	::System::Boolean KAIGPKAJOAM; // 0x18
	::System::Boolean OINDCKEEHPF; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* get_lightTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_GET_LIGHTTRANSFORM_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnTurnOn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONTURNON_OFFSET))(this);
	}

	::System::Void OnTurnOff()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONTURNOFF_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_899245DF777FB0AD_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
