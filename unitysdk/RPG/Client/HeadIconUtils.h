#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeadIconDisplayData; }
namespace RPG::Client { class ItemData; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HEADICONUTILS_GETHEADICONDATALIST_OFFSET UNITYSDK_OFFSET(0xD3B10E0)
#define RPG_CLIENT_HEADICONUTILS_GETHEADICONDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xD3B1170)
#define RPG_CLIENT_HEADICONUTILS_GETSORTEDHEADICONDATALIST_OFFSET UNITYSDK_OFFSET(0xD3B1590)
#define RPG_CLIENT_HEADICONUTILS_GETSORTEDHEADICONDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xD3B1370)
#define RPG_CLIENT_HEADICONUTILS_ISHEADICONNEW_OFFSET UNITYSDK_OFFSET(0xD3B0FF0)
#define RPG_CLIENT_HEADICONUTILS_RECORDALLHEADICONSEEN_OFFSET UNITYSDK_OFFSET(0xD3B1A40)
#define RPG_CLIENT_HEADICONUTILS_RECORDHEADICONCLICK_OFFSET UNITYSDK_OFFSET(0xD3B18E0)
#define RPG_CLIENT_HEADICONUTILS_SORTHEADICONDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xD3B13D0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadIconUtils_TypeDefinitionIndex = 65714;

	class HeadIconUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetHeadIconDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_GETHEADICONDATALIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::HeadIconDisplayData*>* GetHeadIconDisplayDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeadIconDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_GETHEADICONDISPLAYDATALIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::HeadIconDisplayData*>* GetSortedHeadIconDisplayDataList(::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeadIconDisplayData*>*(*)(::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_GETSORTEDHEADICONDISPLAYDATALIST_OFFSET))(a1);
		}

		static ::System::Void SortHeadIconDisplayDataList(::System::Collections::Generic::List_1<::RPG::Client::HeadIconDisplayData*>* a1, ::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::HeadIconDisplayData*>*, ::System::Comparison_1<::RPG::Client::HeadIconDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_SORTHEADICONDISPLAYDATALIST_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetSortedHeadIconDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_GETSORTEDHEADICONDATALIST_OFFSET))();
		}

		static ::System::Boolean IsHeadIconNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_ISHEADICONNEW_OFFSET))(a1);
		}

		static ::System::Void RecordHeadIconClick(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_RECORDHEADICONCLICK_OFFSET))(a1);
		}

		static ::System::Void RecordAllHeadIconSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADICONUTILS_RECORDALLHEADICONSEEN_OFFSET))();
		}
	};
}
