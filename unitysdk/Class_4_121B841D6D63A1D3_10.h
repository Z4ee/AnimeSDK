#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_10_Struct_2_52AD02145F5FCE3A_11.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class GaussianBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define CLASS_4_121B841D6D63A1D3_10_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x16C1BDF0)
#define CLASS_4_121B841D6D63A1D3_10_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16C1BDE0)
#define CLASS_4_121B841D6D63A1D3_10_METHOD_4_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x16C1A840)
#define CLASS_4_121B841D6D63A1D3_10_METHOD_4_C56684D46320D793_OFFSET UNITYSDK_OFFSET(0x16C1AA80)
#define CLASS_4_121B841D6D63A1D3_10_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x16C1BE00)
#define CLASS_4_121B841D6D63A1D3_10_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16C1A970)
#define CLASS_4_121B841D6D63A1D3_10_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16C1B4D0)
#define CLASS_4_121B841D6D63A1D3_10__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1BDC0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_10_TypeDefinitionIndex = 51410;

class Class_4_121B841D6D63A1D3_10 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::GaussianBlur*, ::MoleMole::Timeline::GaussianBlurBehaviour*>
{
public:
	::Class_4_121B841D6D63A1D3_10_Struct_2_52AD02145F5FCE3A_11 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_6; // 0x70
	::System::Single Field_4_4; // 0x78
	::System::Boolean Field_4_12; // 0x7C
	::System::Boolean Field_4_11; // 0x7D
	::System::Int32 Field_4_2; // 0x80
	::System::Single Field_4_8; // 0x84
	::System::Boolean Field_4_7; // 0x88
	::System::Boolean Field_4_13; // 0x89
	::System::Boolean Field_4_1; // 0x8A
	::System::Single Field_4_10; // 0x8C
	::System::Boolean Field_4_3; // 0x90
	::System::Boolean Field_4_9; // 0x91
	::System::Boolean Field_4_14; // 0x92
	::System::Boolean Field_4_5; // 0x93

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10_METHOD_4_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_C56684D46320D793(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10_METHOD_4_C56684D46320D793_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_10_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
