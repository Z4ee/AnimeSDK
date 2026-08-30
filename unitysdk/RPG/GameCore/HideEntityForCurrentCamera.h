#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_METHOD_3_5638726E3457F759_OFFSET UNITYSDK_OFFSET(0x1D18CF20)
#define RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_METHOD_3_F77749131CA6DFE2_OFFSET UNITYSDK_OFFSET(0x1D18CF60)
#define RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18CF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEntityForCurrentCamera_TypeDefinitionIndex = 23456;

	class HideEntityForCurrentCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5638726E3457F759(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntityForCurrentCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntityForCurrentCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_METHOD_3_5638726E3457F759_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F77749131CA6DFE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntityForCurrentCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntityForCurrentCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYFORCURRENTCAMERA_METHOD_3_F77749131CA6DFE2_OFFSET))(a1, a2);
		}
	};
}
