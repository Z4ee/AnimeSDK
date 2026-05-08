#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/VisibilityTrack_Enum_3_A92A5D49790A47BD.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_9C51BDD302088099_METHOD_2_071951CD5266DF8E_OFFSET UNITYSDK_OFFSET(0xDB45CF0)
#define CLASS_2_9C51BDD302088099_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xDB45DF0)
#define CLASS_2_9C51BDD302088099_METHOD_2_401E99765D1F24DB_OFFSET UNITYSDK_OFFSET(0xDB45DE0)
#define CLASS_2_9C51BDD302088099_METHOD_2_80E810A007593AFA_OFFSET UNITYSDK_OFFSET(0xDB45D00)
#define CLASS_2_9C51BDD302088099_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0xDB45DD0)
#define CLASS_2_9C51BDD302088099_METHOD_2_EAE236FAD8063DC7_OFFSET UNITYSDK_OFFSET(0xDB45730)
#define CLASS_2_9C51BDD302088099_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xDB454E0)
#define CLASS_2_9C51BDD302088099_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xDB45790)
#define CLASS_2_9C51BDD302088099__CTOR_OFFSET UNITYSDK_OFFSET(0xDB45CE0)

inline static constexpr unsigned int Class_2_9C51BDD302088099_TypeDefinitionIndex = 61660;

class Class_2_9C51BDD302088099 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x10
	::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD Field_2_0; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::System::Boolean Field_2_1; // 0x1D
	::System::Boolean Field_2_4; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EAE236FAD8063DC7(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_METHOD_2_EAE236FAD8063DC7_OFFSET))(this, a1, a2);
	}

	::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD Method_2_071951CD5266DF8E()
	{
		return ((::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_METHOD_2_071951CD5266DF8E_OFFSET))(this);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_9C51BDD302088099*> Method_2_80E810A007593AFA(::UnityEngine::Playables::PlayableGraph a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::Class_2_9C51BDD302088099*>(*)(::UnityEngine::Playables::PlayableGraph, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_METHOD_2_80E810A007593AFA_OFFSET))(a1, a2);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_401E99765D1F24DB(::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::VisibilityTrack_Enum_3_A92A5D49790A47BD))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_METHOD_2_401E99765D1F24DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_9C51BDD302088099_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}
};
