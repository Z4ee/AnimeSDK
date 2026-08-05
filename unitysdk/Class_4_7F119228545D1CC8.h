#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_7F119228545D1CC8_Struct_2_52AD02145F5FCE36_2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ShadowsMidtonesHighlightsBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define CLASS_4_7F119228545D1CC8_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15FE8340)
#define CLASS_4_7F119228545D1CC8_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15FE8330)
#define CLASS_4_7F119228545D1CC8_METHOD_4_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x15FE6C30)
#define CLASS_4_7F119228545D1CC8_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15FE8350)
#define CLASS_4_7F119228545D1CC8_METHOD_4_F3D7D2AD64A5C158_OFFSET UNITYSDK_OFFSET(0x15FE6F00)
#define CLASS_4_7F119228545D1CC8_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15FE6DB0)
#define CLASS_4_7F119228545D1CC8_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15FE79D0)
#define CLASS_4_7F119228545D1CC8__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE82E0)

inline static constexpr unsigned int Class_4_7F119228545D1CC8_TypeDefinitionIndex = 44498;

class Class_4_7F119228545D1CC8 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*, ::MoleMole::Timeline::ShadowsMidtonesHighlightsBehaviour*>
{
public:
	::System::Boolean Field_4_18; // 0x38
	::System::Boolean Field_4_9; // 0x39
	::System::Boolean Field_4_5; // 0x3A
	::System::Single Field_4_8; // 0x3C
	::System::Single Field_4_12; // 0x40
	::System::Single Field_4_14; // 0x44
	::UnityEngine::Vector4 Field_4_4; // 0x48
	::UnityEngine::Vector4 Field_4_0; // 0x58
	::System::Boolean Field_4_15; // 0x68
	::System::Boolean Field_4_19; // 0x69
	::System::Boolean Field_4_11; // 0x6A
	::System::Boolean Field_4_7; // 0x6B
	::Class_4_7F119228545D1CC8_Struct_2_52AD02145F5FCE36_2 Field_4_2; // 0x6C
	::System::Boolean Field_4_13; // 0xCC
	::System::Boolean Field_4_1; // 0xCD
	::System::Single Field_4_10; // 0xD0
	::UnityEngine::Vector4 Field_4_6; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_F3D7D2AD64A5C158(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_7F119228545D1CC8_METHOD_4_F3D7D2AD64A5C158_OFFSET))(this, a1);
	}
};
