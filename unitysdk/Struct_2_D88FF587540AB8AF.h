#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC22F13312585645.h"
#include "unitysdk/System/ValueType.h"

class Class_1_413B2BDBE645DB66;
namespace MoleMole { class ConfigMaterialPropertyModifier; }

#define STRUCT_2_D88FF587540AB8AF_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x85B090)
#define STRUCT_2_D88FF587540AB8AF_METHOD_2_C4107A077F76D409_OFFSET UNITYSDK_OFFSET(0x16DFF0A0)

inline static constexpr unsigned int Struct_2_D88FF587540AB8AF_TypeDefinitionIndex = 79220;

struct alignas(8) Struct_2_D88FF587540AB8AF
{
	::Enum_3_CC22F13312585645 Field_2_1; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* Field_2_0; // 0x18
	::Class_1_413B2BDBE645DB66* Field_2_7; // 0x20
	::System::Single Field_2_6; // 0x28

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D88FF587540AB8AF_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}

	static ::System::Void Method_2_C4107A077F76D409(::Struct_2_D88FF587540AB8AF a1)
	{
		return ((::System::Void(*)(::Struct_2_D88FF587540AB8AF))((::PBYTE)hIl2Cpp + STRUCT_2_D88FF587540AB8AF_METHOD_2_C4107A077F76D409_OFFSET))(a1);
	}
};
