#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_5661FB5E3DE51048.h"
#include "unitysdk/Struct_2_5C20D8CA4DCAF344.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class Class_0_16E4307DCC419505_464;
namespace MoleMole::Config { class HackChargeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DC42C676F790CC3B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x101B1C00)
#define CLASS_3_DC42C676F790CC3B_METHOD_3_4A1B6CE480092809_OFFSET UNITYSDK_OFFSET(0x101B1E00)
#define CLASS_3_DC42C676F790CC3B_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x101B21D0)
#define CLASS_3_DC42C676F790CC3B_METHOD_3_D1AE5A8C61C29DA2_OFFSET UNITYSDK_OFFSET(0x101B1F80)
#define CLASS_3_DC42C676F790CC3B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x101B1860)
#define CLASS_3_DC42C676F790CC3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x101B1C50)
#define CLASS_3_DC42C676F790CC3B__CTOR_OFFSET UNITYSDK_OFFSET(0x101B1CE0)

inline static constexpr unsigned int Class_3_DC42C676F790CC3B_TypeDefinitionIndex = 51177;

class Class_3_DC42C676F790CC3B : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_DC42C676F790CC3B_TypeDefinitionIndex)->GetStaticField(0xD610);
	}
	static ::System::Single* StaticGet_Field_3_25()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_DC42C676F790CC3B_TypeDefinitionIndex)->GetStaticField(0xD614);
	}
	// static const ::System::Int32 Field_3_30 = 0x8A; // 0x0
	::System::String* Field_3_17; // 0x48
	::System::String* Field_3_19; // 0x50
	::System::String* Field_3_8; // 0x58
	::System::String* Field_3_15; // 0x60
	::System::String* Field_3_14; // 0x68
	::System::String* Field_3_18; // 0x70
	::System::String* Field_3_13; // 0x78
	::System::Collections::Generic::List_1<::Struct_2_5C20D8CA4DCAF344>* Field_3_20; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Single, ::System::Boolean>>* Field_3_31; // 0x88
	::System::Collections::Generic::List_1<::System::String*>* Field_3_22; // 0x90
	::System::String* Field_3_12; // 0x98
	::Class_0_16E4307DCC419505_464* Field_3_27; // 0xA0
	::Struct_2_5C20D8CA4DCAF344 Field_3_21; // 0xA8
	::System::String* Field_3_16; // 0xC0
	::System::Single Field_3_6; // 0xC8
	::System::Single Field_3_7; // 0xCC
	::Enum_3_5661FB5E3DE51048 Field_3_2; // 0xD0
	::Enum_3_5661FB5E3DE51048 Field_3_1; // 0xD4
	::System::Single Field_3_4; // 0xD8
	::UnityEngine::LayerMask Field_3_23; // 0xDC
	::System::Single Field_3_10; // 0xE0
	::System::Boolean Field_3_26; // 0xE4
	::System::Boolean Field_3_3; // 0xE5
	::System::Single Field_3_11; // 0xE8
	::System::Single Field_3_5; // 0xEC
	::System::Single Field_3_0; // 0xF0
	::System::Single Field_3_9; // 0xF4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DC42C676F790CC3B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC42C676F790CC3B__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC42C676F790CC3B_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC42C676F790CC3B_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_DC42C676F790CC3B* Method_3_4A1B6CE480092809()
	{
		return ((::Class_3_DC42C676F790CC3B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DC42C676F790CC3B_METHOD_3_4A1B6CE480092809_OFFSET))();
	}

	::System::Void Method_3_D1AE5A8C61C29DA2(::MoleMole::Config::HackChargeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HackChargeConfig*))((::PBYTE)hIl2Cpp + CLASS_3_DC42C676F790CC3B_METHOD_3_D1AE5A8C61C29DA2_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC42C676F790CC3B_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
