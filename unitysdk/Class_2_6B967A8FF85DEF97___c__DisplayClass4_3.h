#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_6B967A8FF85DEF97___C__DISPLAYCLASS4_3__CTOR_OFFSET UNITYSDK_OFFSET(0xAC099C0)
#define CLASS_2_6B967A8FF85DEF97___C__DISPLAYCLASS4_3__ONTASKBEGIN_B__3_OFFSET UNITYSDK_OFFSET(0xAC0FE60)

inline static constexpr unsigned int Class_2_6B967A8FF85DEF97___c__DisplayClass4_3_TypeDefinitionIndex = 52637;

class Class_2_6B967A8FF85DEF97___c__DisplayClass4_3 : public ::System::Object
{
public:
	::UnityEngine::GameObject* pOwnerGo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97___C__DISPLAYCLASS4_3__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97___C__DISPLAYCLASS4_3__ONTASKBEGIN_B__3_OFFSET))(this, a1, a2);
	}
};
