#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_002C218A1D4CE93A_Class_3_50D343C44D28BEFB_4;
namespace MoleMole::Cameras { class AnimationVirtualCamera; }
namespace System { class Object; }

#define CLASS_2_002C218A1D4CE93A_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x11A9F220)
#define CLASS_2_002C218A1D4CE93A_METHOD_2_54D69E1733B1C161_OFFSET UNITYSDK_OFFSET(0x11A9F0D0)
#define CLASS_2_002C218A1D4CE93A_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x11A9F200)
#define CLASS_2_002C218A1D4CE93A_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x11A9F210)
#define CLASS_2_002C218A1D4CE93A_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11A9DD60)
#define CLASS_2_002C218A1D4CE93A_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x11A9DDB0)
#define CLASS_2_002C218A1D4CE93A_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11A9DE30)
#define CLASS_2_002C218A1D4CE93A__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9F1F0)

inline static constexpr unsigned int Class_2_002C218A1D4CE93A_TypeDefinitionIndex = 42147;

class Class_2_002C218A1D4CE93A : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::Class_2_002C218A1D4CE93A_Class_3_50D343C44D28BEFB_4** StaticGet_Field_2_0()
	{
		return (::Class_2_002C218A1D4CE93A_Class_3_50D343C44D28BEFB_4**)Il2CppClass::FromTypeDefinitionIndex(Class_2_002C218A1D4CE93A_TypeDefinitionIndex)->GetStaticField(0x4AD00);
	}
	::MoleMole::Cameras::AnimationVirtualCamera* Field_2_1; // 0x10
	::System::Boolean Field_2_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_PREPAREFRAME_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_54D69E1733B1C161(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_METHOD_2_54D69E1733B1C161_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_002C218A1D4CE93A_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
