#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EStateParamModifyTime.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAM_METHOD_1_6553931566A72DFA_OFFSET UNITYSDK_OFFSET(0xC9252B0)
#define RPG_CLIENT_STATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC9254E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParam_TypeDefinitionIndex = 64391;

	class StateParam : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::RPG::GameCore::AnimatorParameterType type; // 0x18
		::System::Boolean SetRandom; // 0x1C
		::UnityEngine::Vector2 RandomRange; // 0x20
		::System::Single floatValue; // 0x28
		::System::Int32 intValue; // 0x2C
		::System::Boolean boolValue; // 0x30
		::System::Boolean triggerValue; // 0x31
		::RPG::Client::EStateParamModifyTime modifyTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6553931566A72DFA(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAM_METHOD_1_6553931566A72DFA_OFFSET))(this, a1);
		}
	};
}
