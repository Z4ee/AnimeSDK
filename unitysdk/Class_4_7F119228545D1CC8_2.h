#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_7F119228545D1CC8_2_Struct_2_52AD02145F5FCE36_23.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ChannelMixerBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define CLASS_4_7F119228545D1CC8_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1167BAC0)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1167BAB0)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x1167A0B0)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_BABAF73CC3BAA3B1_OFFSET UNITYSDK_OFFSET(0x1167A3C0)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1167BAA0)
#define CLASS_4_7F119228545D1CC8_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1167A240)
#define CLASS_4_7F119228545D1CC8_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1167B0B0)
#define CLASS_4_7F119228545D1CC8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1167BA70)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_2_TypeDefinitionIndex = 72419;

class Class_4_7F119228545D1CC8_2 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::ChannelMixer*, ::MoleMole::Timeline::ChannelMixerBehaviour*>
{
public:
	::System::Single Field_4_13; // 0x38
	::System::Single Field_4_15; // 0x3C
	::System::Single Field_4_17; // 0x40
	::System::Single Field_4_23; // 0x44
	::System::Single Field_4_7; // 0x48
	::System::Single Field_4_9; // 0x4C
	::System::Single Field_4_5; // 0x50
	::System::Single Field_4_11; // 0x54
	::System::Boolean Field_4_8; // 0x58
	::System::Boolean Field_4_16; // 0x59
	::System::Boolean Field_4_18; // 0x5A
	::System::Boolean Field_4_21; // 0x5B
	::System::Boolean Field_4_4; // 0x5C
	::System::Boolean Field_4_6; // 0x5D
	::System::Boolean Field_4_14; // 0x5E
	::System::Boolean Field_4_22; // 0x5F
	::Class_4_7F119228545D1CC8_2_Struct_2_52AD02145F5FCE36_23 Field_4_1; // 0x60
	::System::Boolean Field_4_10; // 0xAC
	::System::Boolean Field_4_0; // 0xAD
	::System::Boolean Field_4_12; // 0xAE
	::System::Single Field_4_19; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_BABAF73CC3BAA3B1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_BABAF73CC3BAA3B1_OFFSET))(this, a1);
	}
};
