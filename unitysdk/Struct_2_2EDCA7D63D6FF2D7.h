#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_73;
class Class_4_2E0A1A668714B3CC;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_24F974931E9789BB_OFFSET UNITYSDK_OFFSET(0x39616C0)
#define STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_55B393D44D9358E3_OFFSET UNITYSDK_OFFSET(0x3961660)

inline static constexpr unsigned int Struct_2_2EDCA7D63D6FF2D7_TypeDefinitionIndex = 35587;

struct alignas(8) Struct_2_2EDCA7D63D6FF2D7
{
	::Class_4_2E0A1A668714B3CC* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x20
	::RPG::GameCore::BaseLittleGameAbilityEffectConfig* Field_2_4; // 0x28
	::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Field_2_5; // 0x30
	::Class_0_16E4307DCC419505_73* Field_2_6; // 0x38
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_2_7; // 0x40

	::System::UInt32 Method_2_55B393D44D9358E3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_55B393D44D9358E3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_24F974931E9789BB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2EDCA7D63D6FF2D7_METHOD_2_24F974931E9789BB_OFFSET))(this);
	}
};
