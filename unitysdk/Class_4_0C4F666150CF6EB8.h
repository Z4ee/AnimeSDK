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

#define CLASS_4_0C4F666150CF6EB8_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1744F4B0)
#define CLASS_4_0C4F666150CF6EB8_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1744F530)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_151F18E94867FFE1_OFFSET UNITYSDK_OFFSET(0x1744DE20)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_17B58EC18ED9693D_OFFSET UNITYSDK_OFFSET(0x1744F580)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1744E570)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x1744FA00)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1744DC10)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x1744D8E0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1744DD60)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x1744D890)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_E1DE0017D8919A6A_OFFSET UNITYSDK_OFFSET(0x1744DD20)
#define CLASS_4_0C4F666150CF6EB8_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1744F200)
#define CLASS_4_0C4F666150CF6EB8_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1744F270)
#define CLASS_4_0C4F666150CF6EB8_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x1744F300)
#define CLASS_4_0C4F666150CF6EB8_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x1744E4C0)
#define CLASS_4_0C4F666150CF6EB8_TICK_OFFSET UNITYSDK_OFFSET(0x1744DBB0)
#define CLASS_4_0C4F666150CF6EB8_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1744DEA0)
#define CLASS_4_0C4F666150CF6EB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1744FB30)
#define CLASS_4_0C4F666150CF6EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1744FB20)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x1744FD00)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_1_OFFSET UNITYSDK_OFFSET(0x1744FD70)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_2_OFFSET UNITYSDK_OFFSET(0x1744FDE0)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_3_OFFSET UNITYSDK_OFFSET(0x1744FE50)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_4_OFFSET UNITYSDK_OFFSET(0x1744FEC0)

inline static constexpr unsigned int Class_4_0C4F666150CF6EB8_TypeDefinitionIndex = 67625;

class Class_4_0C4F666150CF6EB8 : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::System::String** StaticGet_Field_4_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x358A0);
	}
	static ::System::String** StaticGet_Field_4_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x358A8);
	}
	static ::System::Int32* StaticGet_Field_4_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8CF0);
	}
	static ::System::Int32* StaticGet_Field_4_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8CF4);
	}
	static ::System::Int32* StaticGet_Field_4_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8CF8);
	}
	static ::System::Int32* StaticGet_Field_4_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8CFC);
	}
	static ::System::Int32* StaticGet_Field_4_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D00);
	}
	static ::System::Int32* StaticGet_Field_4_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D04);
	}
	static ::System::Int32* StaticGet_Field_4_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D08);
	}
	static ::System::Int32* StaticGet_Field_4_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D0C);
	}
	static ::System::Int32* StaticGet_Field_4_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D10);
	}
	static ::System::Int32* StaticGet_Field_4_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D14);
	}
	static ::System::Int32* StaticGet_Field_4_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D18);
	}
	static ::System::Int32* StaticGet_Field_4_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D1C);
	}
	static ::System::Int32* StaticGet_Field_4_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D20);
	}
	static ::System::Int32* StaticGet_Field_4_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D24);
	}
	static ::System::Int32* StaticGet_Field_4_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D28);
	}
	static ::System::Int32* StaticGet_Field_4_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D2C);
	}
	static ::System::Int32* StaticGet_Field_4_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D30);
	}
	static ::System::Int32* StaticGet_Field_4_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D34);
	}
	static ::System::Int32* StaticGet_Field_4_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D38);
	}
	static ::System::Int32* StaticGet_Field_4_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D3C);
	}
	static ::System::Int32* StaticGet_Field_4_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D40);
	}
	static ::System::Int32* StaticGet_Field_4_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x8D44);
	}
	::UnityEngine::Material* Field_4_24; // 0x48
	::UnityEngine::MaterialPropertyBlock* Field_4_25; // 0x50
	::UnityEngine::Renderer* Field_4_26; // 0x58
	::System::Single Field_4_27; // 0x60

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
