#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_METHOD_3_0C717D1873635530_OFFSET UNITYSDK_OFFSET(0x1CE9A780)
#define RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_METHOD_3_5882EE9EC9BE0046_OFFSET UNITYSDK_OFFSET(0x1CE9A700)
#define RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9A750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionSwitchCamera_TypeDefinitionIndex = 21976;

	class OpticalIllusionSwitchCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Int32 Index; // 0x20
		::System::Boolean Reset; // 0x24
		::System::Single Duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5882EE9EC9BE0046(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionSwitchCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionSwitchCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_METHOD_3_5882EE9EC9BE0046_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C717D1873635530(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionSwitchCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionSwitchCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSWITCHCAMERA_METHOD_3_0C717D1873635530_OFFSET))(a1, a2);
		}
	};
}
