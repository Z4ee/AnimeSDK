#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RootMotion::FinalIK { class AimIK; }
namespace RootMotion::FinalIK { class LookAtIK; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2DBFBA75DA9207F9_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x156D6AF0)
#define CLASS_2_2DBFBA75DA9207F9_METHOD_2_802B1EDC86F8AC26_OFFSET UNITYSDK_OFFSET(0x156D6620)
#define CLASS_2_2DBFBA75DA9207F9_METHOD_2_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x156D6820)
#define CLASS_2_2DBFBA75DA9207F9_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x156D6AE0)
#define CLASS_2_2DBFBA75DA9207F9_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x156D67C0)
#define CLASS_2_2DBFBA75DA9207F9_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x156D5AF0)
#define CLASS_2_2DBFBA75DA9207F9__CTOR_OFFSET UNITYSDK_OFFSET(0x156D6AD0)

inline static constexpr unsigned int Class_2_2DBFBA75DA9207F9_TypeDefinitionIndex = 57857;

class Class_2_2DBFBA75DA9207F9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x10
	::UnityEngine::Transform* Field_2_4; // 0x18
	::UnityEngine::Animator* Field_2_0; // 0x20
	::RootMotion::FinalIK::AimIK* Field_2_7; // 0x28
	::RootMotion::FinalIK::LookAtIK* Field_2_6; // 0x30
	::System::Boolean Field_2_10; // 0x38
	::System::Boolean Field_2_11; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DBFBA75DA9207F9__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2DBFBA75DA9207F9_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2DBFBA75DA9207F9_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2DBFBA75DA9207F9_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_2DBFBA75DA9207F9_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_802B1EDC86F8AC26(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_2DBFBA75DA9207F9_METHOD_2_802B1EDC86F8AC26_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DBFBA75DA9207F9_METHOD_2_8BC85DADEC2C3862_OFFSET))(this);
	}
};
