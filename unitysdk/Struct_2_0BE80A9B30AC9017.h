#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D5C6B7155F87FB8F.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define STRUCT_2_0BE80A9B30AC9017__CCTOR_OFFSET UNITYSDK_OFFSET(0x15903DC0)
#define STRUCT_2_0BE80A9B30AC9017__CTOR_OFFSET UNITYSDK_OFFSET(0x82A250)

inline static constexpr unsigned int Struct_2_0BE80A9B30AC9017_TypeDefinitionIndex = 83720;

struct alignas(8) Struct_2_0BE80A9B30AC9017
{
	static ::System::String** StaticGet_Field_2_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0BE80A9B30AC9017_TypeDefinitionIndex)->GetStaticField(0x42010);
	}
	static ::System::UInt32* StaticGet_Field_2_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0BE80A9B30AC9017_TypeDefinitionIndex)->GetStaticField(0xF520);
	}
	::System::String* Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::UInt32 Field_2_0; // 0x1C
	::Enum_3_D5C6B7155F87FB8F Field_2_7; // 0x20
	::MoleMole::EntityHandle Field_2_6; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::Enum_3_D5C6B7155F87FB8F a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Enum_3_D5C6B7155F87FB8F, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_0BE80A9B30AC9017__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0BE80A9B30AC9017__CCTOR_OFFSET))();
	}
};
