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

#define CLASS_1_44D9B1A97BC4F823_METHOD_1_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0xAEEB8B0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xAEEBE40)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_20FFED4976A10875_OFFSET UNITYSDK_OFFSET(0xAEEB1B0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0xAEECDD0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_41146E620D694011_OFFSET UNITYSDK_OFFSET(0xAEEBCA0)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_4F8BD755AF34B283_OFFSET UNITYSDK_OFFSET(0xAEEC640)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_6BF28FCDB3FDACE9_OFFSET UNITYSDK_OFFSET(0xAEECA40)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xAEED120)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xAEEB810)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xAEECD90)
#define CLASS_1_44D9B1A97BC4F823_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xAEEC510)
#define CLASS_1_44D9B1A97BC4F823__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEED1C0)
#define CLASS_1_44D9B1A97BC4F823__CTOR_OFFSET UNITYSDK_OFFSET(0xAEED1A0)

inline static constexpr unsigned int Class_1_44D9B1A97BC4F823_TypeDefinitionIndex = 73471;

class Class_1_44D9B1A97BC4F823 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x89E0);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x89E4);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x89F4);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x89F8);
	}
	static ::System::Single* StaticGet_Field_1_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x89FC);
	}
	static ::System::Single* StaticGet_Field_1_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A00);
	}
	static ::System::Single* StaticGet_Field_1_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A04);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A08);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A0C);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_9()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A10);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_10()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A20);
	}
	static ::System::Single* StaticGet_Field_1_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A30);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_12()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A34);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_13()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44D9B1A97BC4F823_TypeDefinitionIndex)->GetStaticField(0x8A44);
	}
	::System::Collections::Generic::List_1<::System::Single>* Field_1_14; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_15; // 0x18
	::RPG::Client::MultiLightEffectMaterialBlock* Field_1_16; // 0x20
	::UnityEngine::Transform* Field_1_17; // 0x28
	::System::Action* Field_1_18; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_19; // 0x38
	::UnityEngine::Animator* Field_1_20; // 0x40
	::System::Single Field_1_21; // 0x48
	::System::Single Field_1_22; // 0x4C
	::System::Single Field_1_23; // 0x50
	::UnityEngine::Color Field_1_24; // 0x54
	::System::Int32 Field_1_25; // 0x64
	::System::Single Field_1_26; // 0x68
	::System::Single Field_1_27; // 0x6C
	::System::Int32 Field_1_28; // 0x70
	::System::Int32 Field_1_29; // 0x74
	::System::Int32 Field_1_30; // 0x78
	::System::Int32 Field_1_31; // 0x7C
	::System::Boolean Field_1_32; // 0x80
	::System::Boolean Field_1_33; // 0x81
	::System::Single Field_1_34; // 0x84
	::System::Single Field_1_35; // 0x88
	::RPG::Client::Prop::RogueDLCCompass_RingPart Field_1_36; // 0x8C
	::System::Single Field_1_37; // 0x90
	::System::Single Field_1_38; // 0x94
	::System::Single Field_1_39; // 0x98
	::System::Single Field_1_40; // 0x9C

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
