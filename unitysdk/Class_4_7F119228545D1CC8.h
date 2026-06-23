#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_7F119228545D1CC8_Struct_2_52AD02145F5FCE36_18.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ChannelMixerBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define CLASS_4_7F119228545D1CC8_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13913910)
#define CLASS_4_7F119228545D1CC8_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13913900)
#define CLASS_4_7F119228545D1CC8_METHOD_4_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x13911EA0)
#define CLASS_4_7F119228545D1CC8_METHOD_4_BABAF73CC3BAA3B1_OFFSET UNITYSDK_OFFSET(0x139121A0)
#define CLASS_4_7F119228545D1CC8_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x139138F0)
#define CLASS_4_7F119228545D1CC8_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13912030)
#define CLASS_4_7F119228545D1CC8_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13912E90)
#define CLASS_4_7F119228545D1CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x139138C0)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_TypeDefinitionIndex = 60068;

class Class_4_7F119228545D1CC8 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ChannelMixer*, ::MoleMole::Timeline::ChannelMixerBehaviour*>
{
public:
	::System::Single Field_4_2; // 0x38
	::System::Single Field_4_10; // 0x3C
	::System::Single Field_4_8; // 0x40
	::System::Boolean Field_4_1; // 0x44
	::System::Boolean Field_4_15; // 0x45
	::System::Boolean Field_4_20; // 0x46
	::System::Single Field_4_18; // 0x48
	::System::Single Field_4_14; // 0x4C
	::System::Single Field_4_12; // 0x50
	::System::Boolean Field_4_9; // 0x54
	::System::Boolean Field_4_3; // 0x55
	::System::Boolean Field_4_5; // 0x56
	::System::Boolean Field_4_17; // 0x57
	::System::Boolean Field_4_11; // 0x58
	::System::Boolean Field_4_13; // 0x59
	::System::Boolean Field_4_7; // 0x5A
	::System::Boolean Field_4_19; // 0x5B
	::System::Single Field_4_16; // 0x5C
	::System::Single Field_4_6; // 0x60
	::Class_4_7F119228545D1CC8_Struct_2_52AD02145F5FCE36_18 Field_4_0; // 0x64
	::System::Single Field_4_4; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_BABAF73CC3BAA3B1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_BABAF73CC3BAA3B1_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
