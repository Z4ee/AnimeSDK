#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_8_Struct_2_52AD02145F5FCE36_17.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class LensDistortionBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }

#define CLASS_4_121B841D6D63A1D3_8_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x130D0380)
#define CLASS_4_121B841D6D63A1D3_8_METHOD_4_344253BE4CAD911F_OFFSET UNITYSDK_OFFSET(0x130CF070)
#define CLASS_4_121B841D6D63A1D3_8_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x130D0390)
#define CLASS_4_121B841D6D63A1D3_8_METHOD_4_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x130CEE00)
#define CLASS_4_121B841D6D63A1D3_8_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x130D03A0)
#define CLASS_4_121B841D6D63A1D3_8_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x130CEF70)
#define CLASS_4_121B841D6D63A1D3_8_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x130CFA70)
#define CLASS_4_121B841D6D63A1D3_8__CTOR_OFFSET UNITYSDK_OFFSET(0x130D0330)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_8_TypeDefinitionIndex = 59135;

class Class_4_121B841D6D63A1D3_8 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::LensDistortion*, ::MoleMole::Timeline::LensDistortionBehaviour*>
{
public:
	::System::Single Field_4_10; // 0x38
	::System::Single Field_4_2; // 0x3C
	::System::Boolean Field_4_13; // 0x40
	::System::Boolean Field_4_3; // 0x41
	::System::Boolean Field_4_11; // 0x42
	::System::Boolean Field_4_9; // 0x43
	::System::Boolean Field_4_5; // 0x44
	::System::Boolean Field_4_7; // 0x45
	::System::Boolean Field_4_14; // 0x46
	::System::Boolean Field_4_1; // 0x47
	::System::Single Field_4_6; // 0x48
	::Class_4_121B841D6D63A1D3_8_Struct_2_52AD02145F5FCE36_17 Field_4_0; // 0x4C
	::System::Single Field_4_4; // 0x84
	::UnityEngine::Vector2 Field_4_8; // 0x88
	::System::Single Field_4_12; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8_METHOD_4_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_344253BE4CAD911F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8_METHOD_4_344253BE4CAD911F_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_8_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
