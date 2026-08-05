#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"

namespace MoleMole { class MonoEffectPluginDither; }
namespace System { class String; }

#define CLASS_3_25C01EEFA5AE208E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x116C2060)
#define CLASS_3_25C01EEFA5AE208E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x116C2250)
#define CLASS_3_25C01EEFA5AE208E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x116C21C0)
#define CLASS_3_25C01EEFA5AE208E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x116C1F70)
#define CLASS_3_25C01EEFA5AE208E__CCTOR_OFFSET UNITYSDK_OFFSET(0x116C20B0)
#define CLASS_3_25C01EEFA5AE208E__CTOR_OFFSET UNITYSDK_OFFSET(0x116C21A0)

inline static constexpr unsigned int Class_3_25C01EEFA5AE208E_TypeDefinitionIndex = 53034;

class Class_3_25C01EEFA5AE208E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_25C01EEFA5AE208E_TypeDefinitionIndex)->GetStaticField(0x10AB0);
	}
	static ::System::Int32* StaticGet_Field_3_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_25C01EEFA5AE208E_TypeDefinitionIndex)->GetStaticField(0x10AB4);
	}
	static ::System::Int32* StaticGet_Field_3_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_25C01EEFA5AE208E_TypeDefinitionIndex)->GetStaticField(0x10AB8);
	}
	static ::System::Int32* StaticGet_Field_3_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_25C01EEFA5AE208E_TypeDefinitionIndex)->GetStaticField(0x10ABC);
	}
	static ::System::Int32* StaticGet_Field_3_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_25C01EEFA5AE208E_TypeDefinitionIndex)->GetStaticField(0x10AC0);
	}
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_11; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::String* Field_3_14; // 0x0
	// static const ::System::String* Field_3_12; // 0x0
	// static const ::System::String* Field_3_19; // 0x0
	// static const ::System::String* Field_3_18; // 0x0
	// static const ::System::Int32 Field_3_16 = 0x68; // 0x0
	::MoleMole::CharacterCameraDitheringData Field_3_7; // 0x48
	::MoleMole::MonoEffectPluginDither* Field_3_1; // 0x90
	::System::Single Field_3_0; // 0x98
	::System::Boolean Field_3_2; // 0x9C
	::System::Single Field_3_6; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_25C01EEFA5AE208E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25C01EEFA5AE208E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25C01EEFA5AE208E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25C01EEFA5AE208E_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_25C01EEFA5AE208E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_25C01EEFA5AE208E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_25C01EEFA5AE208E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25C01EEFA5AE208E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
