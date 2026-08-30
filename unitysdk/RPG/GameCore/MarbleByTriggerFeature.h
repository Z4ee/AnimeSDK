#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_5576D8B107C1464B_OFFSET UNITYSDK_OFFSET(0x1D4A6BA0)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_D1053C173B1BCC39_OFFSET UNITYSDK_OFFSET(0x1D4A6B40)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A6B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTriggerFeature_TypeDefinitionIndex = 16692;

	class MarbleByTriggerFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1053C173B1BCC39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTriggerFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTriggerFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_D1053C173B1BCC39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5576D8B107C1464B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTriggerFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTriggerFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_5576D8B107C1464B_OFFSET))(a1, a2);
		}
	};
}
