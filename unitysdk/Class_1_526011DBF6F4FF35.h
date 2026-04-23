#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2DiceExchangeEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class Action; }

#define CLASS_1_526011DBF6F4FF35_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9617760)
#define CLASS_1_526011DBF6F4FF35_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x9617750)
#define CLASS_1_526011DBF6F4FF35_GET_FROM_OFFSET UNITYSDK_OFFSET(0x9617770)
#define CLASS_1_526011DBF6F4FF35_GET_TO_OFFSET UNITYSDK_OFFSET(0x9617780)
#define CLASS_1_526011DBF6F4FF35_GET_UID_OFFSET UNITYSDK_OFFSET(0x9617790)
#define CLASS_1_526011DBF6F4FF35__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9617730)
#define CLASS_1_526011DBF6F4FF35__CTOR_OFFSET UNITYSDK_OFFSET(0x9617720)

inline static constexpr unsigned int Class_1_526011DBF6F4FF35_TypeDefinitionIndex = 69823;

class Class_1_526011DBF6F4FF35 : public ::System::Object
{
public:
	::Class_1_0E117AC86D8E5BCA* _From_k__BackingField; // 0x10
	::Class_1_0E117AC86D8E5BCA* _To_k__BackingField; // 0x18
	::System::Action* _Callback_k__BackingField; // 0x20
	::System::UInt32 _UID_k__BackingField; // 0x28
	::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType _EventType_k__BackingField; // 0x2C

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_526011DBF6F4FF35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType a1, ::Class_1_0E117AC86D8E5BCA* a2, ::Class_1_0E117AC86D8E5BCA* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType, ::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_526011DBF6F4FF35__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType get_EventType()
	{
		return ((::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526011DBF6F4FF35_GET_EVENTTYPE_OFFSET))(this);
	}

	::System::Action* get_Callback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526011DBF6F4FF35_GET_CALLBACK_OFFSET))(this);
	}

	::Class_1_0E117AC86D8E5BCA* get_From()
	{
		return ((::Class_1_0E117AC86D8E5BCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526011DBF6F4FF35_GET_FROM_OFFSET))(this);
	}

	::Class_1_0E117AC86D8E5BCA* get_To()
	{
		return ((::Class_1_0E117AC86D8E5BCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526011DBF6F4FF35_GET_TO_OFFSET))(this);
	}

	::System::UInt32 get_UID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_526011DBF6F4FF35_GET_UID_OFFSET))(this);
	}
};
