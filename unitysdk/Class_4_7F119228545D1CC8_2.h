#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C33AF57B038AFD8.h"
#include "unitysdk/Class_4_7F119228545D1CC8_2_Struct_2_52AD02145F5FCE36_29.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ShadowsMidtonesHighlightsBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define CLASS_4_7F119228545D1CC8_2_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x10B1E560)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10B1E540)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x10B1CE10)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x10B1E550)
#define CLASS_4_7F119228545D1CC8_2_METHOD_4_F3D7D2AD64A5C158_OFFSET UNITYSDK_OFFSET(0x10B1D0E0)
#define CLASS_4_7F119228545D1CC8_2_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10B1CF90)
#define CLASS_4_7F119228545D1CC8_2_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10B1DBB0)
#define CLASS_4_7F119228545D1CC8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1E4F0)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_2_TypeDefinitionIndex = 69044;

class Class_4_7F119228545D1CC8_2 : public ::Class_3_9C33AF57B038AFD8<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::MoleMole::Timeline::ShadowsMidtonesHighlightsBehaviour*>
{
public:
	::System::Single Field_4_12; // 0x38
	::System::Boolean Field_4_1; // 0x3C
	::System::Boolean Field_4_7; // 0x3D
	::System::Single Field_4_8; // 0x40
	::System::Single Field_4_14; // 0x44
	::UnityEngine::Vector4 Field_4_2; // 0x48
	::System::Boolean Field_4_13; // 0x58
	::System::Boolean Field_4_11; // 0x59
	::System::Boolean Field_4_5; // 0x5A
	::System::Single Field_4_10; // 0x5C
	::UnityEngine::Vector4 Field_4_4; // 0x60
	::System::Boolean Field_4_16; // 0x70
	::System::Boolean Field_4_15; // 0x71
	::System::Boolean Field_4_3; // 0x72
	::System::Boolean Field_4_9; // 0x73
	::Class_4_7F119228545D1CC8_2_Struct_2_52AD02145F5FCE36_29 Field_4_0; // 0x74
	::UnityEngine::Vector4 Field_4_6; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_F3D7D2AD64A5C158(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_F3D7D2AD64A5C158_OFFSET))(this, a1);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_2_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
