#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6360A90B871D0DD8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9E0EA0)

inline static constexpr unsigned int Struct_2_6360A90B871D0DD8_TypeDefinitionIndex = 81045;

struct alignas(4) Struct_2_6360A90B871D0DD8
{
	static ::Struct_2_6360A90B871D0DD8* StaticGet_Field_2_7()
	{
		return (::Struct_2_6360A90B871D0DD8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6360A90B871D0DD8_TypeDefinitionIndex)->GetStaticField(0xDDA0);
	}
	::System::Boolean Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::MoleMole::HollowChessboard::HollowCell Field_2_0; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6360A90B871D0DD8__CCTOR_OFFSET))();
	}
};
