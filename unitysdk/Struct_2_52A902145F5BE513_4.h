#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_945ACFB1FEBC7A2C_20;
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_52A902145F5BE513_4_TypeDefinitionIndex = 53026;

struct alignas(8) Struct_2_52A902145F5BE513_4
{
	::System::Nullable_1<::System::Boolean> Field_2_0; // 0x10
	::System::Nullable_1<::System::Boolean> Field_2_1; // 0x12
	::RPG::GameCore::EnergyBarState Field_2_2; // 0x14
	::System::Nullable_1<::System::Int32> Field_2_3; // 0x18
	::System::Nullable_1<::System::Int32> Field_2_4; // 0x20
	::System::Nullable_1<::System::Int32> Field_2_5; // 0x28
	::System::String* Field_2_6; // 0x30
	::System::String* Field_2_7; // 0x38
	::System::String* Field_2_8; // 0x40
	::System::String* Field_2_9; // 0x48
	::System::String* Field_2_10; // 0x50
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_11; // 0x58
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_12; // 0x68
	::System::Nullable_1<::RPG::GameCore::FixPoint> Field_2_13; // 0x78
	::RPG::GameCore::MonsterEnergyBarType Field_2_14; // 0x88
	::Il2CppArray<::System::String*>* Field_2_15; // 0x90
	::RPG::GameCore::MonsterEnergyBarNumColor Field_2_16; // 0x98
	::RPG::GameCore::MonsterEnergyBarCustomColor* Field_2_17; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>* Field_2_18; // 0xA8
};
