#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillViewModel; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_GET_NEWSKILLS_OFFSET UNITYSDK_OFFSET(0x1AC994E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_GET_SELECTEDSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1AC99520)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_GET_SELECTEDSKILL_OFFSET UNITYSDK_OFFSET(0x1AC994A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_REGISTERREFRESHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AC993C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC99170)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL__INITNEWSKILLS_OFFSET UNITYSDK_OFFSET(0x1AC99180)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL__ONSELECTEDSKILLCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC99410)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersSkillUnlockedViewModel_TypeDefinitionIndex = 78609;

	class TeamTowersSkillUnlockedViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* _SelectedSkill; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* _NewSkills; // 0x18
		::System::Action* _RefreshCallBack; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void RegisterRefreshCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_REGISTERREFRESHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _OnSelectedSkillChanged(::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL__ONSELECTEDSKILLCHANGED_OFFSET))(this, a1);
		}

		::System::Void _InitNewSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL__INITNEWSKILLS_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* get_SelectedSkill()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_GET_SELECTEDSKILL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* get_NewSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_GET_NEWSKILLS_OFFSET))(this);
		}

		::System::UInt32 get_SelectedSkillIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSKILLUNLOCKEDVIEWMODEL_GET_SELECTEDSKILLINDEX_OFFSET))(this);
		}
	};
}
