#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_15_Struct_2_52AD02145F5FCE36_29.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class RadialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11342550)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x1133F0E0)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11342540)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_A88DC3524C352DE6_OFFSET UNITYSDK_OFFSET(0x1133F650)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x11342560)
#define CLASS_4_121B841D6D63A1D3_15_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1133F3D0)
#define CLASS_4_121B841D6D63A1D3_15_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11341240)
#define CLASS_4_121B841D6D63A1D3_15__CTOR_OFFSET UNITYSDK_OFFSET(0x113424E0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_15_TypeDefinitionIndex = 71907;

class Class_4_121B841D6D63A1D3_15 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::RadialBlur*, ::MoleMole::Timeline::RadialBlurBehaviour*>
{
public:
	::System::Boolean Field_4_29; // 0x38
	::System::Boolean Field_4_15; // 0x39
	::System::Boolean Field_4_27; // 0x3A
	::System::Boolean Field_4_35; // 0x3B
	::System::Single Field_4_26; // 0x3C
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_4_2; // 0x40
	::System::Boolean Field_4_11; // 0x44
	::System::Boolean Field_4_9; // 0x45
	::System::Boolean Field_4_13; // 0x46
	::System::Boolean Field_4_36; // 0x47
	::System::Single Field_4_32; // 0x48
	::System::Boolean Field_4_14; // 0x4C
	::System::Boolean Field_4_31; // 0x4D
	::System::Boolean Field_4_5; // 0x4E
	::System::Boolean Field_4_37; // 0x4F
	::System::Boolean Field_4_21; // 0x50
	::System::Boolean Field_4_33; // 0x51
	::System::Boolean Field_4_34; // 0x52
	::System::Boolean Field_4_17; // 0x53
	::System::Int32 Field_4_6; // 0x54
	::System::Single Field_4_12; // 0x58
	::System::Single Field_4_20; // 0x5C
	::System::Single Field_4_8; // 0x60
	::System::Single Field_4_28; // 0x64
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_4_4; // 0x68
	::UnityEngine::Vector2 Field_4_16; // 0x6C
	::System::Single Field_4_24; // 0x74
	::System::Boolean Field_4_1; // 0x78
	::System::Boolean Field_4_3; // 0x79
	::System::Boolean Field_4_38; // 0x7A
	::System::Boolean Field_4_19; // 0x7B
	::System::Boolean Field_4_23; // 0x7C
	::System::Boolean Field_4_7; // 0x7D
	::System::Boolean Field_4_18; // 0x7E
	::System::Boolean Field_4_25; // 0x7F
	::UnityEngine::Vector2 Field_4_10; // 0x80
	::Class_4_121B841D6D63A1D3_15_Struct_2_52AD02145F5FCE36_29 Field_4_0; // 0x88
	::System::Int32 Field_4_30; // 0x110
	::System::Single Field_4_22; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A88DC3524C352DE6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_A88DC3524C352DE6_OFFSET))(this, a1);
	}
};
