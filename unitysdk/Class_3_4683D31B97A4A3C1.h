#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_26377AA2C176BCA5.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace RPG::CustomRP { class CRPProbe; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ReflectionProbe; }

#define CLASS_3_4683D31B97A4A3C1_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x13D2A7A0)
#define CLASS_3_4683D31B97A4A3C1_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x13D2A7F0)
#define CLASS_3_4683D31B97A4A3C1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D2A5F0)
#define CLASS_3_4683D31B97A4A3C1_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x13D2A880)
#define CLASS_3_4683D31B97A4A3C1_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x13D2A840)
#define CLASS_3_4683D31B97A4A3C1_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13D2A630)
#define CLASS_3_4683D31B97A4A3C1_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x13D2A4A0)
#define CLASS_3_4683D31B97A4A3C1__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2A490)
#define CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x13D2A9E0)
#define CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x13D2AA40)
#define CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13D2A980)
#define CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x13D2A970)

inline static constexpr unsigned int Class_3_4683D31B97A4A3C1_TypeDefinitionIndex = 46229;

class Class_3_4683D31B97A4A3C1 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CRPProbe*, ::UnityEngine::ReflectionProbe*>
{
public:
	::System::Boolean Field_3_0; // 0x40
	::System::Single Field_3_1; // 0x44

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1__CTOR_OFFSET))(this, a1);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4683D31B97A4A3C1___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}
};
