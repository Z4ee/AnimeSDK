#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_15_Struct_2_52AD02145F5FCE36_28.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class RadialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x167C91B0)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x167C5D10)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x167C91D0)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x167C62E0)
#define CLASS_4_121B841D6D63A1D3_15_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x167C91C0)
#define CLASS_4_121B841D6D63A1D3_15_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x167C6050)
#define CLASS_4_121B841D6D63A1D3_15_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x167C7EC0)
#define CLASS_4_121B841D6D63A1D3_15__CTOR_OFFSET UNITYSDK_OFFSET(0x167C9150)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_15_TypeDefinitionIndex = 75980;

class Class_4_121B841D6D63A1D3_15 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::RadialBlur*, ::MoleMole::Timeline::RadialBlurBehaviour*>
{
public:
	::System::Int32 Field_4_5; // 0x38
	::System::Boolean Field_4_14; // 0x3C
	::System::Boolean Field_4_0; // 0x3D
	::System::Boolean Field_4_18; // 0x3E
	::System::Boolean Field_4_20; // 0x3F
	::System::Single Field_4_11; // 0x40
	::System::Single Field_4_27; // 0x44
	::System::Boolean Field_4_30; // 0x48
	::System::Boolean Field_4_4; // 0x49
	::System::Boolean Field_4_10; // 0x4A
	::System::Boolean Field_4_32; // 0x4B
	::Class_4_121B841D6D63A1D3_15_Struct_2_52AD02145F5FCE36_28 Field_4_3; // 0x4C
	::UnityEngine::Vector2 Field_4_19; // 0xD4
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_4_1; // 0xDC
	::System::Int32 Field_4_29; // 0xE0
	::UnityEngine::Vector2 Field_4_9; // 0xE4
	::System::Single Field_4_23; // 0xEC
	::System::Boolean Field_4_12; // 0xF0
	::System::Boolean Field_4_26; // 0xF1
	::System::Boolean Field_4_13; // 0xF2
	::System::Boolean Field_4_28; // 0xF3
	::System::Single Field_4_15; // 0xF4
	::System::Boolean Field_4_34; // 0xF8
	::System::Boolean Field_4_17; // 0xF9
	::System::Boolean Field_4_22; // 0xFA
	::System::Boolean Field_4_16; // 0xFB
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_4_7; // 0xFC
	::System::Single Field_4_31; // 0x100
	::System::Single Field_4_21; // 0x104
	::System::Single Field_4_35; // 0x108
	::System::Boolean Field_4_8; // 0x10C
	::System::Boolean Field_4_2; // 0x10D
	::System::Boolean Field_4_37; // 0x10E
	::System::Boolean Field_4_33; // 0x10F
	::System::Single Field_4_25; // 0x110
	::System::Boolean Field_4_39; // 0x114
	::System::Boolean Field_4_24; // 0x115
	::System::Boolean Field_4_38; // 0x116
	::System::Boolean Field_4_6; // 0x117

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

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_15_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
