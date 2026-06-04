#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
class Class_0_16E4307DCC419505_401;
class Class_1_A2D8E5AB4B623162;
class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_9A17EB74C01177E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x135168A0)
#define CLASS_1_9A17EB74C01177E3_GET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x135175C0)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0x13517530)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x135174A0)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_7FFD92F85190AF63_OFFSET UNITYSDK_OFFSET(0x135168F0)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0x13517080)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_A457368731BCD478_OFFSET UNITYSDK_OFFSET(0x13516E60)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_F1BD9F1A7B8D093A_OFFSET UNITYSDK_OFFSET(0x13516C40)
#define CLASS_1_9A17EB74C01177E3_SET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x135175D0)
#define CLASS_1_9A17EB74C01177E3__CTOR_OFFSET UNITYSDK_OFFSET(0x135167A0)

inline static constexpr unsigned int Class_1_9A17EB74C01177E3_TypeDefinitionIndex = 57006;

class Class_1_9A17EB74C01177E3 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	::Class_1_A2D8E5AB4B623162* Field_1_7; // 0x10
	::RPG::GameCore::TurnBasedGameMode* Field_1_8; // 0x18
	::System::Single Field_1_9; // 0x20
	::System::Int32 Field_1_10; // 0x24
	::System::Single Field_1_11; // 0x28
	::RPG::GameCore::TurnState __StuckTurnState_k__BackingField; // 0x2C
	::System::Boolean Field_1_13; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7FFD92F85190AF63(::Class_1_B5F93263C61C75CE* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B5F93263C61C75CE*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_7FFD92F85190AF63_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A457368731BCD478()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_A457368731BCD478_OFFSET))(this);
	}

	::System::Void Method_1_A2458167D7752575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_A2458167D7752575_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1BD9F1A7B8D093A(::RPG::GameCore::TurnState a1, ::Class_0_16E4307DCC419505_358* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_F1BD9F1A7B8D093A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TurnState get__StuckTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_GET__STUCKTURNSTATE_OFFSET))(this);
	}

	::System::Void set__StuckTurnState(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_SET__STUCKTURNSTATE_OFFSET))(this, a1);
	}
};
