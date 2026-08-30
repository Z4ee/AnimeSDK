#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_ADDSKILLVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1B91C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_GET_SKILLS_OFFSET UNITYSDK_OFFSET(0xE1B92C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xE1B92A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0xE1B92B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE1B92D0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersPlayerSkillGroupViewModel_TypeDefinitionIndex = 78612;

	class TeamTowersPlayerSkillGroupViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* _Skills_k__BackingField; // 0x10
		::RPG::Client::TextID _TitleText_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void AddSkillViewModel(::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_ADDSKILLVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TitleText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_GET_TITLETEXT_OFFSET))(this);
		}

		::System::Void set_TitleText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_SET_TITLETEXT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>* get_Skills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSPLAYERSKILLGROUPVIEWMODEL_GET_SKILLS_OFFSET))(this);
		}
	};
}
