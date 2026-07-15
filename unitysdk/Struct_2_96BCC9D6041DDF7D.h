#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace RPG::GameCore { class DiceCombatModifierConfig; }

inline static constexpr unsigned int Struct_2_96BCC9D6041DDF7D_TypeDefinitionIndex = 34884;

struct alignas(8) Struct_2_96BCC9D6041DDF7D
{
	::Class_4_38B51614211CBC7D* Field_2_0; // 0x10
	::Class_2_AEE59ED8DADEC1A1* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatModifierConfig* Field_2_2; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_2_3; // 0x28
	::System::UInt32 Field_2_4; // 0x30
	::System::Int32 Field_2_5; // 0x34
	::System::Int32 Field_2_6; // 0x38
};
