#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CD6915EC12D64B9;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17463870)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17463440)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_PLAY_OFFSET UNITYSDK_OFFSET(0x17463570)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEANIMATION_OFFSET UNITYSDK_OFFSET(0x17463670)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEIN_OFFSET UNITYSDK_OFFSET(0x174636D0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEOUT_OFFSET UNITYSDK_OFFSET(0x174637A0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SETANIMNAME_OFFSET UNITYSDK_OFFSET(0x17463510)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17463450)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17463460)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2_AnimData_TypeDefinitionIndex = 71002;

	class UINPCNameWidgetControllerV2_AnimData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x10
		::Class_1_2CD6915EC12D64B9* _animResetHelper; // 0x18
		::System::String* _fadeInAnim; // 0x20
		::System::String* _fadeOutAnim; // 0x28
		::System::Int32 _animFadeState; // 0x30

		::System::Void _ctor(::UnityEngine::GameObject* gameObject, ::UnityEngine::Animation* animation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA__CTOR_OFFSET))(this, gameObject, animation);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_GameObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SET_GAMEOBJECT_OFFSET))(this, value);
		}

		::MoleMole::UINPCNameWidgetControllerV2_AnimData* SetAnimName(::System::String* fadeInAnim, ::System::String* fadeOutAnim)
		{
			return ((::MoleMole::UINPCNameWidgetControllerV2_AnimData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SETANIMNAME_OFFSET))(this, fadeInAnim, fadeOutAnim);
		}

		::System::Void Play(::System::Boolean isFadeIn, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_PLAY_OFFSET))(this, isFadeIn, callback);
		}

		::System::Void SampleToFadeAnimation(::System::Boolean isFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEANIMATION_OFFSET))(this, isFadeIn);
		}

		::System::Void SampleToFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEIN_OFFSET))(this);
		}

		::System::Void SampleToFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEOUT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_DISPOSE_OFFSET))(this);
		}
	};
}
