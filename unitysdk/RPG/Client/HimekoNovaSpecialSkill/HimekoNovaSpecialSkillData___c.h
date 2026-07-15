#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::HimekoNovaSpecialSkill { class HimekoNovaSpecialSkillData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1794F8B0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1794F8F0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__LOADALL_B__27_0_OFFSET UNITYSDK_OFFSET(0x1794F900)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillData___c_TypeDefinitionIndex = 75550;

	class HimekoNovaSpecialSkillData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData___c** StaticGet___9()
		{
			return (::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData___c**)Il2CppClass::FromTypeDefinitionIndex(HimekoNovaSpecialSkillData___c_TypeDefinitionIndex)->GetStaticField(0x31970);
		}
		static ::System::Comparison_1<::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(HimekoNovaSpecialSkillData___c_TypeDefinitionIndex)->GetStaticField(0x31978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadAll_b__27_0(::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData* a1, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA___C__LOADALL_B__27_0_OFFSET))(this, a1, a2);
		}
	};
}
