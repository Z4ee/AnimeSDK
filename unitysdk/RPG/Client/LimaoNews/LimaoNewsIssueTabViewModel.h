#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsIssueViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ISCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xD463160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ISCURTABSELECTED_OFFSET UNITYSDK_OFFSET(0xD45FA00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xD4632F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_TABTITLE_OFFSET UNITYSDK_OFFSET(0xD463070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_SET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xD463300)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD463240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xD4633C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueTabViewModel_TypeDefinitionIndex = 79142;

	class LimaoNewsIssueTabViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OnBtnTabClick_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* _IssueViewModel; // 0x28
		::System::Int32 _TabIndex; // 0x30

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnTabClick()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET))(this);
		}

		::System::Void set_OnBtnTabClick(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_SET_ONBTNTABCLICK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TabTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_TABTITLE_OFFSET))(this);
		}

		::System::Boolean get_IsCurTabSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ISCURTABSELECTED_OFFSET))(this);
		}

		::System::Boolean get_IsCanSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ISCANSUBMIT_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
