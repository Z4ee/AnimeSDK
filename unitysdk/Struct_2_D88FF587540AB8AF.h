#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/System/ValueType.h"

class Class_1_9610394F487FC231;
namespace MoleMole { class ConfigMaterialPropertyModifier; }

#define STRUCT_2_D88FF587540AB8AF_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x762C20)
#define STRUCT_2_D88FF587540AB8AF_METHOD_2_C4107A077F76D409_OFFSET UNITYSDK_OFFSET(0x13196D80)

inline static constexpr unsigned int Struct_2_D88FF587540AB8AF_TypeDefinitionIndex = 68855;

struct alignas(8) Struct_2_D88FF587540AB8AF
{
	::Enum_3_CC22F13312585645 Field_2_0; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* Field_2_1; // 0x18
	::Class_1_9610394F487FC231* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28

	static ::System::Void Method_2_C4107A077F76D409(::Struct_2_D88FF587540AB8AF a1)
	{
		return ((::System::Void(*)(::Struct_2_D88FF587540AB8AF))((::PBYTE)hIl2Cpp + STRUCT_2_D88FF587540AB8AF_METHOD_2_C4107A077F76D409_OFFSET))(a1);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D88FF587540AB8AF_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}
};
