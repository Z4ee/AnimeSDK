#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattlePhaseNew; }

#define CLASS_1_991A5E362496272C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA69E7F0)
#define CLASS_1_991A5E362496272C_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xA69E750)
#define CLASS_1_991A5E362496272C_METHOD_1_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0xA69E200)
#define CLASS_1_991A5E362496272C_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA69E460)
#define CLASS_1_991A5E362496272C_TICK_OFFSET UNITYSDK_OFFSET(0xA69E0F0)
#define CLASS_1_991A5E362496272C__CTOR_OFFSET UNITYSDK_OFFSET(0xA69E0E0)

inline static constexpr unsigned int Class_1_991A5E362496272C_TypeDefinitionIndex = 57315;

class Class_1_991A5E362496272C : public ::System::Object
{
public:
	::RPG::Client::BattlePhaseNew* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::BattlePhaseNew* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePhaseNew*))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3E23A2EE3F65066B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_METHOD_1_3E23A2EE3F65066B_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991A5E362496272C_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}
};
