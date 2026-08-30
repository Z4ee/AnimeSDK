#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_458338C3E0EEBCC2_OFFSET UNITYSDK_OFFSET(0x1BBB1FA0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_98C0BA4F82016391_OFFSET UNITYSDK_OFFSET(0x1BBB1D90)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_B49301AA19D74ECC_OFFSET UNITYSDK_OFFSET(0x1BBB1FD0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_CF9C2590852AA014_OFFSET UNITYSDK_OFFSET(0x1BBB1DD0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB1DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropState_TypeDefinitionIndex = 20081;

	class ByComparePropState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PropState State; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98C0BA4F82016391(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_98C0BA4F82016391_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF9C2590852AA014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_CF9C2590852AA014_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_458338C3E0EEBCC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_458338C3E0EEBCC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B49301AA19D74ECC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATE_METHOD_4_B49301AA19D74ECC_OFFSET))(a1, a2);
		}
	};
}
