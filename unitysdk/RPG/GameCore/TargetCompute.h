#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetComputeType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_8122EF1751E8610F_OFFSET UNITYSDK_OFFSET(0x177AD200)
#define RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_D80294825193200E_OFFSET UNITYSDK_OFFSET(0x177AD2E0)
#define RPG_GAMECORE_TARGETCOMPUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x177AD290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetCompute_TypeDefinitionIndex = 22173;

	class TargetCompute : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetComputeType ComputeType; // 0x10
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8122EF1751E8610F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetCompute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetCompute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_8122EF1751E8610F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D80294825193200E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCOMPUTE_METHOD_4_D80294825193200E_OFFSET))(a1, a2);
		}
	};
}
