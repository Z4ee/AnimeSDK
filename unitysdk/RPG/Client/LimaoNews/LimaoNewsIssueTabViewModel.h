#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_2FDE33CCAE591AA8;
namespace RPG::Client::LimaoNews { class LimaoNewsIssueViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ISCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xBD8DC10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ISCURTABSELECTED_OFFSET UNITYSDK_OFFSET(0xBD8A140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xBD8DE60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_TABTITLE_OFFSET UNITYSDK_OFFSET(0xBD8DB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_SET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0xBD8DE70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8DDB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBD8DF30)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueTabViewModel_TypeDefinitionIndex = 73880;

	class LimaoNewsIssueTabViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* _IssueViewModel; // 0x20
		::Class_1_2FDE33CCAE591AA8* _OnBtnTabClick_k__BackingField; // 0x28
		::System::Int32 _TabIndex; // 0x30

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::Class_1_2FDE33CCAE591AA8* get_OnBtnTabClick()
		{
			return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_GET_ONBTNTABCLICK_OFFSET))(this);
		}

		::System::Void set_OnBtnTabClick(::Class_1_2FDE33CCAE591AA8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABVIEWMODEL_SET_ONBTNTABCLICK_OFFSET))(this, a1);
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
