#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::HimekoNovaSpecialSkill { class HimekoNovaSpecialSkillTabViewModel; }
namespace RPG::UINavigation { class UINavigationButton; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_GET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x19822FD0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x19822ED0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_SET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x19823010)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x19822F80)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19823A50)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x198231B0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19823080)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillTabControl_TypeDefinitionIndex = 79167;

	class HimekoNovaSpecialSkillTabControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnTab; // 0x38
		::RPG::Client::LocalizedText* _TxtTabName; // 0x40
		::RPG::Client::UIStateCtrl* _UiStateCtrl; // 0x48
		::RPG::UINavigation::UINavigationButton* _UiNaviBtn; // 0x50
		::System::Boolean _IsChecked; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillTabViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillTabViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_GET_ISCHECKED_OFFSET))(this);
		}

		::System::Void set_IsChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL_SET_ISCHECKED_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
