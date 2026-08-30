#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersStageData; }
namespace RPG::Client::TeamTowers { class TeamTowersStageDetailStarsViewModel; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_GET_NEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xE1C0F60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_GET_STAGEDATA_OFFSET UNITYSDK_OFFSET(0xE1C0F30)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_GET_STARSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1C0F40)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_MARKUNLOCKANIMASSEEN_OFFSET UNITYSDK_OFFSET(0xE1C1100)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_SET_STARSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE1C0F50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE1C0F20)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersStageDetailTabViewModel_TypeDefinitionIndex = 78606;

	class TeamTowersStageDetailTabViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TeamTowers::TeamTowersStageData* _StageData_k__BackingField; // 0x10
		::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel* _StarsViewModel_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::TeamTowers::TeamTowersStageData* a1, ::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersStageData*, ::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamTowers::TeamTowersStageData* get_StageData()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_GET_STAGEDATA_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel* get_StarsViewModel()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_GET_STARSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_StarsViewModel(::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersStageDetailStarsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_SET_STARSVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_GET_NEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void MarkUnlockAnimAsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILTABVIEWMODEL_MARKUNLOCKANIMASSEEN_OFFSET))(this);
		}
	};
}
