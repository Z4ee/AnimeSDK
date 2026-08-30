#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_899245DF777FB0AD.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_0_16E4307DCC419505_369;
class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_AEC3A955120B8107;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_A41A06D0251E8682_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x19BF4040)
#define CLASS_2_A41A06D0251E8682_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x19BF4090)
#define CLASS_2_A41A06D0251E8682_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x19BF3E70)
#define CLASS_2_A41A06D0251E8682_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x19BF4D20)
#define CLASS_2_A41A06D0251E8682_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x19BF53D0)
#define CLASS_2_A41A06D0251E8682_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x19BF4F40)
#define CLASS_2_A41A06D0251E8682_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x19BF5620)
#define CLASS_2_A41A06D0251E8682_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x19BF4420)
#define CLASS_2_A41A06D0251E8682_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x19BF4470)
#define CLASS_2_A41A06D0251E8682_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x19BF4360)
#define CLASS_2_A41A06D0251E8682_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x19BF44C0)
#define CLASS_2_A41A06D0251E8682_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x19BF43E0)
#define CLASS_2_A41A06D0251E8682_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x19BF4130)
#define CLASS_2_A41A06D0251E8682_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x19BF4AD0)
#define CLASS_2_A41A06D0251E8682_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x19BF5160)
#define CLASS_2_A41A06D0251E8682_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x19BF5870)
#define CLASS_2_A41A06D0251E8682_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x19BF43A0)
#define CLASS_2_A41A06D0251E8682_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x19BF40E0)
#define CLASS_2_A41A06D0251E8682_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x19BF3F40)
#define CLASS_2_A41A06D0251E8682__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF5A90)
#define CLASS_2_A41A06D0251E8682__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF3F00)
#define CLASS_2_A41A06D0251E8682__UNSERIALIZEASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x19BF5AC0)

inline static constexpr unsigned int Class_2_A41A06D0251E8682_TypeDefinitionIndex = 49512;

class Class_2_A41A06D0251E8682 : public ::Class_1_899245DF777FB0AD
{
public:
	static ::Class_1_AEC3A955120B8107** StaticGet_OKOMBBIAKBL()
	{
		return (::Class_1_AEC3A955120B8107**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A41A06D0251E8682_TypeDefinitionIndex)->GetStaticField(0x185D0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_369*>* LPPLFNJENOF; // 0x20
	::UnityEngine::GameObject* PANGKOPAOML; // 0x28
	::UnityEngine::GameObject* OIBJBILPJHB; // 0x30

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
