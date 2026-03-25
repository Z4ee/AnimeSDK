#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_899245DF777FB0AD.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
class Class_1_E4CB20B056222958;
class Class_3_3CD00A1D2AD9A3A8;
namespace RPG::Client { class BillboardController; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_AF3AF723C478F113_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x8C00590)
#define CLASS_2_AF3AF723C478F113_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x8C00500)
#define CLASS_2_AF3AF723C478F113_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x8C00460)
#define CLASS_2_AF3AF723C478F113_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x8C00E70)
#define CLASS_2_AF3AF723C478F113_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x8C00550)
#define CLASS_2_AF3AF723C478F113_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x8C00E00)
#define CLASS_2_AF3AF723C478F113_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8C005E0)
#define CLASS_2_AF3AF723C478F113_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x8C00CF0)
#define CLASS_2_AF3AF723C478F113_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x8C004B0)
#define CLASS_2_AF3AF723C478F113_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x8C00660)
#define CLASS_2_AF3AF723C478F113__CTOR_OFFSET UNITYSDK_OFFSET(0x8C00370)
#define CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_0_OFFSET UNITYSDK_OFFSET(0x8C00EB0)
#define CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_1_OFFSET UNITYSDK_OFFSET(0x8C00EE0)
#define CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x8C00F80)
#define CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x8C00FF0)
#define CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x8C01060)
#define CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x8C00F10)

inline static constexpr unsigned int Class_2_AF3AF723C478F113_TypeDefinitionIndex = 39728;

class Class_2_AF3AF723C478F113 : public ::Class_1_899245DF777FB0AD
{
public:
	::Class_3_3CD00A1D2AD9A3A8* Field_2_1; // 0x20
	::RPG::Client::BillboardController* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x38

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONPUTTOPOOL_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__12_0(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_0_OFFSET))(this, m);
	}

	::System::Void _UnserializeAsync_b__12_1(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113__UNSERIALIZEASYNC_B__12_1_OFFSET))(this, m);
	}

	::System::Void __iFixBaseProxy_SetHostManagedLight(::Class_1_E4CB20B056222958* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_SETHOSTMANAGEDLIGHT_OFFSET))(this, P0);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET))(this);
	}
};
