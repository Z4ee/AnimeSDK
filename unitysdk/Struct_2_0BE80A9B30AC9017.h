#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_04C7107E01AF7B0E.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define STRUCT_2_0BE80A9B30AC9017__CCTOR_OFFSET UNITYSDK_OFFSET(0x151D1E90)
#define STRUCT_2_0BE80A9B30AC9017__CTOR_OFFSET UNITYSDK_OFFSET(0x7F5F90)

inline static constexpr unsigned int Struct_2_0BE80A9B30AC9017_TypeDefinitionIndex = 70023;

struct alignas(8) Struct_2_0BE80A9B30AC9017
{
	static ::System::String** StaticGet_Field_2_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0BE80A9B30AC9017_TypeDefinitionIndex)->GetStaticField(0x49210);
	}
	static ::System::UInt32* StaticGet_Field_2_6()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0BE80A9B30AC9017_TypeDefinitionIndex)->GetStaticField(0x116D0);
	}
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::Enum_3_04C7107E01AF7B0E Field_2_3; // 0x20
	::MoleMole::EntityHandle Field_2_4; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::Enum_3_04C7107E01AF7B0E a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Enum_3_04C7107E01AF7B0E, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_0BE80A9B30AC9017__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0BE80A9B30AC9017__CCTOR_OFFSET))();
	}
};
