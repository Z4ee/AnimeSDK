#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D02A7ACA469A7C7.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_3_EA02B975BED3466B_STRUCT_2_AB8E50E31B2513AE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x775B20)

inline static constexpr unsigned int Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE_TypeDefinitionIndex = 61831;

struct alignas(8) Class_3_EA02B975BED3466B_Struct_2_AB8E50E31B2513AE
{
	::System::UInt32 Field_2_1; // 0x10
	::System::UInt32 Field_2_0; // 0x14
	::MoleMole::Config::CharacterAliveState Field_2_7; // 0x18
	::System::String* Field_2_6; // 0x20
	::Enum_3_6D02A7ACA469A7C7 Field_2_5; // 0x28
	::MoleMole::Config::DamageElementType Field_2_4; // 0x2C
	::MoleMole::Config::BuffGroupName Field_2_11; // 0x30
	::System::Boolean Field_2_10; // 0x34

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_AB8E50E31B2513AE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
