#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_16;
class Class_1_FDFA365FE186E8F2_35;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }

#define CLASS_1_EF59CD31B46DB57C_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x17615820)
#define CLASS_1_EF59CD31B46DB57C_METHOD_1_9DD9D45193F07058_OFFSET UNITYSDK_OFFSET(0x17615790)
#define CLASS_1_EF59CD31B46DB57C_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x176157D0)
#define CLASS_1_EF59CD31B46DB57C_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x17615830)
#define CLASS_1_EF59CD31B46DB57C__CTOR_OFFSET UNITYSDK_OFFSET(0x176155B0)

inline static constexpr unsigned int Class_1_EF59CD31B46DB57C_TypeDefinitionIndex = 70951;

class Class_1_EF59CD31B46DB57C : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_97E659ED8D5D259C_16*>* Field_1_0; // 0x10
	::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_FDFA365FE186E8F2_35* a1, ::RPG::Client::TrainParty::TrainPartyPassengerManager* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_35*, ::RPG::Client::TrainParty::TrainPartyPassengerManager*))((::PBYTE)hIl2Cpp + CLASS_1_EF59CD31B46DB57C__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_1_97E659ED8D5D259C_16*>* Method_1_9DD9D45193F07058()
	{
		return ((::Il2CppArray<::Class_1_97E659ED8D5D259C_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF59CD31B46DB57C_METHOD_1_9DD9D45193F07058_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_97E659ED8D5D259C_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_16*))((::PBYTE)hIl2Cpp + CLASS_1_EF59CD31B46DB57C_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
	{
		return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF59CD31B46DB57C_GET_PASSENGERDATA_OFFSET))(this);
	}

	::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + CLASS_1_EF59CD31B46DB57C_SET_PASSENGERDATA_OFFSET))(this, a1);
	}
};
