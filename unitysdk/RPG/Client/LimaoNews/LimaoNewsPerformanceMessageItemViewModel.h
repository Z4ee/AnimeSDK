#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsMessageItemViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL_GET_PERFORMANCETEXTLIST_OFFSET UNITYSDK_OFFSET(0xD478080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL_SET_PERFORMANCETEXTLIST_OFFSET UNITYSDK_OFFSET(0xD478090)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD478070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD478040)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPerformanceMessageItemViewModel_TypeDefinitionIndex = 79112;

	class LimaoNewsPerformanceMessageItemViewModel : public ::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _PerformanceTextList_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL__CTOR_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_PerformanceTextList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL_GET_PERFORMANCETEXTLIST_OFFSET))(this);
		}

		::System::Void set_PerformanceTextList(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPERFORMANCEMESSAGEITEMVIEWMODEL_SET_PERFORMANCETEXTLIST_OFFSET))(this, a1);
		}
	};
}
