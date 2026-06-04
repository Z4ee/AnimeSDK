#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_5576D8B107C1464B_OFFSET UNITYSDK_OFFSET(0x198CD6B0)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_BC90040FB31B422E_OFFSET UNITYSDK_OFFSET(0x198CD5D0)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x198CD660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTriggerFeature_TypeDefinitionIndex = 16024;

	class MarbleByTriggerFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC90040FB31B422E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTriggerFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTriggerFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_BC90040FB31B422E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5576D8B107C1464B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTriggerFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTriggerFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_5576D8B107C1464B_OFFSET))(a1, a2);
		}
	};
}
