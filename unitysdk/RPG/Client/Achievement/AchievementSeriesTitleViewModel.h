#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AchievementSeriesRow; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x17475310)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x174753F0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_GET_VIEWINDEX_OFFSET UNITYSDK_OFFSET(0x174753B0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x17475400)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x174753A0)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementSeriesTitleViewModel_TypeDefinitionIndex = 76694;

	class AchievementSeriesTitleViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Title_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Achievement::AchievementSeriesTitleViewModel* Create(::RPG::GameCore::AchievementSeriesRow* a1)
		{
			return ((::RPG::Client::Achievement::AchievementSeriesTitleViewModel*(*)(::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Int32 get_ViewIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_GET_VIEWINDEX_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTSERIESTITLEVIEWMODEL_SET_TITLE_OFFSET))(this, a1);
		}
	};
}
