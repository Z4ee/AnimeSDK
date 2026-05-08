#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_7F119228545D1CC8_1_Struct_2_52AD02145F5FCE36_16.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ChannelMixerBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChannelMixer; }

#define CLASS_4_7F119228545D1CC8_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xFD458D0)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xFD458C0)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xFD43E50)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_BABAF73CC3BAA3B1_OFFSET UNITYSDK_OFFSET(0xFD44180)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xFD458B0)
#define CLASS_4_7F119228545D1CC8_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xFD44000)
#define CLASS_4_7F119228545D1CC8_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xFD44E50)
#define CLASS_4_7F119228545D1CC8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFD45880)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_1_TypeDefinitionIndex = 53407;

class Class_4_7F119228545D1CC8_1 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ChannelMixer*, ::MoleMole::Timeline::ChannelMixerBehaviour*>
{
public:
	::System::Single Field_4_16; // 0x38
	::System::Single Field_4_6; // 0x3C
	::System::Single Field_4_18; // 0x40
	::System::Single Field_4_10; // 0x44
	::Class_4_7F119228545D1CC8_1_Struct_2_52AD02145F5FCE36_16 Field_4_0; // 0x48
	::System::Single Field_4_8; // 0x94
	::System::Boolean Field_4_17; // 0x98
	::System::Boolean Field_4_20; // 0x99
	::System::Boolean Field_4_15; // 0x9A
	::System::Boolean Field_4_9; // 0x9B
	::System::Single Field_4_14; // 0x9C
	::System::Boolean Field_4_11; // 0xA0
	::System::Boolean Field_4_19; // 0xA1
	::System::Boolean Field_4_3; // 0xA2
	::System::Boolean Field_4_1; // 0xA3
	::System::Single Field_4_4; // 0xA4
	::System::Single Field_4_12; // 0xA8
	::System::Boolean Field_4_13; // 0xAC
	::System::Boolean Field_4_7; // 0xAD
	::System::Boolean Field_4_5; // 0xAE
	::System::Single Field_4_2; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_BABAF73CC3BAA3B1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_BABAF73CC3BAA3B1_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
