#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_11;
class Class_1_7FF19F6206AF6DD7_47;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }

#define CLASS_1_2A1DAFF91CF8C4AB_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x124FE920)
#define CLASS_1_2A1DAFF91CF8C4AB_METHOD_1_C07AC00F35F12FFB_OFFSET UNITYSDK_OFFSET(0x124FE890)
#define CLASS_1_2A1DAFF91CF8C4AB_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x124FE8D0)
#define CLASS_1_2A1DAFF91CF8C4AB_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x124FE930)
#define CLASS_1_2A1DAFF91CF8C4AB__CTOR_OFFSET UNITYSDK_OFFSET(0x124FE690)

inline static constexpr unsigned int Class_1_2A1DAFF91CF8C4AB_TypeDefinitionIndex = 68618;

class Class_1_2A1DAFF91CF8C4AB : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_1B7044A592B17773_11*>* Field_1_1; // 0x10
	::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_7FF19F6206AF6DD7_47* a1, ::RPG::Client::TrainParty::TrainPartyPassengerManager* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_47*, ::RPG::Client::TrainParty::TrainPartyPassengerManager*))((::PBYTE)hIl2Cpp + CLASS_1_2A1DAFF91CF8C4AB__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_1_1B7044A592B17773_11*>* Method_1_C07AC00F35F12FFB()
	{
		return ((::Il2CppArray<::Class_1_1B7044A592B17773_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A1DAFF91CF8C4AB_METHOD_1_C07AC00F35F12FFB_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1B7044A592B17773_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B7044A592B17773_11*))((::PBYTE)hIl2Cpp + CLASS_1_2A1DAFF91CF8C4AB_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
	{
		return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A1DAFF91CF8C4AB_GET_PASSENGERDATA_OFFSET))(this);
	}

	::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + CLASS_1_2A1DAFF91CF8C4AB_SET_PASSENGERDATA_OFFSET))(this, value);
	}
};
