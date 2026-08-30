#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_52D9612A5B56A95D_OFFSET UNITYSDK_OFFSET(0x1D035890)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_BB1E4A3EA7CB8BFE_OFFSET UNITYSDK_OFFSET(0x1D035830)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D035880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_Heal_TypeDefinitionIndex = 15879;

	class DiceCombatTaskConfig_Heal : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB1E4A3EA7CB8BFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_BB1E4A3EA7CB8BFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52D9612A5B56A95D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_52D9612A5B56A95D_OFFSET))(a1, a2);
		}
	};
}
