#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_52D9612A5B56A95D_OFFSET UNITYSDK_OFFSET(0x196B2FA0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_606A11C807EBCF9F_OFFSET UNITYSDK_OFFSET(0x196B90A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x196B2F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_Heal_TypeDefinitionIndex = 15278;

	class DiceCombatTaskConfig_Heal : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_606A11C807EBCF9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_606A11C807EBCF9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52D9612A5B56A95D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_52D9612A5B56A95D_OFFSET))(a1, a2);
		}
	};
}
