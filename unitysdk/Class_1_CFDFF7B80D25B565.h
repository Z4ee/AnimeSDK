#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_11;
class Class_1_3C58D309C7A040F5_41;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }

#define CLASS_1_CFDFF7B80D25B565_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x114C93F0)
#define CLASS_1_CFDFF7B80D25B565_METHOD_1_75B976D2D93762A9_OFFSET UNITYSDK_OFFSET(0x114C9360)
#define CLASS_1_CFDFF7B80D25B565_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x114C93A0)
#define CLASS_1_CFDFF7B80D25B565_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x114C9400)
#define CLASS_1_CFDFF7B80D25B565__CTOR_OFFSET UNITYSDK_OFFSET(0x114C9160)

inline static constexpr unsigned int Class_1_CFDFF7B80D25B565_TypeDefinitionIndex = 61131;

class Class_1_CFDFF7B80D25B565 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_1B7044A592B17773_11*>* Field_1_1; // 0x10
	::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_3C58D309C7A040F5_41* a1, ::RPG::Client::TrainParty::TrainPartyPassengerManager* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_41*, ::RPG::Client::TrainParty::TrainPartyPassengerManager*))((::PBYTE)hIl2Cpp + CLASS_1_CFDFF7B80D25B565__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_1_1B7044A592B17773_11*>* Method_1_75B976D2D93762A9()
	{
		return ((::Il2CppArray<::Class_1_1B7044A592B17773_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFDFF7B80D25B565_METHOD_1_75B976D2D93762A9_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1B7044A592B17773_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B7044A592B17773_11*))((::PBYTE)hIl2Cpp + CLASS_1_CFDFF7B80D25B565_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
	{
		return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFDFF7B80D25B565_GET_PASSENGERDATA_OFFSET))(this);
	}

	::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + CLASS_1_CFDFF7B80D25B565_SET_PASSENGERDATA_OFFSET))(this, value);
	}
};
