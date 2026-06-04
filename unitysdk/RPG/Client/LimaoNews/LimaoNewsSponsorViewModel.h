#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_9917656EF7E54194;
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_GET_ONBTNCONTACT_OFFSET UNITYSDK_OFFSET(0xBDAEF00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_GET_SHOWSPONSORS_OFFSET UNITYSDK_OFFSET(0xBDAEEE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_SET_ONBTNCONTACT_OFFSET UNITYSDK_OFFSET(0xBDAEF10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_SET_SHOWSPONSORS_OFFSET UNITYSDK_OFFSET(0xBDAEEF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBDAED70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBDAEF20)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorViewModel_TypeDefinitionIndex = 73888;

	class LimaoNewsSponsorViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_9917656EF7E54194* _SponsorService; // 0x20
		::Class_1_2FDE33CCAE591AA8* _OnBtnContact_k__BackingField; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>* _ShowSponsors_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>* get_ShowSponsors()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_GET_SHOWSPONSORS_OFFSET))(this);
		}

		::System::Void set_ShowSponsors(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_SET_SHOWSPONSORS_OFFSET))(this, a1);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnContact()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_GET_ONBTNCONTACT_OFFSET))(this);
		}

		::System::Void set_OnBtnContact(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_SET_ONBTNCONTACT_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
