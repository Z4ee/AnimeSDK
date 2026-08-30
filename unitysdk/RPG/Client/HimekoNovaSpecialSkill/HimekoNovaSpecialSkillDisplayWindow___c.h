#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3D93F0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3D9430)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillDisplayWindow___c_TypeDefinitionIndex = 79167;

	class HimekoNovaSpecialSkillDisplayWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayWindow___c** StaticGet___9()
		{
			return (::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayWindow___c**)Il2CppClass::FromTypeDefinitionIndex(HimekoNovaSpecialSkillDisplayWindow___c_TypeDefinitionIndex)->GetStaticField(0x5B660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
