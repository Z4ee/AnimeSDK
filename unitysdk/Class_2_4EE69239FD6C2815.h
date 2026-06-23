#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace XftWeapon { class XWeaponTrail; }

#define CLASS_2_4EE69239FD6C2815_METHOD_2_1E1B49CC73EF18C7_OFFSET UNITYSDK_OFFSET(0x18622430)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18622160)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_3472A1008EA92314_OFFSET UNITYSDK_OFFSET(0x18622170)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x18622490)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x18622140)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_86BFE781AE78BC1E_OFFSET UNITYSDK_OFFSET(0x18622130)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x18621EE0)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x186224A0)
#define CLASS_2_4EE69239FD6C2815_METHOD_2_EF48CD988921348B_OFFSET UNITYSDK_OFFSET(0x18622150)
#define CLASS_2_4EE69239FD6C2815_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x18621D30)
#define CLASS_2_4EE69239FD6C2815_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18621B30)
#define CLASS_2_4EE69239FD6C2815_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x186220C0)
#define CLASS_2_4EE69239FD6C2815_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18621990)
#define CLASS_2_4EE69239FD6C2815__CTOR_OFFSET UNITYSDK_OFFSET(0x18622120)

inline static constexpr unsigned int Class_2_4EE69239FD6C2815_TypeDefinitionIndex = 53706;

class Class_2_4EE69239FD6C2815 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::XftWeapon::XWeaponTrail* Field_2_3; // 0x10
	::UnityEngine::Transform* Field_2_4; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::XftWeapon::XWeaponTrail* Method_2_86BFE781AE78BC1E()
	{
		return ((::XftWeapon::XWeaponTrail*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_86BFE781AE78BC1E_OFFSET))(this);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_2_EF48CD988921348B(::XftWeapon::XWeaponTrail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_EF48CD988921348B_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_4EE69239FD6C2815*> Method_2_3472A1008EA92314(::UnityEngine::Playables::PlayableGraph a1, ::XftWeapon::XWeaponTrail* a2, ::UnityEngine::Transform* a3)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_4EE69239FD6C2815*>(*)(::UnityEngine::Playables::PlayableGraph, ::XftWeapon::XWeaponTrail*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_3472A1008EA92314_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1E1B49CC73EF18C7(::XftWeapon::XWeaponTrail* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4EE69239FD6C2815_METHOD_2_1E1B49CC73EF18C7_OFFSET))(this, a1, a2);
	}
};
