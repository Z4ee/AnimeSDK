#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_7F119228545D1CC8_1_Struct_2_52AD02145F5FCE36_20.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ShadowsMidtonesHighlightsBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define CLASS_4_7F119228545D1CC8_1_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x106A2FF0)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x106A3000)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x106A18C0)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x106A2FE0)
#define CLASS_4_7F119228545D1CC8_1_METHOD_4_F3D7D2AD64A5C158_OFFSET UNITYSDK_OFFSET(0x106A1BB0)
#define CLASS_4_7F119228545D1CC8_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x106A1A60)
#define CLASS_4_7F119228545D1CC8_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x106A2650)
#define CLASS_4_7F119228545D1CC8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x106A2F80)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_1_TypeDefinitionIndex = 61199;

class Class_4_7F119228545D1CC8_1 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::MoleMole::Timeline::ShadowsMidtonesHighlightsBehaviour*>
{
public:
	::Class_4_7F119228545D1CC8_1_Struct_2_52AD02145F5FCE36_20 Field_4_0; // 0x38
	::System::Single Field_4_10; // 0x98
	::UnityEngine::Vector4 Field_4_6; // 0x9C
	::UnityEngine::Vector4 Field_4_4; // 0xAC
	::System::Boolean Field_4_13; // 0xBC
	::System::Boolean Field_4_5; // 0xBD
	::UnityEngine::Vector4 Field_4_2; // 0xC0
	::System::Boolean Field_4_15; // 0xD0
	::System::Boolean Field_4_7; // 0xD1
	::System::Boolean Field_4_9; // 0xD2
	::System::Boolean Field_4_16; // 0xD3
	::System::Single Field_4_14; // 0xD4
	::System::Single Field_4_12; // 0xD8
	::System::Single Field_4_8; // 0xDC
	::System::Boolean Field_4_3; // 0xE0
	::System::Boolean Field_4_1; // 0xE1
	::System::Boolean Field_4_11; // 0xE2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_F3D7D2AD64A5C158(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_F3D7D2AD64A5C158_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_1_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
