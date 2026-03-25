#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6302EB46F2784E76_OFFSET UNITYSDK_OFFSET(0x16FFCDB0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_E4BE073F0CDE4148_OFFSET UNITYSDK_OFFSET(0x16FFCCE0)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFCD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdvModifierCallBackBehaviorFlag_TypeDefinitionIndex = 19984;

	class ByCheckAdvModifierCallBackBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag Flag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E4BE073F0CDE4148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_E4BE073F0CDE4148_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6302EB46F2784E76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKBEHAVIORFLAG_METHOD_4_6302EB46F2784E76_OFFSET))(a1, a2);
		}
	};
}
