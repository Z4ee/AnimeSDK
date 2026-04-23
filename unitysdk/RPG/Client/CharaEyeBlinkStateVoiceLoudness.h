#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x9F654E0)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9F65570)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9F65530)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_TICK_OFFSET UNITYSDK_OFFSET(0x9F655C0)
#define RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x9F65660)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeBlinkStateVoiceLoudness_TypeDefinitionIndex = 63046;

	class CharaEyeBlinkStateVoiceLoudness : public ::System::Object
	{
	public:
		// static const ::System::String* RTPC_LOUDNESS_KEY; // 0x0
		::UnityEngine::AnimationCurve* LoudnessToEyeIntensity; // 0x10
		::System::Single _EyeIntensity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATEVOICELOUDNESS_TICK_OFFSET))(this, a1);
		}
	};
}
