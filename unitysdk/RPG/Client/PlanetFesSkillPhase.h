#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillBuffDisplayData; }
namespace RPG::Client { class PlanetFesUnlockData; }
namespace RPG::GameCore { class PlanetFesSkillTreePhaseRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESSKILLPHASE_ADDUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x9FB9670)
#define RPG_CLIENT_PLANETFESSKILLPHASE_CREATE_OFFSET UNITYSDK_OFFSET(0x9FCA540)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETALLDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9FCA7F0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETFINISHPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FCA600)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETISFINISH_OFFSET UNITYSDK_OFFSET(0x9FBA090)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FC9290)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETLOCKREASON_OFFSET UNITYSDK_OFFSET(0x9FC9040)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCAA20)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_HASLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0x9FCABE0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_HASPASTPHASE_OFFSET UNITYSDK_OFFSET(0x9FCAAD0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9FCAAE0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FCAB60)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9FCAB00)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_SHOWNUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x9FCAC40)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_UNLOCKIDS_OFFSET UNITYSDK_OFFSET(0x9FB9420)
#define RPG_CLIENT_PLANETFESSKILLPHASE_HASSKILL_OFFSET UNITYSDK_OFFSET(0x9FBA2C0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_PASTPHASEHASSKILL_OFFSET UNITYSDK_OFFSET(0x9FCAA70)
#define RPG_CLIENT_PLANETFESSKILLPHASE_SETPASTPHASE_OFFSET UNITYSDK_OFFSET(0x9FCA5B0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_SET_ID_OFFSET UNITYSDK_OFFSET(0x9FCAAF0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_SET_SHOWNUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x9FCACF0)
#define RPG_CLIENT_PLANETFESSKILLPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCA5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkillPhase_TypeDefinitionIndex = 54231;

	class PlanetFesSkillPhase : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesSkillPhase* _PastPhase; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* _Skills; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesUnlockData*>* _UnlockDatas; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillBuffDisplayData*>* _DisplayDatas; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSkillPhase* Create(::System::UInt32 phaseID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* skills)
		{
			return ((::RPG::Client::PlanetFesSkillPhase*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_CREATE_OFFSET))(phaseID, skills);
		}

		::System::Void SetPastPhase(::RPG::Client::PlanetFesSkillPhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_SETPASTPHASE_OFFSET))(this, phase);
		}

		::System::Void AddUnlockData(::RPG::Client::PlanetFesUnlockData* unlockData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesUnlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_ADDUNLOCKDATA_OFFSET))(this, unlockData);
		}

		::RPG::Client::TextID GetLockReason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GETLOCKREASON_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GETISUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetIsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GETISFINISH_OFFSET))(this);
		}

		::System::UInt32 GetFinishProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GETFINISHPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillBuffDisplayData*>* GetAllDisplayData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillBuffDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GETALLDISPLAYDATA_OFFSET))(this);
		}

		::System::Int32 GetSkillCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GETSKILLCOUNT_OFFSET))(this);
		}

		::System::Boolean HasSkill(::System::UInt32 skillId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_HASSKILL_OFFSET))(this, skillId);
		}

		::System::Boolean PastPhaseHasSkill(::System::UInt32 skillId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_PASTPHASEHASSKILL_OFFSET))(this, skillId);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::PlanetFesSkillTreePhaseRow* get_Row()
		{
			return ((::RPG::GameCore::PlanetFesSkillTreePhaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_UNLOCKIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_HasPastPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_HASPASTPHASE_OFFSET))(this);
		}

		::System::Boolean get_HasLockCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_HASLOCKCONDITION_OFFSET))(this);
		}

		::System::Boolean get_ShownUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_SHOWNUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_ShownUnlockAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_SET_SHOWNUNLOCKANIM_OFFSET))(this, value);
		}
	};
}
