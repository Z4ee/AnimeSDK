#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline::Discussion { class CameraCompositionClip; }
namespace System { class String; }

#define CLASS_2_D9DF9769339B42FD_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x14B13330)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x14B13950)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x14B133E0)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_36E2D900C7A8E114_OFFSET UNITYSDK_OFFSET(0x14B13690)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_4DF9D318A497852F_OFFSET UNITYSDK_OFFSET(0x14B14150)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x14B13D10)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_B681CCB7CA0E61C0_OFFSET UNITYSDK_OFFSET(0x14B138A0)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x14B13E00)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_F9874C6724708020_OFFSET UNITYSDK_OFFSET(0x14B13A50)
#define CLASS_2_D9DF9769339B42FD_METHOD_2_FBA8E46F0579D68C_OFFSET UNITYSDK_OFFSET(0x14B13FA0)
#define CLASS_2_D9DF9769339B42FD_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14B13350)
#define CLASS_2_D9DF9769339B42FD_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x14B13340)
#define CLASS_2_D9DF9769339B42FD__CTOR_OFFSET UNITYSDK_OFFSET(0x14B143C0)

inline static constexpr unsigned int Class_2_D9DF9769339B42FD_TypeDefinitionIndex = 46993;

class Class_2_D9DF9769339B42FD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::Discussion::CameraCompositionClip* _Clip_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Discussion::CameraCompositionClip* get_Clip()
	{
		return ((::RPGTools::Timeline::Discussion::CameraCompositionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_GET_CLIP_OFFSET))(this);
	}

	::System::Void set_Clip(::RPGTools::Timeline::Discussion::CameraCompositionClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Discussion::CameraCompositionClip*))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_SET_CLIP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_B681CCB7CA0E61C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_B681CCB7CA0E61C0_OFFSET))(this);
	}

	::System::Void Method_2_F9874C6724708020(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_F9874C6724708020_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FBA8E46F0579D68C(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_FBA8E46F0579D68C_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_2_4DF9D318A497852F(::Cinemachine::CinemachineBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_4DF9D318A497852F_OFFSET))(this, a1);
	}

	::System::Void Method_2_36E2D900C7A8E114()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_36E2D900C7A8E114_OFFSET))(this);
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9DF9769339B42FD_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}
};
