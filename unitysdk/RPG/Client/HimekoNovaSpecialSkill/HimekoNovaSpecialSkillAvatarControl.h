#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::Client::HimekoNovaSpecialSkill { class HimekoNovaSpecialSkillAvatarViewModel; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_GET_ISSHOWHINT_OFFSET UNITYSDK_OFFSET(0x19818C20)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x19818B20)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_SET_ISSHOWHINT_OFFSET UNITYSDK_OFFSET(0x19818C60)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x19818BD0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x198197E0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19818CC0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL__ONCLICKOUTSIDE_OFFSET UNITYSDK_OFFSET(0x19819650)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillAvatarControl_TypeDefinitionIndex = 79162;

	class HimekoNovaSpecialSkillAvatarControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Boolean _IsShowHint; // 0x38
		::UnityEngine::UI::Image* _ImgAvatar; // 0x40
		::RPG::Client::AnimatorButton* _BtnHint; // 0x48
		::UnityEngine::RectTransform* _NodeHint; // 0x50
		::RPG::Client::LocalizedText* _TextAvatarName; // 0x58
		::RPG::Client::MonoClickOutsideDetect* _MonoClickOutsideDetect; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillAvatarViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_GET_ISSHOWHINT_OFFSET))(this);
		}

		::System::Void set_IsShowHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL_SET_ISSHOWHINT_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnClickOutSide(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL__ONCLICKOUTSIDE_OFFSET))(this, a1);
		}
	};
}
