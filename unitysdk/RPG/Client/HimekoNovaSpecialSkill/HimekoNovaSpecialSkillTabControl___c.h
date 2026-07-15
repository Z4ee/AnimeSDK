#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179587C0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17958800)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillTabControl___c_TypeDefinitionIndex = 75558;

	class HimekoNovaSpecialSkillTabControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillTabControl___c** StaticGet___9()
		{
			return (::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillTabControl___c**)Il2CppClass::FromTypeDefinitionIndex(HimekoNovaSpecialSkillTabControl___c_TypeDefinitionIndex)->GetStaticField(0x31C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLTABCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
