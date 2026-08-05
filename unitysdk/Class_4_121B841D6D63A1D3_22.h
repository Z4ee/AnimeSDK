#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_22_Struct_2_52AD02145F5FCE36_42.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Timeline { class ChromaticAberrationBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x128D7760)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x128D7770)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x128D5B10)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_B88185B0ECB0F578_OFFSET UNITYSDK_OFFSET(0x128D5E70)
#define CLASS_4_121B841D6D63A1D3_22_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x128D7750)
#define CLASS_4_121B841D6D63A1D3_22_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x128D5CF0)
#define CLASS_4_121B841D6D63A1D3_22_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x128D6BF0)
#define CLASS_4_121B841D6D63A1D3_22__CTOR_OFFSET UNITYSDK_OFFSET(0x128D76F0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_22_TypeDefinitionIndex = 91411;

class Class_4_121B841D6D63A1D3_22 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Timeline::ChromaticAberrationBehaviour*>
{
public:
	::System::Boolean Field_4_9; // 0x38
	::System::Boolean Field_4_13; // 0x39
	::System::Boolean Field_4_15; // 0x3A
	::System::Boolean Field_4_21; // 0x3B
	::UnityEngine::Color Field_4_12; // 0x3C
	::System::Boolean Field_4_20; // 0x4C
	::System::Boolean Field_4_5; // 0x4D
	::System::Boolean Field_4_11; // 0x4E
	::System::Boolean Field_4_17; // 0x4F
	::System::Single Field_4_18; // 0x50
	::System::Single Field_4_10; // 0x54
	::System::Boolean Field_4_23; // 0x58
	::System::Boolean Field_4_19; // 0x59
	::System::Boolean Field_4_7; // 0x5A
	::UnityEngine::Color Field_4_8; // 0x5C
	::UnityEngine::Vector2 Field_4_4; // 0x6C
	::Class_4_121B841D6D63A1D3_22_Struct_2_52AD02145F5FCE36_42 Field_4_0; // 0x74
	::UnityEngine::Color Field_4_16; // 0xE8
	::System::Single Field_4_22; // 0xF8
	::System::Single Field_4_14; // 0xFC
	::System::Single Field_4_6; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_B88185B0ECB0F578(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_B88185B0ECB0F578_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_22_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
