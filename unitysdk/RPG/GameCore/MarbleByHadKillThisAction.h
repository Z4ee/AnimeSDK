#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_METHOD_4_4B876782D9D38672_OFFSET UNITYSDK_OFFSET(0x1D80C560)
#define RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_METHOD_4_8676762E0A063269_OFFSET UNITYSDK_OFFSET(0x1D80C5C0)
#define RPG_GAMECORE_MARBLEBYHADKILLTHISACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80C5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByHadKillThisAction_TypeDefinitionIndex = 16897;

	class MarbleByHadKillThisAction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHADKILLTHISACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4B876782D9D38672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByHadKillThisAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByHadKillThisAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_METHOD_4_4B876782D9D38672_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8676762E0A063269(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByHadKillThisAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByHadKillThisAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYHADKILLTHISACTION_METHOD_4_8676762E0A063269_OFFSET))(a1, a2);
		}
	};
}
