#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2BirdData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0x9B57CA0)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS_GETBIRDDATA_OFFSET UNITYSDK_OFFSET(0x9B58060)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS_GET_ALLBIRDDATAS_OFFSET UNITYSDK_OFFSET(0x9B57B00)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS_GET_ALLSHOWBIRDDATALIST_OFFSET UNITYSDK_OFFSET(0x9B57B70)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS_INIT_OFFSET UNITYSDK_OFFSET(0x9B57E10)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS_MARKALLBIRDSEEN_OFFSET UNITYSDK_OFFSET(0x9B58140)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x9B57D90)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS__INITALLBIRDDATAS_OFFSET UNITYSDK_OFFSET(0x9B57E60)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2BirdInfos_TypeDefinitionIndex = 53617;

	class MatchThreeV2BirdInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2BirdData*>* _AllBirdDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2BirdData*>* get_AllBirdDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2BirdData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS_GET_ALLBIRDDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2BirdData*>* get_AllShowBirdDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2BirdData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS_GET_ALLSHOWBIRDDATALIST_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2BirdInfos* Create()
		{
			return ((::RPG::Client::MatchThreeV2BirdInfos*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS_INIT_OFFSET))(this);
		}

		::System::Void _InitAllBirdDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS__INITALLBIRDDATAS_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2BirdData* GetBirdData(::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeV2BirdData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS_GETBIRDDATA_OFFSET))(this, birdID);
		}

		::System::Void MarkAllBirdSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS_MARKALLBIRDSEEN_OFFSET))(this);
		}
	};
}
