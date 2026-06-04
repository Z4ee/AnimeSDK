#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameRecordType.h"
#include "unitysdk/System/Object.h"

class Class_1_4626569E10FA46C8;
namespace RPG::Client::SwordTraining { class SwordTrainingGameRecordInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHACTIONHINTRECORDS_OFFSET UNITYSDK_OFFSET(0xC999030)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHACTIONRECORDS_OFFSET UNITYSDK_OFFSET(0xC998FA0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHOLDVALUERECORDS_OFFSET UNITYSDK_OFFSET(0xC9990C0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHRECORDBYTYPE_OFFSET UNITYSDK_OFFSET(0xC998F40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_GETRECORDINFOLIST_OFFSET UNITYSDK_OFFSET(0xC999150)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_GET_OFFSET UNITYSDK_OFFSET(0xC998E30)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_HASRECORD_OFFSET UNITYSDK_OFFSET(0xC999190)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_RELEASERECORD_OFFSET UNITYSDK_OFFSET(0xC9991F0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xC998EF0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingRecordWrapper_TypeDefinitionIndex = 69927;

	class SwordTrainingRecordWrapper : public ::System::Object
	{
	public:
		::Class_1_4626569E10FA46C8* _Owner; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingGameRecordInfo*>* _RecordInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* Get(::Class_1_4626569E10FA46C8* a1)
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRecordWrapper*(*)(::Class_1_4626569E10FA46C8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_GET_OFFSET))(a1);
		}

		::System::Void FetchRecordByType(::RPG::Client::SwordTraining::SwordTrainingGameRecordType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameRecordType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRECORDWRAPPER_FETCHRECORDBYTYPE_OFFSET))(this, a1);
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
