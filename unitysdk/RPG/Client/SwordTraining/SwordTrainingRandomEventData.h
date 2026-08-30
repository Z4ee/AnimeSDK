#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::SwordTraining { class SwordTrainingRandomEventOptionData; }
namespace RPG::GameCore { class SwordTrainingEventRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B47B6A0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B47BA10)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B47BD60)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B47BE40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT1_OFFSET UNITYSDK_OFFSET(0x1B47BEE0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT2_OFFSET UNITYSDK_OFFSET(0x1B47BFC0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT3_OFFSET UNITYSDK_OFFSET(0x1B47C0A0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_RANDOMEVENTID_OFFSET UNITYSDK_OFFSET(0x1B47BD40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1B47B8F0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_SET_RANDOMEVENTID_OFFSET UNITYSDK_OFFSET(0x1B47BD50)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B47B8A0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingRandomEventData_TypeDefinitionIndex = 74741;

	class SwordTrainingRandomEventData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventOptionData*>* OptionDataList; // 0x10
		::System::UInt32 _RandomEventID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTraining::SwordTrainingRandomEventData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRandomEventData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_RandomEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_RANDOMEVENTID_OFFSET))(this);
		}

		::System::Void set_RandomEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_SET_RANDOMEVENTID_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingEventRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_EventImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTIMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_EventText1()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT1_OFFSET))(this);
		}

		::RPG::Client::TextID get_EventText2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT2_OFFSET))(this);
		}

		::RPG::Client::TextID get_EventText3()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTDATA_GET_EVENTTEXT3_OFFSET))(this);
		}
	};
}
