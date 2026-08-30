#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4D01A2E7B479D8DE.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace RPG::Client { class EasyFog; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }

#define CLASS_4_B2587C457ADF95AB_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1AB8E580)
#define CLASS_4_B2587C457ADF95AB_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1AB8E600)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_151F18E94867FFE1_OFFSET UNITYSDK_OFFSET(0x1AB8EAD0)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_17B58EC18ED9693D_OFFSET UNITYSDK_OFFSET(0x1AB8E650)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1AB8EE20)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x1AB8FAB0)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x170C59A0)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x1AB8EB50)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x170C5AB0)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x170C58F0)
#define CLASS_4_B2587C457ADF95AB_METHOD_4_E1DE0017D8919A6A_OFFSET UNITYSDK_OFFSET(0x1AB8E540)
#define CLASS_4_B2587C457ADF95AB_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x170C65B0)
#define CLASS_4_B2587C457ADF95AB_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x170C6620)
#define CLASS_4_B2587C457ADF95AB_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x1AB8E390)
#define CLASS_4_B2587C457ADF95AB_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x170C6500)
#define CLASS_4_B2587C457ADF95AB_TICK_OFFSET UNITYSDK_OFFSET(0x170C5940)
#define CLASS_4_B2587C457ADF95AB_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x170C5B70)
#define CLASS_4_B2587C457ADF95AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB8FBE0)
#define CLASS_4_B2587C457ADF95AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8FBD0)
#define CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AB8FDB0)
#define CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_1_OFFSET UNITYSDK_OFFSET(0x1AB8FE20)
#define CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_2_OFFSET UNITYSDK_OFFSET(0x1AB8FE90)
#define CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_3_OFFSET UNITYSDK_OFFSET(0x1AB8FF00)
#define CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_4_OFFSET UNITYSDK_OFFSET(0x1AB8FF70)

inline static constexpr unsigned int Class_4_B2587C457ADF95AB_TypeDefinitionIndex = 70748;

class Class_4_B2587C457ADF95AB : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::System::String** StaticGet_EJFDCCKIGMM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x606F0);
	}
	static ::System::String** StaticGet_JLHJGLHPDDL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x606F8);
	}
	static ::System::Int32* StaticGet_MDOHOJFAPJJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CE0);
	}
	static ::System::Int32* StaticGet_IKDIOMKFKDP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CE4);
	}
	static ::System::Int32* StaticGet_LNGCDCFKKAD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CE8);
	}
	static ::System::Int32* StaticGet_BODIHDDKFDA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CEC);
	}
	static ::System::Int32* StaticGet_HFKPPDDCIAO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CF0);
	}
	static ::System::Int32* StaticGet_IOMOBDGGLBH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CF4);
	}
	static ::System::Int32* StaticGet_JCFOGPACIDK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CF8);
	}
	static ::System::Int32* StaticGet_EPOFPOEOMDF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13CFC);
	}
	static ::System::Int32* StaticGet_BBGBLKFFOOB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D00);
	}
	static ::System::Int32* StaticGet_OOCBBBDIGPE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D04);
	}
	static ::System::Int32* StaticGet_FIHFCMHIJKI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D08);
	}
	static ::System::Int32* StaticGet_HNOKAEEIPJI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D0C);
	}
	static ::System::Int32* StaticGet_DDBABIMHPHA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D10);
	}
	static ::System::Int32* StaticGet_MDCEEEMDLML()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D14);
	}
	static ::System::Int32* StaticGet_JIABONOMNIN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D18);
	}
	static ::System::Int32* StaticGet_GNCOEPJEEMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D1C);
	}
	static ::System::Int32* StaticGet_ILGPNGNOJCK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D20);
	}
	static ::System::Int32* StaticGet_JHKKBEJFMJK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D24);
	}
	static ::System::Int32* StaticGet_BPPGOMPJCMK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D28);
	}
	static ::System::Int32* StaticGet_DLPPOEFAGFB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D2C);
	}
	static ::System::Int32* StaticGet_MGABEFLCKOC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D30);
	}
	static ::System::Int32* StaticGet_HKLNHJDIINF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_B2587C457ADF95AB_TypeDefinitionIndex)->GetStaticField(0x13D34);
	}
	::UnityEngine::MaterialPropertyBlock* ACDAFHAFPHI; // 0x48
	::UnityEngine::Renderer* OMPBEGMFNGM; // 0x50
	::UnityEngine::Material* GKFAFNFNPKA; // 0x58
	::System::Single CCIDCHOPEJO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB__CCTOR_OFFSET))();
	}

	::System::Void Method_4_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_GETTYPEID_OFFSET))(this);
	}

	::UnityEngine::Material* Method_4_17B58EC18ED9693D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_17B58EC18ED9693D_OFFSET))(this);
	}

	::System::Void Method_4_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_4_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_4_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_50131F4CF014469C_OFFSET))(this);
	}

	static ::System::Void Method_4_151F18E94867FFE1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_151F18E94867FFE1_OFFSET))(a1);
	}

	::RPG::Client::EasyFog* Method_4_E1DE0017D8919A6A()
	{
		return ((::RPG::Client::EasyFog*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB_METHOD_4_E1DE0017D8919A6A_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__4_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_0_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_1_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_2(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_2_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_3(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_3_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_4(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB__UNSERIALIZEASYNC_B__4_4_OFFSET))(this, a1);
	}
};
