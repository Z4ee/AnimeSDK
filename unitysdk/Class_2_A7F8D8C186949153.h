#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

class Class_1_68DDF0439D67F85F;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_A7F8D8C186949153_CLEAR_OFFSET UNITYSDK_OFFSET(0x18725040)
#define CLASS_2_A7F8D8C186949153_METHOD_2_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x18724ED0)
#define CLASS_2_A7F8D8C186949153_METHOD_2_997151CFD8577B59_OFFSET UNITYSDK_OFFSET(0x18724B70)
#define CLASS_2_A7F8D8C186949153__CTOR_OFFSET UNITYSDK_OFFSET(0x187250C0)

inline static constexpr unsigned int Class_2_A7F8D8C186949153_TypeDefinitionIndex = 76622;

class Class_2_A7F8D8C186949153 : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::GameCore::FiveDimEvilSmileState, ::Class_1_68DDF0439D67F85F*>
{
public:
	::Class_1_B4357A1C72BABC6B* BJPFDPILDDK; // 0x28
	::Class_3_1E4F9B0ED3BF21DE* FKGGBEAELPE; // 0x30
	::Class_2_B9E8C2EEAA5C96EC* GGKGFABFGFE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7F8D8C186949153__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_997151CFD8577B59(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::Class_1_B4357A1C72BABC6B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_2_A7F8D8C186949153_METHOD_2_997151CFD8577B59_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A7F8D8C186949153_METHOD_2_2898E3EC91BCF259_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7F8D8C186949153_CLEAR_OFFSET))(this);
	}
};
