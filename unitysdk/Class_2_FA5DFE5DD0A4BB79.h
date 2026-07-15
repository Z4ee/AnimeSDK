#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FA5DFE5DD0A4BB79_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x18B92160)
#define CLASS_2_FA5DFE5DD0A4BB79_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x18B92180)
#define CLASS_2_FA5DFE5DD0A4BB79_METHOD_2_374E3843A05908D4_OFFSET UNITYSDK_OFFSET(0x18B92240)
#define CLASS_2_FA5DFE5DD0A4BB79_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18B921A0)
#define CLASS_2_FA5DFE5DD0A4BB79_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x18B923B0)
#define CLASS_2_FA5DFE5DD0A4BB79_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18B92450)
#define CLASS_2_FA5DFE5DD0A4BB79_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x18B92170)
#define CLASS_2_FA5DFE5DD0A4BB79_SET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x18B92190)
#define CLASS_2_FA5DFE5DD0A4BB79__CTOR_OFFSET UNITYSDK_OFFSET(0x18B92530)

inline static constexpr unsigned int Class_2_FA5DFE5DD0A4BB79_TypeDefinitionIndex = 47044;

class Class_2_FA5DFE5DD0A4BB79 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* _EventName_k__BackingField; // 0x10
	::System::Double Field_2_1; // 0x18
	::System::Boolean _IsLoop_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79__CTOR_OFFSET))(this);
	}

	::System::String* get_EventName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_GET_EVENTNAME_OFFSET))(this);
	}

	::System::Void set_EventName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_SET_EVENTNAME_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLoop()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_GET_ISLOOP_OFFSET))(this);
	}

	::System::Void set_IsLoop(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_SET_ISLOOP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_374E3843A05908D4(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_FA5DFE5DD0A4BB79_METHOD_2_374E3843A05908D4_OFFSET))(this, a1);
	}
};
