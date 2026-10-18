#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_899245DF777FB0AD.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_0_16E4307DCC419505_450;
class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_AEC3A955120B8107;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_A41A06D0251E8682_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15551D00)
#define CLASS_2_A41A06D0251E8682_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15551D50)
#define CLASS_2_A41A06D0251E8682_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12CDF0E0)
#define CLASS_2_A41A06D0251E8682_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x155529E0)
#define CLASS_2_A41A06D0251E8682_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15553090)
#define CLASS_2_A41A06D0251E8682_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15552C00)
#define CLASS_2_A41A06D0251E8682_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x155532E0)
#define CLASS_2_A41A06D0251E8682_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x155520E0)
#define CLASS_2_A41A06D0251E8682_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x15552130)
#define CLASS_2_A41A06D0251E8682_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15552020)
#define CLASS_2_A41A06D0251E8682_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x15552180)
#define CLASS_2_A41A06D0251E8682_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x155520A0)
#define CLASS_2_A41A06D0251E8682_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15551DF0)
#define CLASS_2_A41A06D0251E8682_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15552790)
#define CLASS_2_A41A06D0251E8682_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15552E20)
#define CLASS_2_A41A06D0251E8682_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x15553530)
#define CLASS_2_A41A06D0251E8682_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x15552060)
#define CLASS_2_A41A06D0251E8682_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x15551DA0)
#define CLASS_2_A41A06D0251E8682_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15551C00)
#define CLASS_2_A41A06D0251E8682__CCTOR_OFFSET UNITYSDK_OFFSET(0x15553750)
#define CLASS_2_A41A06D0251E8682__CTOR_OFFSET UNITYSDK_OFFSET(0x12CDF170)
#define CLASS_2_A41A06D0251E8682__UNSERIALIZEASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x15553780)

inline static constexpr unsigned int Class_2_A41A06D0251E8682_TypeDefinitionIndex = 49086;

class Class_2_A41A06D0251E8682 : public ::Class_1_899245DF777FB0AD
{
public:
	static ::Class_1_AEC3A955120B8107** StaticGet_OKOMBBIAKBL()
	{
		return (::Class_1_AEC3A955120B8107**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A41A06D0251E8682_TypeDefinitionIndex)->GetStaticField(0x5AA50);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_450*>* LPPLFNJENOF; // 0x20
	::UnityEngine::GameObject* OIBJBILPJHB; // 0x28
	::UnityEngine::GameObject* PANGKOPAOML; // 0x30

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_GETTYPEID_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONRELEASE_OFFSET))(this);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__6_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A41A06D0251E8682__UNSERIALIZEASYNC_B__6_0_OFFSET))(this, a1);
	}
};
