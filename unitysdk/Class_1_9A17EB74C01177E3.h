#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_425;
class Class_1_A2D8E5AB4B623162;
class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_9A17EB74C01177E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1686A610)
#define CLASS_1_9A17EB74C01177E3_GET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1686B340)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0x1686B2B0)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x1686B220)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_7FFD92F85190AF63_OFFSET UNITYSDK_OFFSET(0x1686A660)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0x1686ADF0)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_A457368731BCD478_OFFSET UNITYSDK_OFFSET(0x1686ABD0)
#define CLASS_1_9A17EB74C01177E3_METHOD_1_F1BD9F1A7B8D093A_OFFSET UNITYSDK_OFFSET(0x1686A9B0)
#define CLASS_1_9A17EB74C01177E3_SET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1686B350)
#define CLASS_1_9A17EB74C01177E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1686A510)

inline static constexpr unsigned int Class_1_9A17EB74C01177E3_TypeDefinitionIndex = 58253;

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
	::System::Int32 Field_1_9; // 0x20
	::System::Single Field_1_10; // 0x24
	::System::Single Field_1_11; // 0x28
	::System::Boolean Field_1_12; // 0x2C
	::RPG::GameCore::TurnState __StuckTurnState_k__BackingField; // 0x30

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

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1BD9F1A7B8D093A(::RPG::GameCore::TurnState a1, ::Class_0_16E4307DCC419505_382* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9A17EB74C01177E3_METHOD_1_F1BD9F1A7B8D093A_OFFSET))(this, a1, a2);
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
