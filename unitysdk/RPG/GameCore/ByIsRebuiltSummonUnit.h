#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_314617F59C384C17_OFFSET UNITYSDK_OFFSET(0x17031BE0)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_DA2E7D5D39AEF2D9_OFFSET UNITYSDK_OFFSET(0x17031B10)
#define RPG_GAMECORE_BYISREBUILTSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17031B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRebuiltSummonUnit_TypeDefinitionIndex = 18448;

	class ByIsRebuiltSummonUnit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DA2E7D5D39AEF2D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRebuiltSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_DA2E7D5D39AEF2D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_314617F59C384C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISREBUILTSUMMONUNIT_METHOD_4_314617F59C384C17_OFFSET))(a1, a2);
		}
	};
}
