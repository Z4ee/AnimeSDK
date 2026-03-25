#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_3E12E5DBE03D5186;
namespace RPG::Client::SwordTraining { class SwordTrainingGameRecordInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHACTIONHINTRECORDS_OFFSET UNITYSDK_OFFSET(0xA50F5A0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHACTIONRECORDS_OFFSET UNITYSDK_OFFSET(0xA50F510)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHOLDVALUERECORDS_OFFSET UNITYSDK_OFFSET(0xA50F630)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHRECORDBYTYPE_OFFSET UNITYSDK_OFFSET(0xA50F4B0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_GETRECORDINFOLIST_OFFSET UNITYSDK_OFFSET(0xA50F6C0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_GET_OFFSET UNITYSDK_OFFSET(0xA50F3A0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_HASRECORD_OFFSET UNITYSDK_OFFSET(0xA50F700)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_RELEASERECORD_OFFSET UNITYSDK_OFFSET(0xA50F760)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA50F460)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingRecordWrapper_TypeDefinitionIndex = 61603;

	class SwordTrainingRecordWrapper : public ::System::Object
	{
	public:
		::Class_1_3E12E5DBE03D5186* _Owner; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* _RecordInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* Get(::Class_1_3E12E5DBE03D5186* owner)
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRecordWrapper*(*)(::Class_1_3E12E5DBE03D5186*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_GET_OFFSET))(owner);
		}

		::System::Void FetchRecordByType(::RPG::Client::SwordTraining::SwordTrainingGameRecordType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHRECORDBYTYPE_OFFSET))(this, type);
		}

		::System::Void FetchActionRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHACTIONRECORDS_OFFSET))(this);
		}

		::System::Void FetchActionHintRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHACTIONHINTRECORDS_OFFSET))(this);
		}

		::System::Void FetchOldValueRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHOLDVALUERECORDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* GetRecordInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_GETRECORDINFOLIST_OFFSET))(this);
		}

		::System::Boolean HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_HASRECORD_OFFSET))(this);
		}

		::System::Void ReleaseRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_RELEASERECORD_OFFSET))(this);
		}
	};
}
