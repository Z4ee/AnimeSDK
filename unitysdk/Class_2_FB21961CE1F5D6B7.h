#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Object; }

#define CLASS_2_FB21961CE1F5D6B7_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1592CD10)
#define CLASS_2_FB21961CE1F5D6B7_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x1592CD30)
#define CLASS_2_FB21961CE1F5D6B7_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1592CD20)
#define CLASS_2_FB21961CE1F5D6B7_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1592C360)
#define CLASS_2_FB21961CE1F5D6B7_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1592C0E0)
#define CLASS_2_FB21961CE1F5D6B7_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1592C3E0)
#define CLASS_2_FB21961CE1F5D6B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1592CCF0)
#define CLASS_2_FB21961CE1F5D6B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1592CCE0)

inline static constexpr unsigned int Class_2_FB21961CE1F5D6B7_TypeDefinitionIndex = 87108;

class Class_2_FB21961CE1F5D6B7 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::UnityEngine::Color* StaticGet_Field_2_1()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB21961CE1F5D6B7_TypeDefinitionIndex)->GetStaticField(0xF1A0);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB21961CE1F5D6B7_TypeDefinitionIndex)->GetStaticField(0xF1B0);
	}
	::MoleMole::UITransitionPanelPopWindowController* Field_2_3; // 0x10
	::System::Boolean Field_2_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7__CCTOR_OFFSET))();
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_FB21961CE1F5D6B7_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
	}
};
