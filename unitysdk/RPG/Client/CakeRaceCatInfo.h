#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceCatDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACECATINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9231EB0)
#define RPG_CLIENT_CAKERACECATINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9232270)
#define RPG_CLIENT_CAKERACECATINFO_GETCATDATAITEM_OFFSET UNITYSDK_OFFSET(0x9232410)
#define RPG_CLIENT_CAKERACECATINFO_GETRANDOMCATDATAS_OFFSET UNITYSDK_OFFSET(0x92324F0)
#define RPG_CLIENT_CAKERACECATINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9232020)
#define RPG_CLIENT_CAKERACECATINFO_ISCATCONTESTANT_OFFSET UNITYSDK_OFFSET(0x9232310)
#define RPG_CLIENT_CAKERACECATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9231FA0)
#define RPG_CLIENT_CAKERACECATINFO__INITCATDATAITEMS_OFFSET UNITYSDK_OFFSET(0x9232070)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceCatInfo_TypeDefinitionIndex = 51129;

	class CakeRaceCatInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceCatDataItem*>* _CatDataItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceCatInfo* Create()
		{
			return ((::RPG::Client::CakeRaceCatInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean IsCatContestant(::System::UInt32 catConfigID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_ISCATCONTESTANT_OFFSET))(catConfigID);
		}

		::RPG::Client::CakeRaceCatDataItem* GetCatDataItem(::System::UInt32 catID)
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_GETCATDATAITEM_OFFSET))(this, catID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceCatDataItem*>* GetRandomCatDatas(::System::UInt32 count, ::System::Collections::Generic::List_1<::System::UInt32>* exclusiveCatIDList)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceCatDataItem*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_GETRANDOMCATDATAS_OFFSET))(this, count, exclusiveCatIDList);
		}

		::System::Void _InitCatDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO__INITCATDATAITEMS_OFFSET))(this);
		}
	};
}
