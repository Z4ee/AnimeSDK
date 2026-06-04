#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSkillBuffData; }
namespace RPG::GameCore { class PlanetFesSkillTreeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESSKILL_ADDPRECONDITIONSKILL_OFFSET UNITYSDK_OFFSET(0xC47D000)
#define RPG_CLIENT_PLANETFESSKILL_CANACTIVE_OFFSET UNITYSDK_OFFSET(0xC47D950)
#define RPG_CLIENT_PLANETFESSKILL_CANUPGRADE_OFFSET UNITYSDK_OFFSET(0xC47D6E0)
#define RPG_CLIENT_PLANETFESSKILL_CREATE_OFFSET UNITYSDK_OFFSET(0xC47CB30)
#define RPG_CLIENT_PLANETFESSKILL_GETFUNCSKILLPARAM_OFFSET UNITYSDK_OFFSET(0xC47DAC0)
#define RPG_CLIENT_PLANETFESSKILL_GETISACTIVE_OFFSET UNITYSDK_OFFSET(0xC47D690)
#define RPG_CLIENT_PLANETFESSKILL_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC47D460)
#define RPG_CLIENT_PLANETFESSKILL_GETLOCKREASON_OFFSET UNITYSDK_OFFSET(0xC47D100)
#define RPG_CLIENT_PLANETFESSKILL_GET_CURRENTBUFFDATA_OFFSET UNITYSDK_OFFSET(0xC47D850)
#define RPG_CLIENT_PLANETFESSKILL_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xC47DC90)
#define RPG_CLIENT_PLANETFESSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0xC47DC70)
#define RPG_CLIENT_PLANETFESSKILL_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC47D3A0)
#define RPG_CLIENT_PLANETFESSKILL_GET_LEVELSKILLS_OFFSET UNITYSDK_OFFSET(0xC47DE10)
#define RPG_CLIENT_PLANETFESSKILL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC47DBB0)
#define RPG_CLIENT_PLANETFESSKILL_GET_NEXTSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xC47DDA0)
#define RPG_CLIENT_PLANETFESSKILL_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC47DD40)
#define RPG_CLIENT_PLANETFESSKILL_ISPREPRECONDITIONSKILL_OFFSET UNITYSDK_OFFSET(0xC47D9B0)
#define RPG_CLIENT_PLANETFESSKILL_SET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xC47DCA0)
#define RPG_CLIENT_PLANETFESSKILL_SET_ID_OFFSET UNITYSDK_OFFSET(0xC47DC80)
#define RPG_CLIENT_PLANETFESSKILL_UPDATELEVEL_OFFSET UNITYSDK_OFFSET(0xC47D0B0)
#define RPG_CLIENT_PLANETFESSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xC47CBE0)
#define RPG_CLIENT_PLANETFESSKILL__INITSKILLBUFFDATA_OFFSET UNITYSDK_OFFSET(0xC47CC40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkill_TypeDefinitionIndex = 62311;

	class PlanetFesSkill : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* _PreConditionSkills; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillBuffData*>* _BuffDatas; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::UInt32 _CurrentLevel_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSkill* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesSkill*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_CREATE_OFFSET))(a1);
		}

		::System::Void AddPreConditionSkill(::RPG::Client::PlanetFesSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_ADDPRECONDITIONSKILL_OFFSET))(this, a1);
		}

		::System::Void UpdateLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_UPDATELEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetLockReason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GETLOCKREASON_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GETISUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetIsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GETISACTIVE_OFFSET))(this);
		}

		::System::Boolean CanUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_CANUPGRADE_OFFSET))(this);
		}

		::System::Boolean CanActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_CANACTIVE_OFFSET))(this);
		}

		::System::Boolean IsPrePreConditionSkill(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_ISPREPRECONDITIONSKILL_OFFSET))(this, a1);
		}

		::System::UInt32 GetFuncSkillParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GETFUNCSKILLPARAM_OFFSET))(this);
		}

		::System::Void _InitSkillBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL__INITSKILLBUFFDATA_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_CURRENTLEVEL_OFFSET))(this);
		}

		::System::Void set_CurrentLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_SET_CURRENTLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesSkillBuffData* get_CurrentBuffData()
		{
			return ((::RPG::Client::PlanetFesSkillBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_CURRENTBUFFDATA_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesSkillTreeRow* get_Row()
		{
			return ((::RPG::GameCore::PlanetFesSkillTreeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_NextSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_NEXTSKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LevelSkills()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_LEVELSKILLS_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILL_GET_MAXLEVEL_OFFSET))(this);
		}
	};
}
