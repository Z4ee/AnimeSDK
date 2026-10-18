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

#define CLASS_4_0C4F666150CF6EB8_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xC378AC0)
#define CLASS_4_0C4F666150CF6EB8_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xC378B40)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_151F18E94867FFE1_OFFSET UNITYSDK_OFFSET(0xC377430)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_17B58EC18ED9693D_OFFSET UNITYSDK_OFFSET(0xC378B90)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xC377B80)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0xC379010)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xC377220)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xC376EF0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xC377370)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xC376EA0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_E1DE0017D8919A6A_OFFSET UNITYSDK_OFFSET(0xC377330)
#define CLASS_4_0C4F666150CF6EB8_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xC378810)
#define CLASS_4_0C4F666150CF6EB8_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xC378880)
#define CLASS_4_0C4F666150CF6EB8_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xC378910)
#define CLASS_4_0C4F666150CF6EB8_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xC377AD0)
#define CLASS_4_0C4F666150CF6EB8_TICK_OFFSET UNITYSDK_OFFSET(0xC3771C0)
#define CLASS_4_0C4F666150CF6EB8_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xC3774B0)
#define CLASS_4_0C4F666150CF6EB8__CCTOR_OFFSET UNITYSDK_OFFSET(0xC379140)
#define CLASS_4_0C4F666150CF6EB8__CTOR_OFFSET UNITYSDK_OFFSET(0xC379130)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0xC379310)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_1_OFFSET UNITYSDK_OFFSET(0xC379380)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_2_OFFSET UNITYSDK_OFFSET(0xC3793F0)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_3_OFFSET UNITYSDK_OFFSET(0xC379460)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_4_OFFSET UNITYSDK_OFFSET(0xC3794D0)

inline static constexpr unsigned int Class_4_0C4F666150CF6EB8_TypeDefinitionIndex = 70785;

class Class_4_0C4F666150CF6EB8 : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::System::String** StaticGet_EJFDCCKIGMM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xC680);
	}
	static ::System::String** StaticGet_JLHJGLHPDDL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xC688);
	}
	static ::System::Int32* StaticGet_EPOFPOEOMDF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x2990);
	}
	static ::System::Int32* StaticGet_HNOKAEEIPJI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x2994);
	}
	static ::System::Int32* StaticGet_DLPPOEFAGFB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x2998);
	}
	static ::System::Int32* StaticGet_GNCOEPJEEMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x299C);
	}
	static ::System::Int32* StaticGet_BODIHDDKFDA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29A0);
	}
	static ::System::Int32* StaticGet_MGABEFLCKOC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29A4);
	}
	static ::System::Int32* StaticGet_DDBABIMHPHA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29A8);
	}
	static ::System::Int32* StaticGet_MDOHOJFAPJJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29AC);
	}
	static ::System::Int32* StaticGet_JHKKBEJFMJK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29B0);
	}
	static ::System::Int32* StaticGet_ILGPNGNOJCK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29B4);
	}
	static ::System::Int32* StaticGet_LNGCDCFKKAD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29B8);
	}
	static ::System::Int32* StaticGet_FIHFCMHIJKI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29BC);
	}
	static ::System::Int32* StaticGet_IKDIOMKFKDP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29C0);
	}
	static ::System::Int32* StaticGet_BPPGOMPJCMK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29C4);
	}
	static ::System::Int32* StaticGet_OOCBBBDIGPE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29C8);
	}
	static ::System::Int32* StaticGet_BBGBLKFFOOB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29CC);
	}
	static ::System::Int32* StaticGet_IOMOBDGGLBH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29D0);
	}
	static ::System::Int32* StaticGet_JCFOGPACIDK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29D4);
	}
	static ::System::Int32* StaticGet_MDCEEEMDLML()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29D8);
	}
	static ::System::Int32* StaticGet_JIABONOMNIN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29DC);
	}
	static ::System::Int32* StaticGet_HKLNHJDIINF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29E0);
	}
	static ::System::Int32* StaticGet_HFKPPDDCIAO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x29E4);
	}
	::UnityEngine::Renderer* OMPBEGMFNGM; // 0x48
	::UnityEngine::MaterialPropertyBlock* ACDAFHAFPHI; // 0x50
	::UnityEngine::Material* GKFAFNFNPKA; // 0x58
	::System::Single CCIDCHOPEJO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__CCTOR_OFFSET))();
	}

	::System::Void Method_4_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_GETTYPEID_OFFSET))(this);
	}

	::UnityEngine::Material* Method_4_17B58EC18ED9693D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_17B58EC18ED9693D_OFFSET))(this);
	}

	::System::Void Method_4_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_4_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_4_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_50131F4CF014469C_OFFSET))(this);
	}

	static ::System::Void Method_4_151F18E94867FFE1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_151F18E94867FFE1_OFFSET))(a1);
	}

	::RPG::Client::EasyFog* Method_4_E1DE0017D8919A6A()
	{
		return ((::RPG::Client::EasyFog*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_E1DE0017D8919A6A_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__4_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_0_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_1_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_2(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_2_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_3(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_3_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_4(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_4_OFFSET))(this, a1);
	}
};
