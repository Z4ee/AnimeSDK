#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_2F1EC6332AD4ABC2_OFFSET UNITYSDK_OFFSET(0x187447A0)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_9FFD3F58B960B224_OFFSET UNITYSDK_OFFSET(0x18744870)
#define RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18744820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDamageSourceContainBehaviorFlag_TypeDefinitionIndex = 22282;

	class ByDamageSourceContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2F1EC6332AD4ABC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_2F1EC6332AD4ABC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FFD3F58B960B224(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDAMAGESOURCECONTAINBEHAVIORFLAG_METHOD_4_9FFD3F58B960B224_OFFSET))(a1, a2);
		}
	};
}
