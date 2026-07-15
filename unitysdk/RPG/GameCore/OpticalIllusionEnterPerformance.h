#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_82DD9059B84721B1_OFFSET UNITYSDK_OFFSET(0x1BB03DF0)
#define RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_951E4EDDFB1AF881_OFFSET UNITYSDK_OFFSET(0x1BB03D70)
#define RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB03DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionEnterPerformance_TypeDefinitionIndex = 21413;

	class OpticalIllusionEnterPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_951E4EDDFB1AF881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionEnterPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionEnterPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_951E4EDDFB1AF881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_82DD9059B84721B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionEnterPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionEnterPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONENTERPERFORMANCE_METHOD_3_82DD9059B84721B1_OFFSET))(a1, a2);
		}
	};
}
