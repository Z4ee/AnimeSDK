#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_75;
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MatchThreeRoyalePlayerPvpCareer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA846DF0)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA848680)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_GETALLBIRD_OFFSET UNITYSDK_OFFSET(0xA848700)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_GETBIRD_OFFSET UNITYSDK_OFFSET(0xA840850)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_GET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0xA848330)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA8483D0)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_SET_PVPCAREER_OFFSET UNITYSDK_OFFSET(0xA848340)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_SYNCBIRDRECORD_OFFSET UNITYSDK_OFFSET(0xA848790)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA848350)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA__SETUPPLAYERBIRD_OFFSET UNITYSDK_OFFSET(0xA8484A0)
#define RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA__SETUPPVPCAREER_OFFSET UNITYSDK_OFFSET(0xA848420)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyalePlayerData_TypeDefinitionIndex = 60827;

	class MatchThreeRoyalePlayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeBirdData*>* _AllBird; // 0x10
		::RPG::Client::MatchThreeRoyalePlayerPvpCareer* _PvpCareer_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::MatchThreeRoyalePlayerPvpCareer* get_PvpCareer()
		{
			return ((::RPG::Client::MatchThreeRoyalePlayerPvpCareer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_GET_PVPCAREER_OFFSET))(this);
		}

		::System::Void set_PvpCareer(::RPG::Client::MatchThreeRoyalePlayerPvpCareer* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeRoyalePlayerPvpCareer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_SET_PVPCAREER_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeRoyalePlayerData* Create()
		{
			return ((::RPG::Client::MatchThreeRoyalePlayerData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void _SetupPvpCareer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA__SETUPPVPCAREER_OFFSET))(this);
		}

		::RPG::Client::MatchThreeBirdData* GetBird(::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeBirdData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_GETBIRD_OFFSET))(this, birdID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeBirdData*>* GetAllBird()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeBirdData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_GETALLBIRD_OFFSET))(this);
		}

		::System::Void SyncBirdRecord(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D1E0AD3915BCCF29_75*>* birdRecordInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D1E0AD3915BCCF29_75*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA_SYNCBIRDRECORD_OFFSET))(this, birdRecordInfos);
		}

		::System::Void _SetupPlayerBird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEPLAYERDATA__SETUPPLAYERBIRD_OFFSET))(this);
		}
	};
}
