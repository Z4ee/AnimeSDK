#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYDICECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1A36E6B0)
#define RPG_CLIENT_MONOPOLYDICECONTROLLER_ROTATE_OFFSET UNITYSDK_OFFSET(0x1A36E7E0)
#define RPG_CLIENT_MONOPOLYDICECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1A36E650)
#define RPG_CLIENT_MONOPOLYDICECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36EAA0)
#define RPG_CLIENT_MONOPOLYDICECONTROLLER__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A36EB00)
#define RPG_CLIENT_MONOPOLYDICECONTROLLER__ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x1A36E9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyDiceController_TypeDefinitionIndex = 69530;

	class MonopolyDiceController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* MonopolyRotationList; // 0x18
		::System::Action* AnimFinishCallback; // 0x20
		::UnityEngine::Animator* MonopolyAnimator; // 0x28
		::RPG::Client::RPGAnimationEvent* RPGAnimEvent; // 0x30
		::UnityEngine::Transform* RotateRoot; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDICECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDICECONTROLLER_START_OFFSET))(this);
		}

		::System::Void Init(::System::Action* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDICECONTROLLER_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Rotate(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDICECONTROLLER_ROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDICECONTROLLER__ONROTATEFINISH_OFFSET))(this);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDICECONTROLLER__INIT_B__1_0_OFFSET))(this);
		}
	};
}
