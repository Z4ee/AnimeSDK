#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_8F65B389A8CB6D02_OFFSET UNITYSDK_OFFSET(0x177B6650)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_CF4F72CA467439B0_OFFSET UNITYSDK_OFFSET(0x177BF3E0)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x177B6600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMazeBuffTargets_TypeDefinitionIndex = 22212;

	class TargetFetchMazeBuffTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CF4F72CA467439B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMazeBuffTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_CF4F72CA467439B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F65B389A8CB6D02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_METHOD_4_8F65B389A8CB6D02_OFFSET))(a1, a2);
		}
	};
}
