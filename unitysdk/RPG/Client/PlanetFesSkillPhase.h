#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillBuffDisplayData; }
namespace RPG::Client { class PlanetFesUnlockData; }
namespace RPG::GameCore { class PlanetFesSkillTreePhaseRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESSKILLPHASE_ADDUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xDB72FC0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_CREATE_OFFSET UNITYSDK_OFFSET(0xDB85A00)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETALLDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xDB85C60)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETFINISHPROGRESS_OFFSET UNITYSDK_OFFSET(0xDB85AC0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETISFINISH_OFFSET UNITYSDK_OFFSET(0xDB73B10)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xDB84370)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETLOCKREASON_OFFSET UNITYSDK_OFFSET(0xDB84140)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GETSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0xDB85F20)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_HASLOCKCONDITION_OFFSET UNITYSDK_OFFSET(0xDB861A0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_HASPASTPHASE_OFFSET UNITYSDK_OFFSET(0xDB86010)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_ID_OFFSET UNITYSDK_OFFSET(0xDB86060)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDB860E0)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_ROW_OFFSET UNITYSDK_OFFSET(0xDB86080)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_SHOWNUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xDB86210)
#define RPG_CLIENT_PLANETFESSKILLPHASE_GET_UNLOCKIDS_OFFSET UNITYSDK_OFFSET(0xDB72D70)
#define RPG_CLIENT_PLANETFESSKILLPHASE_HASSKILL_OFFSET UNITYSDK_OFFSET(0xDB73D40)
#define RPG_CLIENT_PLANETFESSKILLPHASE_PASTPHASEHASSKILL_OFFSET UNITYSDK_OFFSET(0xDB85F70)
#define RPG_CLIENT_PLANETFESSKILLPHASE_SETPASTPHASE_OFFSET UNITYSDK_OFFSET(0xDB85A70)
#define RPG_CLIENT_PLANETFESSKILLPHASE_SET_ID_OFFSET UNITYSDK_OFFSET(0xDB86070)
#define RPG_CLIENT_PLANETFESSKILLPHASE_SET_SHOWNUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xDB862F0)
#define RPG_CLIENT_PLANETFESSKILLPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xDB85A60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkillPhase_TypeDefinitionIndex = 66669;

	class PlanetFesSkillPhase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesUnlockData*>* _UnlockDatas; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* _Skills; // 0x18
		::RPG::Client::PlanetFesSkillPhase* _PastPhase; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillBuffDisplayData*>* _DisplayDatas; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSkillPhase* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* a2)
		{
			return ((::RPG::Client::PlanetFesSkillPhase*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetPastPhase(::RPG::Client::PlanetFesSkillPhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_SETPASTPHASE_OFFSET))(this, a1);
		}

		::System::Void AddUnlockData(::RPG::Client::PlanetFesUnlockData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesUnlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_ADDUNLOCKDATA_OFFSET))(this, a1);
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

		::System::Boolean HasSkill(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_HASSKILL_OFFSET))(this, a1);
		}

		::System::Boolean PastPhaseHasSkill(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_PASTPHASEHASSKILL_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_SET_ID_OFFSET))(this, a1);
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

		::System::Void set_ShownUnlockAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLPHASE_SET_SHOWNUNLOCKANIM_OFFSET))(this, a1);
		}
	};
}
