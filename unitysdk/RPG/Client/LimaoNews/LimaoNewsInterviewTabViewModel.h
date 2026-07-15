#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsInterviewDetailViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1A771E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0x1A771FB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x1A771FA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0x1A771F90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76E430)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A771FC0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewTabViewModel_TypeDefinitionIndex = 75525;

	class LimaoNewsInterviewTabViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel* _DetailViewModel; // 0x20
		::Sofa::Core::SimpleCommand* _OnBtnTabClick_k__BackingField; // 0x28
		::System::Int32 _TabIndex_k__BackingField; // 0x30
		::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::TextID a1, ::System::Int32 a2, ::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Int32, ::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_TitleTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_TITLETEXTID_OFFSET))(this);
		}

		::System::Int32 get_TabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_TABINDEX_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnTabClick()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
