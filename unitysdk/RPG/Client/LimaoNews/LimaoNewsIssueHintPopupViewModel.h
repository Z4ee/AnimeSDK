#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::LimaoNews { class LimaoNewsIssueData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ISSUEDATA_OFFSET UNITYSDK_OFFSET(0x1C53E560)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x1C53E500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1C53E520)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x1C53E540)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ISSUEDATA_OFFSET UNITYSDK_OFFSET(0x1C53E570)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x1C53E510)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x1C53E530)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x1C53E550)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53E370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C53E580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C53E5D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueHintPopupViewModel_TypeDefinitionIndex = 79130;

	class LimaoNewsIssueHintPopupViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWindowService* _WindowService; // 0x20
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsIssueData* _IssueData_k__BackingField; // 0x30
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x38
		::Sofa::Core::SimpleCommand* _OnBtnForm_k__BackingField; // 0x40
		::System::UInt32 _IssueID_k__BackingField; // 0x48

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsWindowService* a1, ::Class_1_5F4D64A4B97E38F9* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWindowService*, ::Class_1_5F4D64A4B97E38F9*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_IssueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ISSUEID_OFFSET))(this);
		}

		::System::Void set_IssueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ISSUEID_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnForm()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ONBTNFORM_OFFSET))(this);
		}

		::System::Void set_OnBtnForm(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ONBTNFORM_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueData* get_IssueData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_GET_ISSUEDATA_OFFSET))(this);
		}

		::System::Void set_IssueData(::RPG::Client::LimaoNews::LimaoNewsIssueData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL_SET_ISSUEDATA_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

		::System::Void __ctor_b__0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUEHINTPOPUPVIEWMODEL___CTOR_B__0_1_OFFSET))(this);
		}
	};
}
