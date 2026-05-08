#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_60C8FB52ACCBBF05_Class_0_16E7307DCC43CB2C_23;
namespace System { class Object; }

#define CLASS_2_60C8FB52ACCBBF05_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x13095380)
#define CLASS_2_60C8FB52ACCBBF05_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13095360)
#define CLASS_2_60C8FB52ACCBBF05_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x13095370)
#define CLASS_2_60C8FB52ACCBBF05_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x130951A0)
#define CLASS_2_60C8FB52ACCBBF05_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x13095230)
#define CLASS_2_60C8FB52ACCBBF05_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13094BD0)
#define CLASS_2_60C8FB52ACCBBF05__CTOR_OFFSET UNITYSDK_OFFSET(0x13095350)

inline static constexpr unsigned int Class_2_60C8FB52ACCBBF05_TypeDefinitionIndex = 51467;

class Class_2_60C8FB52ACCBBF05 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_60C8FB52ACCBBF05_Class_0_16E7307DCC43CB2C_23* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
	}
};
