#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraBackgroundData.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_E3C0F091037CDE77;
namespace System { class Object; }

#define CLASS_2_3A764147BD83EE66_METHOD_2_60FC52B23FE5FEE4_OFFSET UNITYSDK_OFFSET(0x186D6590)
#define CLASS_2_3A764147BD83EE66_METHOD_2_62CC535765AA6B6D_OFFSET UNITYSDK_OFFSET(0x186D5B90)
#define CLASS_2_3A764147BD83EE66_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x186D58F0)
#define CLASS_2_3A764147BD83EE66_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x186D5A50)
#define CLASS_2_3A764147BD83EE66__CTOR_OFFSET UNITYSDK_OFFSET(0x186D6CA0)

inline static constexpr unsigned int Class_2_3A764147BD83EE66_TypeDefinitionIndex = 46110;

class Class_2_3A764147BD83EE66 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::CRPCameraBackgroundData Field_2_0; // 0x10
	::RPGTools::Timeline::CRPCameraBackgroundData Field_2_1; // 0x50
	::Class_1_E3C0F091037CDE77* Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A764147BD83EE66__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3A764147BD83EE66_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3A764147BD83EE66_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_62CC535765AA6B6D(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3A764147BD83EE66_METHOD_2_62CC535765AA6B6D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_60FC52B23FE5FEE4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3A764147BD83EE66_METHOD_2_60FC52B23FE5FEE4_OFFSET))(this, a1, a2, a3);
	}
};
