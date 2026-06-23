#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_65ED4D97139F5277_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12E3B8C0)
#define CLASS_2_65ED4D97139F5277_METHOD_2_ABA559D2FF72D7C6_OFFSET UNITYSDK_OFFSET(0x12E3B460)
#define CLASS_2_65ED4D97139F5277_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x12E3B8B0)
#define CLASS_2_65ED4D97139F5277_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12E3B6E0)
#define CLASS_2_65ED4D97139F5277_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12E39D00)
#define CLASS_2_65ED4D97139F5277__CTOR_OFFSET UNITYSDK_OFFSET(0x12E3B8A0)

inline static constexpr unsigned int Class_2_65ED4D97139F5277_TypeDefinitionIndex = 63458;

class Class_2_65ED4D97139F5277 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0x10
	::UnityEngine::Transform* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::UnityEngine::Vector3 Field_2_4; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x34
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65ED4D97139F5277__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65ED4D97139F5277_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_65ED4D97139F5277_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65ED4D97139F5277_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_65ED4D97139F5277_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABA559D2FF72D7C6(::Cinemachine::CinemachineComposer* a1, ::Cinemachine::CinemachineTransposer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineComposer*, ::Cinemachine::CinemachineTransposer*))((::PBYTE)hIl2Cpp + CLASS_2_65ED4D97139F5277_METHOD_2_ABA559D2FF72D7C6_OFFSET))(this, a1, a2);
	}
};
