#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_82DD9059B84721B1_OFFSET UNITYSDK_OFFSET(0x199D9FC0)
#define RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_91C4731A548A1C3F_OFFSET UNITYSDK_OFFSET(0x199D9E70)
#define RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x199D9F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionEnterPerformance_TypeDefinitionIndex = 20998;

	class OpticalIllusionEnterPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91C4731A548A1C3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionEnterPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionEnterPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_91C4731A548A1C3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_82DD9059B84721B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionEnterPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionEnterPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_82DD9059B84721B1_OFFSET))(a1, a2);
		}
	};
}
