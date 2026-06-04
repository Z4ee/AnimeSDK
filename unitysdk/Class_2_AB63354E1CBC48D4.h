#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_899245DF777FB0AD.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_0_16E4307DCC419505_326;
class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_AEC3A955120B8107;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_AB63354E1CBC48D4_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x12AB9790)
#define CLASS_2_AB63354E1CBC48D4_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x12AB97E0)
#define CLASS_2_AB63354E1CBC48D4_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12AB95C0)
#define CLASS_2_AB63354E1CBC48D4_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x12ABA3B0)
#define CLASS_2_AB63354E1CBC48D4_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x12ABA9A0)
#define CLASS_2_AB63354E1CBC48D4_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x12ABA5A0)
#define CLASS_2_AB63354E1CBC48D4_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x12ABAB90)
#define CLASS_2_AB63354E1CBC48D4_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x12AB9B30)
#define CLASS_2_AB63354E1CBC48D4_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x12AB9B80)
#define CLASS_2_AB63354E1CBC48D4_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x12AB9A70)
#define CLASS_2_AB63354E1CBC48D4_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x12AB9BD0)
#define CLASS_2_AB63354E1CBC48D4_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x12AB9AF0)
#define CLASS_2_AB63354E1CBC48D4_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x12AB9880)
#define CLASS_2_AB63354E1CBC48D4_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x12ABA1A0)
#define CLASS_2_AB63354E1CBC48D4_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x12ABA790)
#define CLASS_2_AB63354E1CBC48D4_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x12ABAD80)
#define CLASS_2_AB63354E1CBC48D4_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x12AB9AB0)
#define CLASS_2_AB63354E1CBC48D4_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x12AB9830)
#define CLASS_2_AB63354E1CBC48D4_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x12AB9690)
#define CLASS_2_AB63354E1CBC48D4__CCTOR_OFFSET UNITYSDK_OFFSET(0x12ABAF70)
#define CLASS_2_AB63354E1CBC48D4__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB9650)
#define CLASS_2_AB63354E1CBC48D4__UNSERIALIZEASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x12ABAFA0)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x12ABB070)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x12ABB250)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x12ABB380)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x12ABB2B0)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x12ABB3F0)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x12ABB190)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x12ABB1F0)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x12ABB310)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x12ABB460)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x12ABB130)
#define CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x12ABB0D0)

inline static constexpr unsigned int Class_2_AB63354E1CBC48D4_TypeDefinitionIndex = 46267;

class Class_2_AB63354E1CBC48D4 : public ::Class_1_899245DF777FB0AD
{
public:
	static ::Class_1_AEC3A955120B8107** StaticGet_Field_2_0()
	{
		return (::Class_1_AEC3A955120B8107**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AB63354E1CBC48D4_TypeDefinitionIndex)->GetStaticField(0x2B2D0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_326*>* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_GETTYPEID_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__6_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4__UNSERIALIZEASYNC_B__6_0_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB63354E1CBC48D4___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}
};
