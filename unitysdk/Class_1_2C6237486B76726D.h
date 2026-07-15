#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define CLASS_1_2C6237486B76726D_FADEIN_OFFSET UNITYSDK_OFFSET(0x14CE04C0)
#define CLASS_1_2C6237486B76726D_FULLSHOW_OFFSET UNITYSDK_OFFSET(0x14CE03D0)
#define CLASS_1_2C6237486B76726D_GET_ISALWAYSSHOW_OFFSET UNITYSDK_OFFSET(0x14CE0100)
#define CLASS_1_2C6237486B76726D_GET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0x14CE0120)
#define CLASS_1_2C6237486B76726D_GET_STATE_OFFSET UNITYSDK_OFFSET(0x14CE0140)
#define CLASS_1_2C6237486B76726D_HIDE_OFFSET UNITYSDK_OFFSET(0x14CE05B0)
#define CLASS_1_2C6237486B76726D_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x14CE0360)
#define CLASS_1_2C6237486B76726D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14CE00A0)
#define CLASS_1_2C6237486B76726D_METHOD_1_2583977A3C6FF293_OFFSET UNITYSDK_OFFSET(0x14CE06F0)
#define CLASS_1_2C6237486B76726D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14CE0760)
#define CLASS_1_2C6237486B76726D_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x14CE01F0)
#define CLASS_1_2C6237486B76726D_METHOD_1_889EB4D0B8EFDECE_OFFSET UNITYSDK_OFFSET(0x14CE0160)
#define CLASS_1_2C6237486B76726D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14CE06A0)
#define CLASS_1_2C6237486B76726D_SET_ISALWAYSSHOW_OFFSET UNITYSDK_OFFSET(0x14CE0110)
#define CLASS_1_2C6237486B76726D_SET_ISAUTOFADEIN_OFFSET UNITYSDK_OFFSET(0x14CE0130)
#define CLASS_1_2C6237486B76726D_SET_STATE_OFFSET UNITYSDK_OFFSET(0x14CE0150)
#define CLASS_1_2C6237486B76726D__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE07B0)

inline static constexpr unsigned int Class_1_2C6237486B76726D_TypeDefinitionIndex = 69109;

class Class_1_2C6237486B76726D : public ::System::Object
{
public:
	::UnityEngine::AnimationClip* Field_1_0; // 0x10
	::UnityEngine::AnimationClip* Field_1_1; // 0x18
	::UnityEngine::AnimationClip* Field_1_2; // 0x20
	::UnityEngine::Animation* Field_1_3; // 0x28
	::System::Boolean _IsAutoFadeIn_k__BackingField; // 0x30
	::System::Boolean _IsAlwaysShow_k__BackingField; // 0x31
	::RPG::Client::BookletFadeInState _State_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsAlwaysShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_GET_ISALWAYSSHOW_OFFSET))(this);
	}

	::System::Void set_IsAlwaysShow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_SET_ISALWAYSSHOW_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAutoFadeIn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_GET_ISAUTOFADEIN_OFFSET))(this);
	}

	::System::Void set_IsAutoFadeIn(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_SET_ISAUTOFADEIN_OFFSET))(this, a1);
	}

	::RPG::Client::BookletFadeInState get_State()
	{
		return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::BookletFadeInState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletFadeInState))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_SET_STATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_889EB4D0B8EFDECE(::UnityEngine::Animation* a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_METHOD_1_889EB4D0B8EFDECE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void FadeIn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_FADEIN_OFFSET))(this);
	}

	::System::Void Hide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_HIDE_OFFSET))(this);
	}

	::System::Void FullShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_FULLSHOW_OFFSET))(this);
	}

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_METHOD_1_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_1_2583977A3C6FF293(::UnityEngine::AnimationClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_METHOD_1_2583977A3C6FF293_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6237486B76726D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
