#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCAMERACONFIG_METHOD_2_1CDB235D8DABBD32_OFFSET UNITYSDK_OFFSET(0x1D5CF320)
#define RPG_GAMECORE_TIMEREWINDCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CF500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindCameraConfig_TypeDefinitionIndex = 16418;

	class TimeRewindCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 DefaultLookAtOffset; // 0x10
		::System::Single TransitionTime; // 0x1C
		::System::String* LookAtTransitionCurvePath; // 0x20
		::System::String* CameraLookAtOffsetBlendInPath; // 0x28
		::System::String* CameraLookAtOffsetBlendOutPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1CDB235D8DABBD32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERACONFIG_METHOD_2_1CDB235D8DABBD32_OFFSET))(a1, a2);
		}
	};
}
