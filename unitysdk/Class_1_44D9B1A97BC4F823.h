#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RogueDLCCompass_RingPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MultiLightEffectMaterialBlock; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_44D9B1A97BC4F823_METHOD_1_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x14D8DAF0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x14D8E080)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_20FFED4976A10875_OFFSET UNITYSDK_OFFSET(0x14D8D3F0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x14D8EFF0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x14D8DEE0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_4F8BD755AF34B283_OFFSET UNITYSDK_OFFSET(0x14D8E870)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_6BF28FCDB3FDACE9_OFFSET UNITYSDK_OFFSET(0x14D8EC70)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x14D8F340)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14D8DA50)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14D8EFB0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x14D8E750)
#define CLASS_1_44D9B1A97BC4F823__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D8F3E0)
#define CLASS_1_44D9B1A97BC4F823__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8F3C0)

inline static constexpr unsigned int Class_1_44D9B1A97BC4F823_TypeDefinitionIndex = 74996;

class Class_1_44D9B1A97BC4F823 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x4660);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x4664);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x4668);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x4678);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_4()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x467C);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_5()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x468C);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x469C);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x46AC);
	}
	static ::System::Single* StaticGet_Field_1_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x46B0);
	}
	static ::System::Single* StaticGet_Field_1_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x46B4);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_10()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x46B8);
	}
	static ::System::Single* StaticGet_Field_1_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x46C8);
	}
	static ::System::Single* StaticGet_Field_1_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x46CC);
	}
	static ::System::Single* StaticGet_Field_1_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x46D0);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_14; // 0x10
	::UnityEngine::Transform* Field_1_15; // 0x18
	::System::Action* Field_1_16; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* Field_1_17; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* Field_1_18; // 0x30
	::RPG::Client::MultiLightEffectMaterialBlock* Field_1_19; // 0x38
	::UnityEngine::Animator* Field_1_20; // 0x40
	::System::Int32 Field_1_21; // 0x48
	::System::Single Field_1_22; // 0x4C
	::System::Single Field_1_23; // 0x50
	::System::Single Field_1_24; // 0x54
	::System::Single Field_1_25; // 0x58
	::System::Int32 Field_1_26; // 0x5C
	::System::Single Field_1_27; // 0x60
	::System::Single Field_1_28; // 0x64
	::System::Boolean Field_1_29; // 0x68
	::System::Boolean Field_1_30; // 0x69
	::System::Single Field_1_31; // 0x6C
	::System::Single Field_1_32; // 0x70
	::System::Single Field_1_33; // 0x74
	::System::Int32 Field_1_34; // 0x78
	::System::Single Field_1_35; // 0x7C
	::UnityEngine::Color Field_1_36; // 0x80
	::System::Single Field_1_37; // 0x90
	::System::Int32 Field_1_38; // 0x94
	::System::Int32 Field_1_39; // 0x98
	::RPG::Client::Prop::RogueDLCCompass_RingPart Field_1_40; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823__CCTOR_OFFSET))();
	}

	::System::Void Method_1_20FFED4976A10875(::UnityEngine::Transform* a1, ::RPG::Client::Prop::RogueDLCCompass_RingPart a2, ::System::Collections::Generic::List_1<::System::Single>* a3, ::System::Collections::Generic::List_1<::System::Single>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::Prop::RogueDLCCompass_RingPart, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_20FFED4976A10875_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_4F8BD755AF34B283(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_4F8BD755AF34B283_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BF28FCDB3FDACE9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_6BF28FCDB3FDACE9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_41146E620D694011_OFFSET))(this);
	}

	::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44D9B1A97BC4F823_METHOD_1_861970C5F2C21AB2_OFFSET))(this);
	}
};
