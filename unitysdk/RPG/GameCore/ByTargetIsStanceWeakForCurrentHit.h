#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_B725FE5956ABA819_OFFSET UNITYSDK_OFFSET(0x1703C800)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_F2E26C7132083FE5_OFFSET UNITYSDK_OFFSET(0x1703C730)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1703C7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeakForCurrentHit_TypeDefinitionIndex = 21746;

	class ByTargetIsStanceWeakForCurrentHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F2E26C7132083FE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_F2E26C7132083FE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B725FE5956ABA819(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAKFORCURRENTHIT_METHOD_4_B725FE5956ABA819_OFFSET))(a1, a2);
		}
	};
}
