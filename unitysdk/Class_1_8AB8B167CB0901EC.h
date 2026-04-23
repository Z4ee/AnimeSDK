#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define CLASS_1_8AB8B167CB0901EC_FADEIN_OFFSET UNITYSDK_OFFSET(0x11AE5290)
#define CLASS_1_8AB8B167CB0901EC_FULLSHOW_OFFSET UNITYSDK_OFFSET(0x11AE51A0)
#define CLASS_1_8AB8B167CB0901EC_GET_ISALWAYSSHOW_OFFSET UNITYSDK_OFFSET(0x11AE4EE0)
#define CLASS_1_8AB8B167CB0901EC_GET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0x11AE4F00)
#define CLASS_1_8AB8B167CB0901EC_GET_STATE_OFFSET UNITYSDK_OFFSET(0x11AE4F20)
#define CLASS_1_8AB8B167CB0901EC_HIDE_OFFSET UNITYSDK_OFFSET(0x11AE5380)
#define CLASS_1_8AB8B167CB0901EC_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x11AE5130)
#define CLASS_1_8AB8B167CB0901EC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11AE4E80)
#define CLASS_1_8AB8B167CB0901EC_METHOD_1_2583977A3C6FF293_OFFSET UNITYSDK_OFFSET(0x11AE54C0)
#define CLASS_1_8AB8B167CB0901EC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11AE5530)
#define CLASS_1_8AB8B167CB0901EC_METHOD_1_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x11AE4FD0)
#define CLASS_1_8AB8B167CB0901EC_METHOD_1_89E1652B82FB1457_OFFSET UNITYSDK_OFFSET(0x11AE4F40)
#define CLASS_1_8AB8B167CB0901EC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11AE5470)
#define CLASS_1_8AB8B167CB0901EC_SET_ISALWAYSSHOW_OFFSET UNITYSDK_OFFSET(0x11AE4EF0)
#define CLASS_1_8AB8B167CB0901EC_SET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0x11AE4F10)
#define CLASS_1_8AB8B167CB0901EC_SET_STATE_OFFSET UNITYSDK_OFFSET(0x11AE4F30)
#define CLASS_1_8AB8B167CB0901EC__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE5580)

inline static constexpr unsigned int Class_1_8AB8B167CB0901EC_TypeDefinitionIndex = 66685;

class Class_1_8AB8B167CB0901EC : public ::System::Object
{
public:
	::UnityEngine::AnimationClip* Field_1_3; // 0x10
	::UnityEngine::AnimationClip* Field_1_2; // 0x18
	::UnityEngine::AnimationClip* Field_1_1; // 0x20
	::UnityEngine::Animation* Field_1_0; // 0x28
	::RPG::Client::BookletFadeInState _State_k__BackingField; // 0x30
	::System::Boolean _IsAutoFadeIn_k__BackingField; // 0x34
	::System::Boolean _IsAlwaysShow_k__BackingField; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsAlwaysShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_GET_ISALWAYSSHOW_OFFSET))(this);
	}

	::System::Void set_IsAlwaysShow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_SET_ISALWAYSSHOW_OFFSET))(this, value);
	}

	::System::Boolean get_IsAutoFadeIn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_GET_ISAUTOFADEIN_OFFSET))(this);
	}

	::System::Void set_IsAutoFadeIn(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_SET_ISAUTOFADEIN_OFFSET))(this, value);
	}

	::RPG::Client::BookletFadeInState get_State()
	{
		return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::BookletFadeInState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletFadeInState))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_SET_STATE_OFFSET))(this, value);
	}

	::System::Void Method_1_89E1652B82FB1457(::UnityEngine::Animation* a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_METHOD_1_89E1652B82FB1457_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void FadeIn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_FADEIN_OFFSET))(this);
	}

	::System::Void Hide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_HIDE_OFFSET))(this);
	}

	::System::Void FullShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_FULLSHOW_OFFSET))(this);
	}

	::System::Void Method_1_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_METHOD_1_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Method_1_2583977A3C6FF293(::UnityEngine::AnimationClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_METHOD_1_2583977A3C6FF293_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AB8B167CB0901EC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
