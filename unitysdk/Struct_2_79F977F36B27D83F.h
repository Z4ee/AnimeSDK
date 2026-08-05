#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F76207C7421A525D.h"
#include "unitysdk/System/ValueType.h"

class Class_1_EA1FEF8121ADE963;
class Class_3_D902FC5F64432838;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define STRUCT_2_79F977F36B27D83F__CTOR_OFFSET UNITYSDK_OFFSET(0x7B3A50)

inline static constexpr unsigned int Struct_2_79F977F36B27D83F_TypeDefinitionIndex = 55838;

struct alignas(8) Struct_2_79F977F36B27D83F
{
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x14
	::System::Boolean Field_2_6; // 0x15
	::System::Boolean Field_2_5; // 0x16
	::System::Boolean Field_2_4; // 0x17
	::System::Boolean Field_2_11; // 0x18
	::Struct_2_F76207C7421A525D Field_2_10; // 0x1C
	::MoleMole::Battle::Entity* Field_2_9; // 0x30
	::Class_1_EA1FEF8121ADE963* Field_2_8; // 0x38
	::System::String* Field_2_15; // 0x40
	::Class_3_F33F9DC5F4112336* Field_2_14; // 0x48
	::Class_3_D902FC5F64432838* Field_2_13; // 0x50

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::Struct_2_F76207C7421A525D a7, ::MoleMole::Battle::Entity* a8, ::Class_1_EA1FEF8121ADE963* a9, ::System::String* a10, ::Class_3_F33F9DC5F4112336* a11, ::Class_3_D902FC5F64432838* a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Struct_2_F76207C7421A525D, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*, ::System::String*, ::Class_3_F33F9DC5F4112336*, ::Class_3_D902FC5F64432838*))((::PBYTE)hIl2Cpp + STRUCT_2_79F977F36B27D83F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}
};
