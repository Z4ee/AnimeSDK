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

#define RPG_CLIENT_MULTIPLEDROPUTILS_GETALLDATA_OFFSET UNITYSDK_OFFSET(0xAAFA9D0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETBANNERTEXT_OFFSET UNITYSDK_OFFSET(0xAAFADB0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETGUIDETYPEBYMULTIPLEDROPTYPE_OFFSET UNITYSDK_OFFSET(0xAAFB010)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTIMESDATA_OFFSET UNITYSDK_OFFSET(0xAAFA210)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYFARMTYPE_OFFSET UNITYSDK_OFFSET(0xAAFB100)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYGUIDETYPE_OFFSET UNITYSDK_OFFSET(0xAAFB150)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETSIGNICONPATH_OFFSET UNITYSDK_OFFSET(0xAAFAD30)
#define RPG_CLIENT_MULTIPLEDROPUTILS_GETTOPDATA_OFFSET UNITYSDK_OFFSET(0xAAF92D0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_1_OFFSET UNITYSDK_OFFSET(0xAAF99F0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_OFFSET UNITYSDK_OFFSET(0xAAF9280)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTISPECIFICMULTIPLEDROP_OFFSET UNITYSDK_OFFSET(0xAAFA4C0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISINSPECIFICMULTIPLEDROP_OFFSET UNITYSDK_OFFSET(0xAAF9F60)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIDROPTIMESREMAINING_OFFSET UNITYSDK_OFFSET(0xAAFA1B0)
#define RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIPLEDROPTYPEGUIDEOPENINHANDBOOK_OFFSET UNITYSDK_OFFSET(0xAAFAE80)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropUtils_TypeDefinitionIndex = 61087;

	class MultipleDropUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsInMultipleDrop(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_OFFSET))(farmType);
		}

		static ::System::Boolean IsInMultipleDrop_1(::RPG::GameCore::MultipleDropTypeConfig farmType, ::System::UInt32 multiplier)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTIPLEDROP_1_OFFSET))(farmType, multiplier);
		}

		static ::System::Boolean IsMultiDropTimesRemaining(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIDROPTIMESREMAINING_OFFSET))(farmType);
		}

		static ::System::Boolean IsInMultiSpecificMultipleDrop(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINMULTISPECIFICMULTIPLEDROP_OFFSET))(farmType);
		}

		static ::System::Boolean IsInSpecificMultipleDrop(::RPG::GameCore::MultipleDropTypeConfig farmType, ::RPG::GameCore::ActivityFarmMultipleDropType dropType, ::System::UInt32 multiplier)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig, ::RPG::GameCore::ActivityFarmMultipleDropType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISINSPECIFICMULTIPLEDROP_OFFSET))(farmType, dropType, multiplier);
		}

		static ::RPG::Client::MultipleDropTimesData GetMultipleDropTimesData(::RPG::GameCore::MultipleDropTypeConfig multipleDropType, ::System::UInt32 multiplier)
		{
			return ((::RPG::Client::MultipleDropTimesData(*)(::RPG::GameCore::MultipleDropTypeConfig, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTIMESDATA_OFFSET))(multipleDropType, multiplier);
		}

		static ::RPG::Client::MultipleDropData* GetTopData(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::RPG::Client::MultipleDropData*(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETTOPDATA_OFFSET))(farmType);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>* GetAllData(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETALLDATA_OFFSET))(farmType);
		}

		static ::System::String* GetSignIconPath(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::System::String*(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETSIGNICONPATH_OFFSET))(farmType);
		}

		static ::RPG::Client::TextID GetBannerText(::RPG::GameCore::MultipleDropTypeConfig farmType)
		{
			return ((::RPG::Client::TextID(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETBANNERTEXT_OFFSET))(farmType);
		}

		static ::System::Boolean IsMultipleDropTypeGuideOpenInHandbook(::RPG::GameCore::MultipleDropTypeConfig multipleDropType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_ISMULTIPLEDROPTYPEGUIDEOPENINHANDBOOK_OFFSET))(multipleDropType);
		}

		static ::RPG::GameCore::MultipleDropTypeConfig GetMultipleDropTypeByFarmType(::RPG::GameCore::FarmTypeConfig farmType)
		{
			return ((::RPG::GameCore::MultipleDropTypeConfig(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYFARMTYPE_OFFSET))(farmType);
		}

		static ::RPG::GameCore::MultipleDropTypeConfig GetMultipleDropTypeByGuideType(::RPG::GameCore::GuideType guideType)
		{
			return ((::RPG::GameCore::MultipleDropTypeConfig(*)(::RPG::GameCore::GuideType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETMULTIPLEDROPTYPEBYGUIDETYPE_OFFSET))(guideType);
		}

		static ::RPG::GameCore::GuideType GetGuideTypeByMultipleDropType(::RPG::GameCore::MultipleDropTypeConfig multipleDropType)
		{
			return ((::RPG::GameCore::GuideType(*)(::RPG::GameCore::MultipleDropTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPUTILS_GETGUIDETYPEBYMULTIPLEDROPTYPE_OFFSET))(multipleDropType);
		}
	};
}
