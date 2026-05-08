#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_20_Struct_2_52AD02145F5FCE3A_27.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CausticsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x17A00510)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_71FCF7896B017C4C_OFFSET UNITYSDK_OFFSET(0x179FE6C0)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17A004F0)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x179FE110)
#define CLASS_4_121B841D6D63A1D3_20_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x17A00500)
#define CLASS_4_121B841D6D63A1D3_20_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x179FE4F0)
#define CLASS_4_121B841D6D63A1D3_20_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x179FF7C0)
#define CLASS_4_121B841D6D63A1D3_20__CTOR_OFFSET UNITYSDK_OFFSET(0x17A00490)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_20_TypeDefinitionIndex = 78527;

class Class_4_121B841D6D63A1D3_20 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::Caustics*, ::MoleMole::Timeline::CausticsBehaviour*>
{
public:
	::Class_4_121B841D6D63A1D3_20_Struct_2_52AD02145F5FCE3A_27 Field_4_0; // 0x38
	::UnityEngine::Texture* Field_4_24; // 0xA8
	::UnityEngine::Color Field_4_20; // 0xB0
	::System::Boolean Field_4_5; // 0xC0
	::System::Boolean Field_4_17; // 0xC1
	::System::Boolean Field_4_26; // 0xC2
	::System::Boolean Field_4_13; // 0xC3
	::System::Single Field_4_12; // 0xC4
	::System::Boolean Field_4_2; // 0xC8
	::System::Boolean Field_4_21; // 0xC9
	::System::Boolean Field_4_9; // 0xCA
	::System::Boolean Field_4_11; // 0xCB
	::System::Single Field_4_8; // 0xCC
	::System::Single Field_4_22; // 0xD0
	::System::Single Field_4_4; // 0xD4
	::System::Boolean Field_4_23; // 0xD8
	::System::Boolean Field_4_7; // 0xD9
	::System::Boolean Field_4_15; // 0xDA
	::System::Boolean Field_4_3; // 0xDB
	::System::Single Field_4_10; // 0xDC
	::System::Single Field_4_6; // 0xE0
	::System::Boolean Field_4_1; // 0xE4
	::System::Boolean Field_4_19; // 0xE5
	::System::Boolean Field_4_25; // 0xE6
	::System::Single Field_4_16; // 0xE8
	::System::Single Field_4_14; // 0xEC
	::System::Single Field_4_18; // 0xF0

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

	::System::Void Method_4_71FCF7896B017C4C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_71FCF7896B017C4C_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_20_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
