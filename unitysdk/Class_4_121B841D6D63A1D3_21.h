#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_21_Struct_2_52AD02145F5FCE36_37.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ScreenSpaceAmbientOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusion; }

#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x181F3950)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x181F3970)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x181F0B40)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x181F3960)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_EE1F78879782CC8A_OFFSET UNITYSDK_OFFSET(0x181F1000)
#define CLASS_4_121B841D6D63A1D3_21_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x181F0DE0)
#define CLASS_4_121B841D6D63A1D3_21_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x181F29C0)
#define CLASS_4_121B841D6D63A1D3_21__CTOR_OFFSET UNITYSDK_OFFSET(0x181F38F0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_21_TypeDefinitionIndex = 87966;

class Class_4_121B841D6D63A1D3_21 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*, ::MoleMole::Timeline::ScreenSpaceAmbientOcclusionBehaviour*>
{
public:
	::System::Boolean Field_4_1; // 0x38
	::System::Boolean Field_4_7; // 0x39
	::System::Boolean Field_4_28; // 0x3A
	::System::Boolean Field_4_16; // 0x3B
	::System::Single Field_4_12; // 0x3C
	::System::Int32 Field_4_30; // 0x40
	::System::Single Field_4_0; // 0x44
	::System::Int32 Field_4_20; // 0x48
	::Class_4_121B841D6D63A1D3_21_Struct_2_52AD02145F5FCE36_37 Field_4_2; // 0x4C
	::System::Int32 Field_4_24; // 0xB0
	::System::Boolean Field_4_13; // 0xB4
	::System::Boolean Field_4_5; // 0xB5
	::System::Boolean Field_4_34; // 0xB6
	::System::Boolean Field_4_27; // 0xB7
	::System::Single Field_4_22; // 0xB8
	::System::Single Field_4_4; // 0xBC
	::System::Boolean Field_4_15; // 0xC0
	::System::Boolean Field_4_17; // 0xC1
	::System::Boolean Field_4_25; // 0xC2
	::System::Boolean Field_4_35; // 0xC3
	::System::Single Field_4_14; // 0xC4
	::System::Int32 Field_4_18; // 0xC8
	::System::Boolean Field_4_29; // 0xCC
	::System::Boolean Field_4_21; // 0xCD
	::System::Boolean Field_4_8; // 0xCE
	::System::Boolean Field_4_10; // 0xCF
	::System::Single Field_4_6; // 0xD0
	::System::Boolean Field_4_19; // 0xD4
	::System::Boolean Field_4_9; // 0xD5
	::System::Boolean Field_4_26; // 0xD6
	::System::Boolean Field_4_31; // 0xD7
	::System::Boolean Field_4_23; // 0xD8
	::System::Boolean Field_4_11; // 0xD9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_EE1F78879782CC8A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_EE1F78879782CC8A_OFFSET))(this, a1);
	}
};
