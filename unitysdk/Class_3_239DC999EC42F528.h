#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_26377AA2C176BCA5.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
namespace RPG::CustomRP { class CRPProbe; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ReflectionProbe; }

#define CLASS_3_239DC999EC42F528_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x95F72A0)
#define CLASS_3_239DC999EC42F528_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x95F72F0)
#define CLASS_3_239DC999EC42F528_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x95F70F0)
#define CLASS_3_239DC999EC42F528_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x95F7380)
#define CLASS_3_239DC999EC42F528_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x95F7340)
#define CLASS_3_239DC999EC42F528_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x95F7130)
#define CLASS_3_239DC999EC42F528_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x95F6FA0)
#define CLASS_3_239DC999EC42F528__CTOR_OFFSET UNITYSDK_OFFSET(0x95F6F90)
#define CLASS_3_239DC999EC42F528___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x95F74F0)
#define CLASS_3_239DC999EC42F528___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x95F7560)
#define CLASS_3_239DC999EC42F528___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x95F7480)
#define CLASS_3_239DC999EC42F528___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x95F7470)

inline static constexpr unsigned int Class_3_239DC999EC42F528_TypeDefinitionIndex = 45646;

class Class_3_239DC999EC42F528 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CRPProbe*, ::UnityEngine::ReflectionProbe*>
{
public:
	::System::Single Field_3_0; // 0x40
	::System::Boolean Field_3_1; // 0x44

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528__CTOR_OFFSET))(this, a1);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* P0, ::ScenenLightManager::BaseComponentExportData* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239DC999EC42F528___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}
};
