#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class SkillCustomFormationConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLCUSTOMREADYCONFIG_METHOD_2_7A8790F7015E19A2_OFFSET UNITYSDK_OFFSET(0x1770E1B0)
#define RPG_GAMECORE_SKILLCUSTOMREADYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1770E480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCustomReadyConfig_TypeDefinitionIndex = 16686;

	class SkillCustomReadyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Condition; // 0x10
		::System::Int32 AutoSelectPriority; // 0x18
		::System::Boolean OverrideCamera; // 0x1C
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::VCameraConfig* CameraConfigAdded; // 0x28
		::System::String* CameraConfigAddedReferenceKey; // 0x30
		::System::String* CameraConfigReferenceKey; // 0x38
		::System::String* ReadyAnimState; // 0x40
		::RPG::GameCore::SkillCustomFormationConfig* CustomFormationConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMREADYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7A8790F7015E19A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillCustomReadyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillCustomReadyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCUSTOMREADYCONFIG_METHOD_2_7A8790F7015E19A2_OFFSET))(a1, a2);
		}
	};
}
