#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_CLEAREVENT_OFFSET UNITYSDK_OFFSET(0xD8ACC40)
#define RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xD8ACB10)
#define RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_STARTROTATE_OFFSET UNITYSDK_OFFSET(0xD8ACCA0)
#define RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD8ACA20)
#define RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD8ACF50)
#define RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER__ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xD8ACEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyRandomEventDiceController_TypeDefinitionIndex = 72763;

	class MonopolyRandomEventDiceController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* MonopolyRotationList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* RotateRoot; // 0x20
		::RPG::Client::RPGAnimationEvent* RPGAnimEvent; // 0x28
		::UnityEngine::Animation* RootAnimation; // 0x30
		::UnityEngine::AnimationClip* MonopolyDiceRotateAnimationClip; // 0x38
		::System::Action* _AnimFinishCallback; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_START_OFFSET))(this);
		}

		::System::Void Init(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void ClearEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_CLEAREVENT_OFFSET))(this);
		}

		::System::Void StartRotate(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER_STARTROTATE_OFFSET))(this, a1);
		}

		::System::Void _OnRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMEVENTDICECONTROLLER__ONROTATEFINISH_OFFSET))(this);
		}
	};
}
