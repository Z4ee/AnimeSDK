#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HEADICONUTILS_GETHEADICONDATALIST_OFFSET UNITYSDK_OFFSET(0x9913000)
#define RPG_CLIENT_HEADICONUTILS_GETSORTEDHEADICONDATALIST_OFFSET UNITYSDK_OFFSET(0x9913090)
#define RPG_CLIENT_HEADICONUTILS_ISHEADICONNEW_OFFSET UNITYSDK_OFFSET(0x99133B0)
#define RPG_CLIENT_HEADICONUTILS_RECORDALLHEADICONSEEN_OFFSET UNITYSDK_OFFSET(0x9913610)
#define RPG_CLIENT_HEADICONUTILS_RECORDHEADICONCLICK_OFFSET UNITYSDK_OFFSET(0x99134B0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadIconUtils_TypeDefinitionIndex = 53317;

	class HeadIconUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetHeadIconDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_GETHEADICONDATALIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetSortedHeadIconDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_GETSORTEDHEADICONDATALIST_OFFSET))();
		}

		static ::System::Boolean IsHeadIconNew(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_ISHEADICONNEW_OFFSET))(id);
		}

		static ::System::Void RecordHeadIconClick(::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_RECORDHEADICONCLICK_OFFSET))(id);
		}

		static ::System::Void RecordAllHeadIconSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_RECORDALLHEADICONSEEN_OFFSET))();
		}
	};
}
