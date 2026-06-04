#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

class Class_1_68DDF0439D67F85F;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_1CFC9E4D786ED583_CLEAR_OFFSET UNITYSDK_OFFSET(0x112A25E0)
#define CLASS_2_1CFC9E4D786ED583_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x112A2470)
#define CLASS_2_1CFC9E4D786ED583_METHOD_2_AC5B29196E5731F7_OFFSET UNITYSDK_OFFSET(0x112A2180)
#define CLASS_2_1CFC9E4D786ED583__CTOR_OFFSET UNITYSDK_OFFSET(0x112A2660)
#define CLASS_2_1CFC9E4D786ED583___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x112A2680)

inline static constexpr unsigned int Class_2_1CFC9E4D786ED583_TypeDefinitionIndex = 71620;

class Class_2_1CFC9E4D786ED583 : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::GameCore::FiveDimEvilSmileState, ::Class_1_68DDF0439D67F85F*>
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_2_0; // 0x28
	::Class_2_B9E8C2EEAA5C96EC* Field_2_1; // 0x30
	::Class_1_B4357A1C72BABC6B* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AC5B29196E5731F7(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::Class_1_B4357A1C72BABC6B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583_METHOD_2_AC5B29196E5731F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583_METHOD_2_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
