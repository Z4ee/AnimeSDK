#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_791814B4F7CBA720_OFFSET UNITYSDK_OFFSET(0x194337D0)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_BCB5F7AD9D86A4D9_OFFSET UNITYSDK_OFFSET(0x19433750)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x194337A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRestartGatheredRegion_TypeDefinitionIndex = 19848;

	class AdvRestartGatheredRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BCB5F7AD9D86A4D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRestartGatheredRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRestartGatheredRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_BCB5F7AD9D86A4D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_791814B4F7CBA720(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRestartGatheredRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRestartGatheredRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_791814B4F7CBA720_OFFSET))(a1, a2);
		}
	};
}
