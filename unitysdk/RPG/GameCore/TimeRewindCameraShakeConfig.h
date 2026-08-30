#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG_METHOD_2_4EFF71903B2FB69A_OFFSET UNITYSDK_OFFSET(0x1D5274C0)
#define RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D527640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindCameraShakeConfig_TypeDefinitionIndex = 16430;

	class TimeRewindCameraShakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ShakeTemplateName; // 0x10
		::RPG::GameCore::VCameraOverrideShakeV2* OverrideShakeConfigV2; // 0x18
		::RPG::GameCore::VCameraShakeV2* ShakeConfigV2; // 0x20
		::System::Single ShakeDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4EFF71903B2FB69A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindCameraShakeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindCameraShakeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCAMERASHAKECONFIG_METHOD_2_4EFF71903B2FB69A_OFFSET))(a1, a2);
		}
	};
}
