#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_5_Struct_2_52AD02145F5FCE3A_6.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CausticsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define CLASS_4_121B841D6D63A1D3_5_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18B37B00)
#define CLASS_4_121B841D6D63A1D3_5_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18B37B10)
#define CLASS_4_121B841D6D63A1D3_5_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x18B35720)
#define CLASS_4_121B841D6D63A1D3_5_METHOD_4_B88185B0ECB0F578_OFFSET UNITYSDK_OFFSET(0x18B35CE0)
#define CLASS_4_121B841D6D63A1D3_5_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18B37AF0)
#define CLASS_4_121B841D6D63A1D3_5_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18B35B00)
#define CLASS_4_121B841D6D63A1D3_5_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18B36DE0)
#define CLASS_4_121B841D6D63A1D3_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18B37A90)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_5_TypeDefinitionIndex = 50428;

class Class_4_121B841D6D63A1D3_5 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::Caustics*, ::MoleMole::Timeline::CausticsBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_24; // 0x38
	::Class_4_121B841D6D63A1D3_5_Struct_2_52AD02145F5FCE3A_6 Field_4_0; // 0x40
	::System::Single Field_4_18; // 0xB0
	::System::Single Field_4_26; // 0xB4
	::UnityEngine::Color Field_4_20; // 0xB8
	::System::Single Field_4_16; // 0xC8
	::System::Single Field_4_8; // 0xCC
	::System::Boolean Field_4_9; // 0xD0
	::System::Boolean Field_4_25; // 0xD1
	::System::Boolean Field_4_19; // 0xD2
	::System::Boolean Field_4_31; // 0xD3
	::System::Boolean Field_4_13; // 0xD4
	::System::Boolean Field_4_21; // 0xD5
	::System::Boolean Field_4_30; // 0xD6
	::System::Boolean Field_4_23; // 0xD7
	::System::Single Field_4_4; // 0xD8
	::System::Boolean Field_4_15; // 0xDC
	::System::Boolean Field_4_5; // 0xDD
	::System::Boolean Field_4_11; // 0xDE
	::System::Boolean Field_4_7; // 0xDF
	::System::Single Field_4_12; // 0xE0
	::System::Single Field_4_22; // 0xE4
	::System::Boolean Field_4_27; // 0xE8
	::System::Boolean Field_4_17; // 0xE9
	::System::Boolean Field_4_6; // 0xEA
	::System::Single Field_4_10; // 0xEC
	::System::Single Field_4_14; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_B88185B0ECB0F578(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5_METHOD_4_B88185B0ECB0F578_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_5_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
