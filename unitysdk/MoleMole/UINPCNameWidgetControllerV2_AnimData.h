#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CD6915EC12D64B9;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174ECC30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x174EC800)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_PLAY_OFFSET UNITYSDK_OFFSET(0x174EC930)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEANIMATION_OFFSET UNITYSDK_OFFSET(0x174ECA30)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEIN_OFFSET UNITYSDK_OFFSET(0x174ECA90)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SAMPLETOFADEOUT_OFFSET UNITYSDK_OFFSET(0x174ECB60)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SETANIMNAME_OFFSET UNITYSDK_OFFSET(0x174EC8D0)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x174EC810)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2_ANIMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174EC820)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2_AnimData_TypeDefinitionIndex = 43128;

	class UINPCNameWidgetControllerV2_AnimData : public ::System::Object
	{
	public:
		::System::String* _fadeInAnim; // 0x10
		::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x18
		::System::String* _fadeOutAnim; // 0x20
		::Class_1_2CD6915EC12D64B9* _animResetHelper; // 0x28
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
