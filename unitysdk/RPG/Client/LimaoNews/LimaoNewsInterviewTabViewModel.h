#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewDetailViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xBD83C70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xBD83ED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_TABINDEX_OFFSET UNITYSDK_OFFSET(0xBD83EC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0xBD83EB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD83DE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBD83EE0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewTabViewModel_TypeDefinitionIndex = 73874;

	class LimaoNewsInterviewTabViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsInterviewDetailViewModel* _DetailViewModel; // 0x20
		::Class_1_2FDE33CCAE591AA8* _OnBtnTabClick_k__BackingField; // 0x28
		::RPG::Client::TextID _TitleTextID_k__BackingField; // 0x30
		::System::Int32 _TabIndex_k__BackingField; // 0x40

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

		::Class_1_2FDE33CCAE591AA8* get_OnBtnTabClick()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET))(this);
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
