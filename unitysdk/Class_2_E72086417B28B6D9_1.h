#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x15C7ABA0)
#define CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x15C7ABC0)
#define CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_3_OFFSET UNITYSDK_OFFSET(0x15C7ABD0)
#define CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15C7AB90)
#define CLASS_2_E72086417B28B6D9_1_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x15C7AB80)
#define CLASS_2_E72086417B28B6D9_1_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x15C7AB70)
#define CLASS_2_E72086417B28B6D9_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15C7ABE0)
#define CLASS_2_E72086417B28B6D9_1_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15C7ABB0)
#define CLASS_2_E72086417B28B6D9_1_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15C7A100)
#define CLASS_2_E72086417B28B6D9_1_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x15C79FC0)
#define CLASS_2_E72086417B28B6D9_1_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15C7A010)
#define CLASS_2_E72086417B28B6D9_1_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x15C7A060)
#define CLASS_2_E72086417B28B6D9_1_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15C7A0B0)
#define CLASS_2_E72086417B28B6D9_1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15C7A430)
#define CLASS_2_E72086417B28B6D9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C7AB60)

inline static constexpr unsigned int Class_2_E72086417B28B6D9_1_TypeDefinitionIndex = 64810;

class Class_2_E72086417B28B6D9_1 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_3(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_324AEE341AAA7A1B_3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
