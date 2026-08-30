#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_METHOD_3_20422BDD15C10751_OFFSET UNITYSDK_OFFSET(0x1CE99E80)
#define RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_METHOD_3_3AE906F0FB9B6DA1_OFFSET UNITYSDK_OFFSET(0x1CE99E00)
#define RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE99E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionExitPerformance_TypeDefinitionIndex = 21975;

	class OpticalIllusionExitPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3AE906F0FB9B6DA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionExitPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionExitPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_METHOD_3_3AE906F0FB9B6DA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20422BDD15C10751(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionExitPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionExitPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONEXITPERFORMANCE_METHOD_3_20422BDD15C10751_OFFSET))(a1, a2);
		}
	};
}
