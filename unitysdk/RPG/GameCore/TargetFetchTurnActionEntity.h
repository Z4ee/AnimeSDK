#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_B95471B175C55B48_OFFSET UNITYSDK_OFFSET(0x18EE6090)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_C28B2D6E951406DA_OFFSET UNITYSDK_OFFSET(0x18EE0AC0)
#define RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE0A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTurnActionEntity_TypeDefinitionIndex = 22989;

	class TargetFetchTurnActionEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B95471B175C55B48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_B95471B175C55B48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C28B2D6E951406DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNACTIONENTITY_METHOD_4_C28B2D6E951406DA_OFFSET))(a1, a2);
		}
	};
}
