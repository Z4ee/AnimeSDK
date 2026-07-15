#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/RPG/GameCore/GuideType.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MultipleDropData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLEDROPUTILS_GETALLDATA_OFFSET UNITYSDK_OFFSET(0x19098290)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETBANNERTEXT_OFFSET UNITYSDK_OFFSET(0x19098780)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETGUIDETYPEBYMULTIPLEDROPTYPE_OFFSET UNITYSDK_OFFSET(0x19098A30)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTIMESDATA_OFFSET UNITYSDK_OFFSET(0x19097900)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYFARMTYPE_OFFSET UNITYSDK_OFFSET(0x19098B20)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYGUIDETYPE_OFFSET UNITYSDK_OFFSET(0x19098B70)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETSIGNICONPATH_OFFSET UNITYSDK_OFFSET(0x19098700)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETTOPDATA_OFFSET UNITYSDK_OFFSET(0x190960A0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_1_OFFSET UNITYSDK_OFFSET(0x19096FF0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_OFFSET UNITYSDK_OFFSET(0x19096050)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTISPECIFICMULTIPLEDROP_OFFSET UNITYSDK_OFFSET(0x19097C80)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINSPECIFICMULTIPLEDROP_OFFSET UNITYSDK_OFFSET(0x19097650)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIDROPTIMESREMAINING_OFFSET UNITYSDK_OFFSET(0x190978A0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIPLEDROPTYPEGUIDEOPENINHANDBOOK_OFFSET UNITYSDK_OFFSET(0x190988A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropUtils_TypeDefinitionIndex = 63376;

	class MultipleDropUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsInMultipleDrop(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_OFFSET))(a1);
		}

		static ::System::Boolean IsInMultipleDrop_1(::RPG::GameCore::MultipleDropTypeConfig a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMultiDropTimesRemaining(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIDROPTIMESREMAINING_OFFSET))(a1);
		}

		static ::System::Boolean IsInMultiSpecificMultipleDrop(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTISPECIFICMULTIPLEDROP_OFFSET))(a1);
		}

		static ::System::Boolean IsInSpecificMultipleDrop(::RPG::GameCore::MultipleDropTypeConfig a1, ::RPG::GameCore::ActivityFarmMultipleDropType a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig, ::RPG::GameCore::ActivityFarmMultipleDropType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINSPECIFICMULTIPLEDROP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MultipleDropTimesData GetMultipleDropTimesData(::RPG::GameCore::MultipleDropTypeConfig a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MultipleDropTimesData(*)(::RPG::GameCore::MultipleDropTypeConfig, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTIMESDATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MultipleDropData* GetTopData(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::RPG::Client::MultipleDropData*(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETTOPDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>* GetAllData(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETALLDATA_OFFSET))(a1);
		}

		static ::System::String* GetSignIconPath(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETSIGNICONPATH_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetBannerText(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETBANNERTEXT_OFFSET))(a1);
		}

		static ::System::Boolean IsMultipleDropTypeGuideOpenInHandbook(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIPLEDROPTYPEGUIDEOPENINHANDBOOK_OFFSET))(a1);
		}

		static ::RPG::GameCore::MultipleDropTypeConfig GetMultipleDropTypeByFarmType(::RPG::GameCore::FarmTypeConfig a1)
		{
			return ((::RPG::GameCore::MultipleDropTypeConfig(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYFARMTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::MultipleDropTypeConfig GetMultipleDropTypeByGuideType(::RPG::GameCore::GuideType a1)
		{
			return ((::RPG::GameCore::MultipleDropTypeConfig(*)(::RPG::GameCore::GuideType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYGUIDETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GuideType GetGuideTypeByMultipleDropType(::RPG::GameCore::MultipleDropTypeConfig a1)
		{
			return ((::RPG::GameCore::GuideType(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETGUIDETYPEBYMULTIPLEDROPTYPE_OFFSET))(a1);
		}
	};
}
