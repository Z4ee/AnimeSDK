#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_18_Struct_2_52AD02145F5FCE36_31.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class AmplifyOcclusionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13C2CCC0)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x13C29E10)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_7BEB91F20D33D5DC_OFFSET UNITYSDK_OFFSET(0x13C2A310)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13C2CCD0)
#define CLASS_4_121B841D6D63A1D3_18_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x13C2CCE0)
#define CLASS_4_121B841D6D63A1D3_18_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13C2A0C0)
#define CLASS_4_121B841D6D63A1D3_18_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13C2BC80)
#define CLASS_4_121B841D6D63A1D3_18__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2CC40)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_18_TypeDefinitionIndex = 81573;

class Class_4_121B841D6D63A1D3_18 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::MoleMole::Timeline::AmplifyOcclusionBehaviour*>
{
public:
	::System::Boolean Field_4_8; // 0x38
	::System::Boolean Field_4_24; // 0x39
	::System::Boolean Field_4_18; // 0x3A
	::System::Boolean Field_4_14; // 0x3B
	::System::Single Field_4_13; // 0x3C
	::System::Int32 Field_4_31; // 0x40
	::System::Single Field_4_19; // 0x44
	::System::Single Field_4_17; // 0x48
	::System::Boolean Field_4_33; // 0x4C
	::System::Boolean Field_4_20; // 0x4D
	::System::Boolean Field_4_10; // 0x4E
	::System::Boolean Field_4_27; // 0x4F
	::System::Single Field_4_7; // 0x50
	::System::Single Field_4_11; // 0x54
	::System::Single Field_4_29; // 0x58
	::System::Single Field_4_1; // 0x5C
	::System::Single Field_4_15; // 0x60
	::System::Boolean Field_4_21; // 0x64
	::System::Boolean Field_4_2; // 0x65
	::System::Boolean Field_4_4; // 0x66
	::System::Boolean Field_4_0; // 0x67
	::System::Boolean Field_4_26; // 0x68
	::System::Boolean Field_4_16; // 0x69
	::Class_4_121B841D6D63A1D3_18_Struct_2_52AD02145F5FCE36_31 Field_4_3; // 0x6C
	::UnityEngine::Color Field_4_9; // 0xE8
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel Field_4_5; // 0xF8
	::System::Boolean Field_4_35; // 0xFC
	::System::Boolean Field_4_6; // 0xFD
	::System::Boolean Field_4_12; // 0xFE
	::System::Boolean Field_4_23; // 0xFF
	::System::Int32 Field_4_25; // 0x100
	::System::Boolean Field_4_28; // 0x104
	::System::Boolean Field_4_34; // 0x105
	::System::Boolean Field_4_30; // 0x106
	::System::Boolean Field_4_22; // 0x107

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_7BEB91F20D33D5DC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_7BEB91F20D33D5DC_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_18_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
