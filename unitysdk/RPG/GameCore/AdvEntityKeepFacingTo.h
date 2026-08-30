#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYKEEPFACINGTO_METHOD_3_4ABD4B613488E812_OFFSET UNITYSDK_OFFSET(0x1CDC8400)
#define RPG_GAMECORE_ADVENTITYKEEPFACINGTO_METHOD_3_E357B148632BA1BF_OFFSET UNITYSDK_OFFSET(0x1CDC83C0)
#define RPG_GAMECORE_ADVENTITYKEEPFACINGTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC83F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityKeepFacingTo_TypeDefinitionIndex = 20328;

	class AdvEntityKeepFacingTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single StopFacingDistance; // 0x28
		::System::Single StartFacingDistance; // 0x2C
		::System::Boolean FinishImmediately; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYKEEPFACINGTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E357B148632BA1BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityKeepFacingTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityKeepFacingTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYKEEPFACINGTO_METHOD_3_E357B148632BA1BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4ABD4B613488E812(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityKeepFacingTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityKeepFacingTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYKEEPFACINGTO_METHOD_3_4ABD4B613488E812_OFFSET))(a1, a2);
		}
	};
}
