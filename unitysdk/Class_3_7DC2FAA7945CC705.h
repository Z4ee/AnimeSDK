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

#define CLASS_3_7DC2FAA7945CC705_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x13CD5330)
#define CLASS_3_7DC2FAA7945CC705_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x13CD5B80)
#define CLASS_3_7DC2FAA7945CC705_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x13CD5890)
#define CLASS_3_7DC2FAA7945CC705_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x13CD5980)
#define CLASS_3_7DC2FAA7945CC705_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x13CD5840)
#define CLASS_3_7DC2FAA7945CC705_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x13CD54B0)
#define CLASS_3_7DC2FAA7945CC705_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x13CD5BC0)
#define CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13CD55C0)
#define CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x13CD5760)
#define CLASS_3_7DC2FAA7945CC705_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x13CD5A40)
#define CLASS_3_7DC2FAA7945CC705_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x13CD5380)
#define CLASS_3_7DC2FAA7945CC705__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD5320)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x13CD5C20)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x13CD5DC0)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x13CD5E30)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x13CD5D70)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x13CD5C90)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13CD5CA0)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x13CD5D00)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x13CD5EA0)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x13CD5C80)

inline static constexpr unsigned int Class_3_7DC2FAA7945CC705_TypeDefinitionIndex = 46230;

class Class_3_7DC2FAA7945CC705 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*>
{
public:
	::System::Single Field_3_0; // 0x40
	::System::Single Field_3_1; // 0x44
	::System::Boolean Field_3_2; // 0x48

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONRELEASE_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}
};
