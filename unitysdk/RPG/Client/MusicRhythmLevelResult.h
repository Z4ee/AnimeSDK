#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicRhythmLevelResultType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmLevel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_CREATEFAKEDATA_OFFSET UNITYSDK_OFFSET(0xAB1B190)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GETLEVEL_OFFSET UNITYSDK_OFFSET(0xAB1B2A0)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GETREWARDIDS_OFFSET UNITYSDK_OFFSET(0xAB1B340)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_COMBONUMS_OFFSET UNITYSDK_OFFSET(0xAB1B3C0)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xAB1B3D0)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_ISMAXDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xAB1B430)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xAB1B3A0)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0xAB1B3B0)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1B030)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevelResult_TypeDefinitionIndex = 57023;

	class MusicRhythmLevelResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicRhythmLevelResultType, ::System::UInt32>* _ComboNums; // 0x10
		::System::UInt32 _LevelID; // 0x18
		::System::UInt32 _PastStarNum; // 0x1C
		::System::UInt32 _StarNum; // 0x20

		::System::Void _ctor(::System::UInt32 levelID, ::System::UInt32 starNum, ::Il2CppArray<::System::UInt32>* nums, ::System::UInt32 pastStarNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT__CTOR_OFFSET))(this, levelID, starNum, nums, pastStarNum);
		}

		static ::RPG::Client::MusicRhythmLevelResult* CreateFakeData(::System::UInt32 starNum, ::System::UInt32 pastStarNum, ::System::UInt32 levelID)
		{
			return ((::RPG::Client::MusicRhythmLevelResult*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_CREATEFAKEDATA_OFFSET))(starNum, pastStarNum, levelID);
		}

		::RPG::Client::MusicRhythmLevel* GetLevel()
		{
			return ((::RPG::Client::MusicRhythmLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GETLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GETREWARDIDS_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_LEVELID_OFFSET))(this);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_STARNUM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicRhythmLevelResultType, ::System::UInt32>* get_ComboNums()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicRhythmLevelResultType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_COMBONUMS_OFFSET))(this);
		}

		::System::Boolean get_IsFirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_ISFIRSTPASS_OFFSET))(this);
		}

		::System::Boolean get_IsMaxDifficulty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_ISMAXDIFFICULTY_OFFSET))(this);
		}
	};
}
