#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::HimekoNovaSpecialSkill { class HimekoNovaSpecialSkillDisplayViewModel; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD3D1010)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD3D10C0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3D1400)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3D1180)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3D1110)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillDisplayIconControl_TypeDefinitionIndex = 79165;

	class HimekoNovaSpecialSkillDisplayIconControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _ImgSkillIcon; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYICONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
