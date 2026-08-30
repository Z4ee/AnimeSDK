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

#define CLASS_3_4683D31B97A4A3C1_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1AA57CF0)
#define CLASS_3_4683D31B97A4A3C1_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1AA57D40)
#define CLASS_3_4683D31B97A4A3C1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AA57B40)
#define CLASS_3_4683D31B97A4A3C1_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x1AA57DD0)
#define CLASS_3_4683D31B97A4A3C1_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x1AA57D90)
#define CLASS_3_4683D31B97A4A3C1_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1AA57B80)
#define CLASS_3_4683D31B97A4A3C1_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1AA579F0)
#define CLASS_3_4683D31B97A4A3C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA579E0)

inline static constexpr unsigned int Class_3_4683D31B97A4A3C1_TypeDefinitionIndex = 49474;

class Class_3_4683D31B97A4A3C1 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CRPProbe*, ::UnityEngine::ReflectionProbe*>
{
public:
	::System::Boolean GIKNGLNMPOO; // 0x40
	::System::Single CCIDCHOPEJO; // 0x44

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
};
