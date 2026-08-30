#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BEGINUSESHAREDSUMMONUNIT_METHOD_3_26E28F7A864444B9_OFFSET UNITYSDK_OFFSET(0x1CE824A0)
#define RPG_GAMECORE_BEGINUSESHAREDSUMMONUNIT_METHOD_3_36C7B72A2A17E0C2_OFFSET UNITYSDK_OFFSET(0x1CE824E0)
#define RPG_GAMECORE_BEGINUSESHAREDSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE824D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BeginUseSharedSummonUnit_TypeDefinitionIndex = 20919;

	class BeginUseSharedSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEGINUSESHAREDSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26E28F7A864444B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BeginUseSharedSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BeginUseSharedSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEGINUSESHAREDSUMMONUNIT_METHOD_3_26E28F7A864444B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36C7B72A2A17E0C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BeginUseSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BeginUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEGINUSESHAREDSUMMONUNIT_METHOD_3_36C7B72A2A17E0C2_OFFSET))(a1, a2);
		}
	};
}
