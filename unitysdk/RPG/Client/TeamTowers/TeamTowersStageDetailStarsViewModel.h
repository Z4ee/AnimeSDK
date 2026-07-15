#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersGameStageStarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL_GETSTARINFOLIST_OFFSET UNITYSDK_OFFSET(0x19471370)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL_GET_ACHIEVEDCOUNT_OFFSET UNITYSDK_OFFSET(0x194713B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1946AA00)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersStageDetailStarsViewModel_TypeDefinitionIndex = 75106;

	class TeamTowersStageDetailStarsViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*>* _StarInfoList; // 0x10

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*>* GetStarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL_GETSTARINFOLIST_OFFSET))(this);
		}

		::System::Int32 get_AchievedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDETAILSTARSVIEWMODEL_GET_ACHIEVEDCOUNT_OFFSET))(this);
		}
	};
}
