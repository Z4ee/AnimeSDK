#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_9A7A73FE5CBBC904_OFFSET UNITYSDK_OFFSET(0x17013860)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_CF9C2590852AA014_OFFSET UNITYSDK_OFFSET(0x17013930)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170138E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropState_TypeDefinitionIndex = 18605;

	class ByComparePropState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PropState State; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9A7A73FE5CBBC904(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_9A7A73FE5CBBC904_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF9C2590852AA014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_CF9C2590852AA014_OFFSET))(a1, a2);
		}
	};
}
