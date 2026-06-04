#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7DC2FAA7945CC705.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_66E9683B54478D99_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1425B5F0)
#define CLASS_4_66E9683B54478D99_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1425BDD0)
#define CLASS_4_66E9683B54478D99_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1425BAC0)
#define CLASS_4_66E9683B54478D99_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1425BB30)
#define CLASS_4_66E9683B54478D99_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1425B770)
#define CLASS_4_66E9683B54478D99_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1425B840)
#define CLASS_4_66E9683B54478D99_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1425B9E0)
#define CLASS_4_66E9683B54478D99_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1425BC90)
#define CLASS_4_66E9683B54478D99_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1425B640)
#define CLASS_4_66E9683B54478D99__CTOR_OFFSET UNITYSDK_OFFSET(0x1425B5E0)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1425BE20)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1425BF00)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1425BED0)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1425BEE0)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1425BEA0)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1425BEB0)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x1425BEC0)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x1425BEF0)
#define CLASS_4_66E9683B54478D99___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1425BE90)

inline static constexpr unsigned int Class_4_66E9683B54478D99_TypeDefinitionIndex = 46231;

class Class_4_66E9683B54478D99 : public ::Class_3_7DC2FAA7945CC705
{
public:
	::System::Single Field_4_0; // 0x50
	::System::Single Field_4_1; // 0x54
	::System::Boolean Field_4_2; // 0x58

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99_GETTYPEID_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66E9683B54478D99___IFIXBASEPROXY_GETTYPEID_OFFSET))(this);
	}
};
