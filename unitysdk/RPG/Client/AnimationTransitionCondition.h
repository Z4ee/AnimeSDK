#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RuntimeAnimatorConditionMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ANIMATIONTRANSITIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B13C20)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationTransitionCondition_TypeDefinitionIndex = 65758;

	class AnimationTransitionCondition : public ::System::Object
	{
	public:
		::System::String* ParameterName; // 0x10
		::System::Int32 ParameterHash; // 0x18
		::UnityEngine::AnimatorControllerParameterType ParameterType; // 0x1C
		::RPG::Client::RuntimeAnimatorConditionMode Comparison; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RuntimeAnimatorConditionMode>* ComparisonOptions; // 0x28
		::System::Single FloatValue; // 0x30
		::System::Int32 IntValue; // 0x34
		::System::Boolean BoolValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONTRANSITIONCONDITION__CTOR_OFFSET))(this);
		}
	};
}
