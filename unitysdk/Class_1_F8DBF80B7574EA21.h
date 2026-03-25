#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_338;
class Class_0_16E4307DCC419505_375;
class Class_1_A2D8E5AB4B623162;
class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_F8DBF80B7574EA21_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10624B40)
#define CLASS_1_F8DBF80B7574EA21_GET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x10625820)
#define CLASS_1_F8DBF80B7574EA21_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0x10625790)
#define CLASS_1_F8DBF80B7574EA21_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x10625700)
#define CLASS_1_F8DBF80B7574EA21_METHOD_1_7593731364922C45_OFFSET UNITYSDK_OFFSET(0x10624ED0)
#define CLASS_1_F8DBF80B7574EA21_METHOD_1_7FFD92F85190AF63_OFFSET UNITYSDK_OFFSET(0x10624B90)
#define CLASS_1_F8DBF80B7574EA21_METHOD_1_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0x106252E0)
#define CLASS_1_F8DBF80B7574EA21_METHOD_1_A457368731BCD478_OFFSET UNITYSDK_OFFSET(0x106250E0)
#define CLASS_1_F8DBF80B7574EA21_SET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x10625830)
#define CLASS_1_F8DBF80B7574EA21__CTOR_OFFSET UNITYSDK_OFFSET(0x10624A60)

inline static constexpr unsigned int Class_1_F8DBF80B7574EA21_TypeDefinitionIndex = 49447;

class Class_1_F8DBF80B7574EA21 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	::Class_1_A2D8E5AB4B623162* Field_1_8; // 0x10
	::RPG::GameCore::TurnBasedGameMode* Field_1_7; // 0x18
	::System::Boolean Field_1_13; // 0x20
	::System::Single Field_1_10; // 0x24
	::RPG::GameCore::TurnState __StuckTurnState_k__BackingField; // 0x28
	::System::Single Field_1_12; // 0x2C
	::System::Int32 Field_1_9; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7FFD92F85190AF63(::Class_1_B5F93263C61C75CE* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B5F93263C61C75CE*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_METHOD_1_7FFD92F85190AF63_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A457368731BCD478()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_METHOD_1_A457368731BCD478_OFFSET))(this);
	}

	::System::Void Method_1_A2458167D7752575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_METHOD_1_A2458167D7752575_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7593731364922C45(::RPG::GameCore::TurnState a1, ::Class_0_16E4307DCC419505_338* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_METHOD_1_7593731364922C45_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TurnState get__StuckTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_GET__STUCKTURNSTATE_OFFSET))(this);
	}

	::System::Void set__StuckTurnState(::RPG::GameCore::TurnState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_F8DBF80B7574EA21_SET__STUCKTURNSTATE_OFFSET))(this, value);
	}
};
