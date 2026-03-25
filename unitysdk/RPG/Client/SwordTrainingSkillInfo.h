#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingSameRankSkill.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_55;
class Class_1_CA604A479B70DDEA;
namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class SwordTrainingSkillTypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLINFO_CREATESKILLTREESEQUENCE_OFFSET UNITYSDK_OFFSET(0xA51F040)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5148D0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_FETCHSAMERANKSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA51FEF0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETCOLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0xA5208F0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETLEARNEDSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA51C310)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA51D680)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLPROPERTYMODIFER_OFFSET UNITYSDK_OFFSET(0xA51EE70)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLTYPEDATA_OFFSET UNITYSDK_OFFSET(0xA51EAF0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_GETUNLOCKSKILLTYPEDATA_OFFSET UNITYSDK_OFFSET(0xA51EBD0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_HASSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xA51F7A0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA514B80)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISNEWSKILLMETCONDITION_OFFSET UNITYSDK_OFFSET(0xA51F8F0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISRANKHASSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xA51F5C0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_ISSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xA51F2D0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SETCOLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0xA51ED10)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCLEARNSKILL_OFFSET UNITYSDK_OFFSET(0xA51ED60)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCSKILLDATA_OFFSET UNITYSDK_OFFSET(0xA516E80)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA514B70)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xA51E070)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATAPRESKILL_OFFSET UNITYSDK_OFFSET(0xA51E400)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLTYPEDATALIST_OFFSET UNITYSDK_OFFSET(0xA51E210)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO__ONINITFINISH_OFFSET UNITYSDK_OFFSET(0xA51E3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillInfo_TypeDefinitionIndex = 50306;

	class SwordTrainingSkillInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>* SkillTypeDataList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _ConditionFinishSkillDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* SkillDataList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _PrevConditionMetSkillDataList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* _LearnedSkillDataList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>* _SameRankSkillList; // 0x38
		::System::UInt32 _CollectSkillID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_INIT_OFFSET))(this);
		}

		::System::Void _OnInitFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__ONINITFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingSkillData* GetSkillData(::System::UInt32 skillID)
		{
			return ((::RPG::Client::SwordTrainingSkillData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLDATA_OFFSET))(this, skillID);
		}

		::RPG::Client::SwordTrainingSkillTypeData* GetSkillTypeData(::System::UInt32 skillTypeID)
		{
			return ((::RPG::Client::SwordTrainingSkillTypeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLTYPEDATA_OFFSET))(this, skillTypeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>* GetUnlockSkillTypeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillTypeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETUNLOCKSKILLTYPEDATA_OFFSET))(this);
		}

		::System::Void SyncSkillData(::Class_1_99BD961747420BEB_55* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCSKILLDATA_OFFSET))(this, info);
		}

		::System::Void SyncLearnSkill(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SYNCLEARNSKILL_OFFSET))(this, skillID);
		}

		::Class_1_CA604A479B70DDEA* GetSkillPropertyModifer()
		{
			return ((::Class_1_CA604A479B70DDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETSKILLPROPERTYMODIFER_OFFSET))(this);
		}

		::System::Void CreateSkillTreeSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_CREATESKILLTREESEQUENCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>* GetLearnedSkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETLEARNEDSKILLLIST_OFFSET))(this);
		}

		::System::Boolean IsSkillCanLearn(::RPG::Client::SwordTrainingSkillData* skillData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISSKILLCANLEARN_OFFSET))(this, skillData);
		}

		::System::Boolean IsRankHasSkillCanLearn(::System::UInt32 rank)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISRANKHASSKILLCANLEARN_OFFSET))(this, rank);
		}

		::System::Boolean HasSkillCanLearn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_HASSKILLCANLEARN_OFFSET))(this);
		}

		::System::Boolean IsNewSkillMetCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_ISNEWSKILLMETCONDITION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>* FetchSameRankSkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSameRankSkill>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_FETCHSAMERANKSKILLLIST_OFFSET))(this);
		}

		::System::UInt32 GetCollectSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_GETCOLLECTSKILLID_OFFSET))(this);
		}

		::System::Void SetCollectSkillID(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO_SETCOLLECTSKILLID_OFFSET))(this, skillID);
		}

		::System::Void _InitSkillDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATALIST_OFFSET))(this);
		}

		::System::Void _InitSkillTypeDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLTYPEDATALIST_OFFSET))(this);
		}

		::System::Void _InitSkillDataPreSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO__INITSKILLDATAPRESKILL_OFFSET))(this);
		}
	};
}
