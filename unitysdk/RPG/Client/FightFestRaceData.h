#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_16.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestMainRace; }
namespace RPG::Client { class FightFestScoreRace; }
namespace RPG::Client { class FightFestStageInfoData; }
namespace RPG::GameCore { class FightFestChallengeRow; }
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace RPG::GameCore { class FightFestScoreRaceRow; }

#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0x96C1DC0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFDES_OFFSET UNITYSDK_OFFSET(0x96C1FE0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFNAME_OFFSET UNITYSDK_OFFSET(0x96C1ED0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x96B7FD0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_PREVIEWMONSTERLIST_OFFSET UNITYSDK_OFFSET(0x96C20F0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACEID_OFFSET UNITYSDK_OFFSET(0x96C1D80)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACETYPE_OFFSET UNITYSDK_OFFSET(0x96C1D20)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RECOMMENDNATURE_OFFSET UNITYSDK_OFFSET(0x96C21B0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0x96C1D40)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0x96C1D60)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_SPECIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0x96C2270)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_STAGEINFODATA_OFFSET UNITYSDK_OFFSET(0x96C1DA0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_GET_UIENTERBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0x96B7AA0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0x96B4040)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0x96C1CD0)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACEID_OFFSET UNITYSDK_OFFSET(0x96C1D90)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACETYPE_OFFSET UNITYSDK_OFFSET(0x96C1D30)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDMAINRACE_OFFSET UNITYSDK_OFFSET(0x96C1D50)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDSCORERACE_OFFSET UNITYSDK_OFFSET(0x96C1D70)
#define RPG_CLIENT_FIGHTFESTRACEDATA_SET_STAGEINFODATA_OFFSET UNITYSDK_OFFSET(0x96C1DB0)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x96C2380)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x96C1CA0)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x96B29A0)
#define RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x96B3FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestRaceData_TypeDefinitionIndex = 52096;

	class FightFestRaceData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__TEACH_RACE_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FightFestRaceData_TypeDefinitionIndex)->GetStaticField(0x2920);
		}
		::RPG::Client::FightFestStageInfoData* _StageInfoData_k__BackingField; // 0x10
		::RPG::Client::FightFestScoreRace* _RelatedScoreRace_k__BackingField; // 0x18
		::RPG::Client::FightFestMainRace* _RelatedMainRace_k__BackingField; // 0x20
		::System::UInt32 _RaceID_k__BackingField; // 0x28
		::Enum_3_4608E37A1B3D374A_16 _RaceType_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::GameCore::FightFestMainRaceRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestMainRaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_OFFSET))(this, row);
		}

		::System::Void _ctor_1(::RPG::GameCore::FightFestScoreRaceRow* row, ::System::UInt32 eventID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestScoreRaceRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_1_OFFSET))(this, row, eventID);
		}

		::System::Void _ctor_2(::RPG::GameCore::FightFestChallengeRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestChallengeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CTOR_2_OFFSET))(this, row);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA__CCTOR_OFFSET))();
		}

		::System::Void SetRelatedMainRace(::RPG::Client::FightFestMainRace* mainRace)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestMainRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDMAINRACE_OFFSET))(this, mainRace);
		}

		::System::Void SetRelatedScoreRace(::RPG::Client::FightFestScoreRace* scoreRace)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SETRELATEDSCORERACE_OFFSET))(this, scoreRace);
		}

		::Enum_3_4608E37A1B3D374A_16 get_RaceType()
		{
			return ((::Enum_3_4608E37A1B3D374A_16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACETYPE_OFFSET))(this);
		}

		::System::Void set_RaceType(::Enum_3_4608E37A1B3D374A_16 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_16))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACETYPE_OFFSET))(this, value);
		}

		::RPG::Client::FightFestMainRace* get_RelatedMainRace()
		{
			return ((::RPG::Client::FightFestMainRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDMAINRACE_OFFSET))(this);
		}

		::System::Void set_RelatedMainRace(::RPG::Client::FightFestMainRace* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestMainRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDMAINRACE_OFFSET))(this, value);
		}

		::RPG::Client::FightFestScoreRace* get_RelatedScoreRace()
		{
			return ((::RPG::Client::FightFestScoreRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RELATEDSCORERACE_OFFSET))(this);
		}

		::System::Void set_RelatedScoreRace(::RPG::Client::FightFestScoreRace* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RELATEDSCORERACE_OFFSET))(this, value);
		}

		::System::UInt32 get_RaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RACEID_OFFSET))(this);
		}

		::System::Void set_RaceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_RACEID_OFFSET))(this, value);
		}

		::RPG::Client::FightFestStageInfoData* get_StageInfoData()
		{
			return ((::RPG::Client::FightFestStageInfoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_STAGEINFODATA_OFFSET))(this);
		}

		::System::Void set_StageInfoData(::RPG::Client::FightFestStageInfoData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestStageInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_SET_STAGEINFODATA_OFFSET))(this, value);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_EVENTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_CHALLENGENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_ENVIRONMENTBUFFDES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PreviewMonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_PREVIEWMONSTERLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendNature()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_RECOMMENDNATURE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_SPECIALAVATARLIST_OFFSET))(this);
		}

		::System::UInt32 get_UIEnterBattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTRACEDATA_GET_UIENTERBATTLEAREAID_OFFSET))(this);
		}
	};
}
