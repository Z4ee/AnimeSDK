#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_26377AA2C176BCA5.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define CLASS_3_6FD386A847FC5579_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x92BB710)
#define CLASS_3_6FD386A847FC5579_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x92BBF50)
#define CLASS_3_6FD386A847FC5579_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x92BBC60)
#define CLASS_3_6FD386A847FC5579_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x92BBD50)
#define CLASS_3_6FD386A847FC5579_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x92BBC10)
#define CLASS_3_6FD386A847FC5579_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x92BB880)
#define CLASS_3_6FD386A847FC5579_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x92BBF90)
#define CLASS_3_6FD386A847FC5579_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x92BB990)
#define CLASS_3_6FD386A847FC5579_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x92BBB30)
#define CLASS_3_6FD386A847FC5579_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x92BBE10)
#define CLASS_3_6FD386A847FC5579_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x92BB760)
#define CLASS_3_6FD386A847FC5579__CTOR_OFFSET UNITYSDK_OFFSET(0x92BB700)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x92BBFF0)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x92BC1C0)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x92BC230)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x92BC170)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x92BC070)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x92BC080)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x92BC0F0)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x92BC2A0)
#define CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x92BC060)

inline static constexpr unsigned int Class_3_6FD386A847FC5579_TypeDefinitionIndex = 45647;

class Class_3_6FD386A847FC5579 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*>
{
public:
	::System::Single Field_3_2; // 0x40
	::System::Single Field_3_0; // 0x44
	::System::Boolean Field_3_1; // 0x48

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579_ONRELEASE_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* P0, ::ScenenLightManager::BaseComponentExportData* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnSceneLightLodFading(::System::Single P0, ::ScenenLightManager::FadingState P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy_OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightLodFading(::ScenenLightManager::FadingState P0, ::System::Int32 P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightLodFading(::ScenenLightManager::FadingState P0, ::System::Int32 P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnSetSceneLightLod(::System::Int32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6FD386A847FC5579___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET))(this, P0);
	}
};
