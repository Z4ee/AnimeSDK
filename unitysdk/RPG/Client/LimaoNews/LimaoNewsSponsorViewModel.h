#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_9917656EF7E54194;
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorItemViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace Sofa::Core { class SimpleCommand; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_GET_ONBTNCONTACT_OFFSET UNITYSDK_OFFSET(0xD48F2A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_GET_SHOWSPONSORS_OFFSET UNITYSDK_OFFSET(0xD48F280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_SET_ONBTNCONTACT_OFFSET UNITYSDK_OFFSET(0xD48F2B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_SET_SHOWSPONSORS_OFFSET UNITYSDK_OFFSET(0xD48F290)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD48F140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD48F2C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSponsorViewModel_TypeDefinitionIndex = 79150;

	class LimaoNewsSponsorViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OnBtnContact_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>* _ShowSponsors_k__BackingField; // 0x28
		::Class_1_9917656EF7E54194* _SponsorService; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x38

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

		::Sofa::Core::SimpleCommand* get_OnBtnContact()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_GET_ONBTNCONTACT_OFFSET))(this);
		}

		::System::Void set_OnBtnContact(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL_SET_ONBTNCONTACT_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSPONSORVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
