#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_21_Struct_2_52AD02145F5FCE36_36.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class ChromaticAberrationBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1257B230)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1257B220)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x125795B0)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_B88185B0ECB0F578_OFFSET UNITYSDK_OFFSET(0x12579940)
#define CLASS_4_121B841D6D63A1D3_21_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1257B240)
#define CLASS_4_121B841D6D63A1D3_21_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x125797B0)
#define CLASS_4_121B841D6D63A1D3_21_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1257A690)
#define CLASS_4_121B841D6D63A1D3_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1257B1B0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_21_TypeDefinitionIndex = 77125;

class Class_4_121B841D6D63A1D3_21 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Timeline::ChromaticAberrationBehaviour*>
{
public:
	::System::Single Field_4_10; // 0x38
	::Class_4_121B841D6D63A1D3_21_Struct_2_52AD02145F5FCE36_36 Field_4_0; // 0x3C
	::System::Single Field_4_2; // 0xB0
	::UnityEngine::Color Field_4_12; // 0xB4
	::System::Boolean Field_4_5; // 0xC4
	::System::Boolean Field_4_13; // 0xC5
	::System::Boolean Field_4_17; // 0xC6
	::System::Boolean Field_4_7; // 0xC7
	::System::Boolean Field_4_9; // 0xC8
	::System::Boolean Field_4_3; // 0xC9
	::System::Boolean Field_4_15; // 0xCA
	::UnityEngine::Vector2 Field_4_4; // 0xCC
	::System::Single Field_4_6; // 0xD4
	::System::Single Field_4_14; // 0xD8
	::UnityEngine::Color Field_4_8; // 0xDC
	::System::Single Field_4_18; // 0xEC
	::UnityEngine::Color Field_4_16; // 0xF0
	::System::Boolean Field_4_20; // 0x100
	::System::Boolean Field_4_11; // 0x101
	::System::Boolean Field_4_19; // 0x102
	::System::Boolean Field_4_1; // 0x103

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

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_B88185B0ECB0F578(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_B88185B0ECB0F578_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_21_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
