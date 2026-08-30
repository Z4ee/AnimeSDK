#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceCatDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACECATINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C63A050)
#define RPG_CLIENT_CAKERACECATINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C63A450)
#define RPG_CLIENT_CAKERACECATINFO_GETCATDATAITEM_OFFSET UNITYSDK_OFFSET(0x1C626D30)
#define RPG_CLIENT_CAKERACECATINFO_GETRANDOMCATDATAS_OFFSET UNITYSDK_OFFSET(0x1C63A5F0)
#define RPG_CLIENT_CAKERACECATINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C63A1C0)
#define RPG_CLIENT_CAKERACECATINFO_ISCATCONTESTANT_OFFSET UNITYSDK_OFFSET(0x1C63A4E0)
#define RPG_CLIENT_CAKERACECATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63A140)
#define RPG_CLIENT_CAKERACECATINFO__INITCATDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1C63A210)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceCatInfo_TypeDefinitionIndex = 63084;

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

		static ::System::Boolean IsCatContestant(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_ISCATCONTESTANT_OFFSET))(a1);
		}

		::RPG::Client::CakeRaceCatDataItem* GetCatDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_GETCATDATAITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceCatDataItem*>* GetRandomCatDatas(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceCatDataItem*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO_GETRANDOMCATDATAS_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCatDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECATINFO__INITCATDATAITEMS_OFFSET))(this);
		}
	};
}
