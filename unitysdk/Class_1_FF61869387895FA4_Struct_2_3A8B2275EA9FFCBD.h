#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_FF61869387895FA4_STRUCT_2_3A8B2275EA9FFCBD_METHOD_2_54F9AD8F8EFA3F6D_OFFSET UNITYSDK_OFFSET(0x86B0B0)
#define CLASS_1_FF61869387895FA4_STRUCT_2_3A8B2275EA9FFCBD_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x86B090)

inline static constexpr unsigned int Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD_TypeDefinitionIndex = 71203;

struct alignas(4) Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD
{
	::System::Boolean Field_2_0; // 0x10
	::System::Single Field_2_7; // 0x14
	::System::Single Field_2_6; // 0x18
	::System::UInt32 Field_2_5; // 0x1C

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_STRUCT_2_3A8B2275EA9FFCBD_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_54F9AD8F8EFA3F6D()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_STRUCT_2_3A8B2275EA9FFCBD_METHOD_2_54F9AD8F8EFA3F6D_OFFSET))(this);
	}
};
