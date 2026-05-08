#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }

#define CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x13AE0AD0)
#define CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x13AE0AE0)
#define CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_3_OFFSET UNITYSDK_OFFSET(0x13AE0B10)
#define CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13AE0AC0)
#define CLASS_2_E72086417B28B6D9_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x13AE0B20)
#define CLASS_2_E72086417B28B6D9_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x13AE0AF0)
#define CLASS_2_E72086417B28B6D9_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13AE0AB0)
#define CLASS_2_E72086417B28B6D9_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x13AE0B00)
#define CLASS_2_E72086417B28B6D9_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x13AE0040)
#define CLASS_2_E72086417B28B6D9_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13ADFF00)
#define CLASS_2_E72086417B28B6D9_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x13ADFF50)
#define CLASS_2_E72086417B28B6D9_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x13ADFFA0)
#define CLASS_2_E72086417B28B6D9_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13ADFFF0)
#define CLASS_2_E72086417B28B6D9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13AE0370)
#define CLASS_2_E72086417B28B6D9__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE0AA0)

inline static constexpr unsigned int Class_2_E72086417B28B6D9_TypeDefinitionIndex = 40739;

class Class_2_E72086417B28B6D9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B_3(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_324AEE341AAA7A1B_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_E72086417B28B6D9_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}
};
