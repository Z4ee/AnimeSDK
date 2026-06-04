#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicRhythmLevelResultType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmLevel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_CREATEFAKEDATA_OFFSET UNITYSDK_OFFSET(0xC227F60)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GETLEVEL_OFFSET UNITYSDK_OFFSET(0xC228070)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GETREWARDIDS_OFFSET UNITYSDK_OFFSET(0xC228110)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_COMBONUMS_OFFSET UNITYSDK_OFFSET(0xC228190)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xC2281A0)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_ISMAXDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC228200)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xC228170)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0xC228180)
#define RPG_CLIENT_MUSICRHYTHMLEVELRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC227E10)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevelResult_TypeDefinitionIndex = 57810;

	class MusicRhythmLevelResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicRhythmLevelResultType, ::System::UInt32>* _ComboNums; // 0x10
		::System::UInt32 _LevelID; // 0x18
		::System::UInt32 _StarNum; // 0x1C
		::System::UInt32 _PastStarNum; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::MusicRhythmLevelResult* CreateFakeData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::MusicRhythmLevelResult*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELRESULT_CREATEFAKEDATA_OFFSET))(a1, a2, a3);
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
