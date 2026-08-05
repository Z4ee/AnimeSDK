#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_A906D58941248999_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xE98C370)
#define CLASS_2_A906D58941248999_METHOD_2_77F05BC64CA063BB_OFFSET UNITYSDK_OFFSET(0xE98A870)
#define CLASS_2_A906D58941248999_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0xE98C380)
#define CLASS_2_A906D58941248999_METHOD_2_8FC0B29C329EF088_OFFSET UNITYSDK_OFFSET(0xE98ADD0)
#define CLASS_2_A906D58941248999_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xE98BEE0)
#define CLASS_2_A906D58941248999_METHOD_2_AD99A8235CAFC77B_OFFSET UNITYSDK_OFFSET(0xE98BBF0)
#define CLASS_2_A906D58941248999_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xE98C360)
#define CLASS_2_A906D58941248999_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE98A540)
#define CLASS_2_A906D58941248999_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE98AC70)
#define CLASS_2_A906D58941248999_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE98B480)
#define CLASS_2_A906D58941248999__CTOR_OFFSET UNITYSDK_OFFSET(0xE98BEA0)

inline static constexpr unsigned int Class_2_A906D58941248999_TypeDefinitionIndex = 72417;

class Class_2_A906D58941248999 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Material* Field_2_16; // 0x10
	::UnityEngine::Color Field_2_7; // 0x18
	::System::Single Field_2_8; // 0x28
	::System::Single Field_2_14; // 0x2C
	::UnityEngine::Color Field_2_5; // 0x30
	::System::Boolean Field_2_1; // 0x40
	::System::Boolean Field_2_17; // 0x41
	::System::Boolean Field_2_4; // 0x42
	::System::Boolean Field_2_19; // 0x43
	::System::Single Field_2_13; // 0x44
	::System::Single Field_2_9; // 0x48
	::UnityEngine::Color Field_2_6; // 0x4C
	::System::Single Field_2_12; // 0x5C
	::System::Single Field_2_10; // 0x60
	::System::Single Field_2_11; // 0x64
	::System::Boolean Field_2_18; // 0x68
	::System::Boolean Field_2_0; // 0x69
	::System::Single Field_2_15; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_AD99A8235CAFC77B(::System::Object* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_METHOD_2_AD99A8235CAFC77B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_77F05BC64CA063BB(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_METHOD_2_77F05BC64CA063BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FC0B29C329EF088(::System::Boolean a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::UnityEngine::Color a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_METHOD_2_8FC0B29C329EF088_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_A906D58941248999_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}
};
