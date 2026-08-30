#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3CFD80)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3CFDC0)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillAvatarControl___c_TypeDefinitionIndex = 79164;

	class HimekoNovaSpecialSkillAvatarControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillAvatarControl___c** StaticGet___9()
		{
			return (::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillAvatarControl___c**)Il2CppClass::FromTypeDefinitionIndex(HimekoNovaSpecialSkillAvatarControl___c_TypeDefinitionIndex)->GetStaticField(0x5B370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLAVATARCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
