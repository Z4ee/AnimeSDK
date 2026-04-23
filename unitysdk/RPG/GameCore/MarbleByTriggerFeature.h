#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_1D3B534BF39584C8_OFFSET UNITYSDK_OFFSET(0x18A9A4A0)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_4012E7618A15738D_OFFSET UNITYSDK_OFFSET(0x18A9A580)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9A530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTriggerFeature_TypeDefinitionIndex = 15974;

	class MarbleByTriggerFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D3B534BF39584C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTriggerFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTriggerFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_1D3B534BF39584C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4012E7618A15738D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTriggerFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTriggerFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_METHOD_4_4012E7618A15738D_OFFSET))(a1, a2);
		}
	};
}
