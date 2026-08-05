#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D1604A39D52BB42F_Struct_2_77119E13C3097AA6.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D1604A39D52BB42F_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x122C2AA0)
#define CLASS_2_D1604A39D52BB42F_METHOD_2_4035A062DEE5AC1B_OFFSET UNITYSDK_OFFSET(0x122C2580)
#define CLASS_2_D1604A39D52BB42F_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x122C2AB0)
#define CLASS_2_D1604A39D52BB42F_METHOD_2_EC4DE8D7FA252350_OFFSET UNITYSDK_OFFSET(0x122C2200)
#define CLASS_2_D1604A39D52BB42F_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x122C26B0)
#define CLASS_2_D1604A39D52BB42F_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x122C0BD0)
#define CLASS_2_D1604A39D52BB42F__CTOR_OFFSET UNITYSDK_OFFSET(0x122C2A40)

inline static constexpr unsigned int Class_2_D1604A39D52BB42F_TypeDefinitionIndex = 64494;

class Class_2_D1604A39D52BB42F : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineComposer* Field_2_11; // 0x10
	::System::Collections::Generic::List_1<::Class_2_D1604A39D52BB42F_Struct_2_77119E13C3097AA6>* Field_2_4; // 0x18
	::Cinemachine::CinemachineVirtualCamera* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::Cinemachine::CinemachineTransposer* Field_2_10; // 0x38
	::UnityEngine::Vector3 Field_2_6; // 0x40
	::UnityEngine::Vector3 Field_2_7; // 0x4C
	::System::Boolean Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1604A39D52BB42F__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D1604A39D52BB42F_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_D1604A39D52BB42F_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_D1604A39D52BB42F_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	static ::System::Single Method_2_4035A062DEE5AC1B(::UnityEngine::AnimationCurve* a1, ::System::Double a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_D1604A39D52BB42F_METHOD_2_4035A062DEE5AC1B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_EC4DE8D7FA252350(::Cinemachine::CinemachineComposer* a1, ::Cinemachine::CinemachineTransposer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineComposer*, ::Cinemachine::CinemachineTransposer*))((::PBYTE)hIl2Cpp + CLASS_2_D1604A39D52BB42F_METHOD_2_EC4DE8D7FA252350_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D1604A39D52BB42F_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
