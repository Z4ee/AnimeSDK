#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_METHOD_3_A14F3F032326C5FE_OFFSET UNITYSDK_OFFSET(0x1D40E320)
#define RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_METHOD_3_E0D0F1415FC7805B_OFFSET UNITYSDK_OFFSET(0x1D40E360)
#define RPG_GAMECORE_OVERRIDESKILLREADYCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40E350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillReadyCamera_TypeDefinitionIndex = 22581;

	class OverrideSkillReadyCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x28
		::RPG::GameCore::VCameraConfig* CameraConfigAdded; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A14F3F032326C5FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillReadyCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillReadyCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_METHOD_3_A14F3F032326C5FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E0D0F1415FC7805B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSkillReadyCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSkillReadyCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLREADYCAMERA_METHOD_3_E0D0F1415FC7805B_OFFSET))(a1, a2);
		}
	};
}
