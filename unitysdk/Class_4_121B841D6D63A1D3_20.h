#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_20_Struct_2_52AD02145F5FCE3A_29.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class ColorAdjustmentsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15923430)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_4DD44D2DBFF9E0A5_OFFSET UNITYSDK_OFFSET(0x15920F00)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15923420)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x159208B0)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15923410)
#define CLASS_4_121B841D6D63A1D3_20_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15920CB0)
#define CLASS_4_121B841D6D63A1D3_20_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15922490)
#define CLASS_4_121B841D6D63A1D3_20__CTOR_OFFSET UNITYSDK_OFFSET(0x159233F0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_20_TypeDefinitionIndex = 82348;

class Class_4_121B841D6D63A1D3_20 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::ColorAdjustments*, ::MoleMole::Timeline::ColorAdjustmentsBehaviour*>
{
public:
	::Class_4_121B841D6D63A1D3_20_Struct_2_52AD02145F5FCE3A_29 Field_4_1; // 0x38
	::UnityEngine::Texture* Field_4_31; // 0xC0
	::System::Single Field_4_25; // 0xC8
	::System::Boolean Field_4_6; // 0xCC
	::System::Boolean Field_4_34; // 0xCD
	::System::Boolean Field_4_10; // 0xCE
	::System::Boolean Field_4_33; // 0xCF
	::System::Single Field_4_29; // 0xD0
	::System::Single Field_4_11; // 0xD4
	::System::Single Field_4_7; // 0xD8
	::UnityEngine::Color Field_4_13; // 0xDC
	::System::Single Field_4_17; // 0xEC
	::System::Single Field_4_23; // 0xF0
	::System::Boolean Field_4_26; // 0xF4
	::System::Boolean Field_4_16; // 0xF5
	::System::Boolean Field_4_4; // 0xF6
	::System::Boolean Field_4_8; // 0xF7
	::System::Single Field_4_5; // 0xF8
	::System::Boolean Field_4_12; // 0xFC
	::System::Boolean Field_4_28; // 0xFD
	::System::Boolean Field_4_30; // 0xFE
	::System::Boolean Field_4_24; // 0xFF
	::System::Single Field_4_15; // 0x100
	::System::Single Field_4_19; // 0x104
	::System::Single Field_4_27; // 0x108
	::System::Boolean Field_4_20; // 0x10C
	::System::Boolean Field_4_18; // 0x10D
	::System::Boolean Field_4_14; // 0x10E
	::System::Boolean Field_4_0; // 0x10F
	::System::Boolean Field_4_22; // 0x110
	::System::Boolean Field_4_21; // 0x111
	::System::Boolean Field_4_35; // 0x112
	::System::Single Field_4_9; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_B247C6D88E785B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_B247C6D88E785B91_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_4DD44D2DBFF9E0A5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_4DD44D2DBFF9E0A5_OFFSET))(this, a1);
	}
};
