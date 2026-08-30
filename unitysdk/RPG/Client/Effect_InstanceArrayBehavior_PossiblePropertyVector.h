#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_InstanceArrayBehavior_PossibleSampler.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYVECTOR_GET_RANDOMVALUE_OFFSET UNITYSDK_OFFSET(0x15E6C8A0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYVECTOR_METHOD_1_E5F22A66D9BCBA01_OFFSET UNITYSDK_OFFSET(0x15E6C2E0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6C940)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_PossiblePropertyVector_TypeDefinitionIndex = 70579;

	class Effect_InstanceArrayBehavior_PossiblePropertyVector : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* possibleValues; // 0x18
		::RPG::Client::Effect_InstanceArrayBehavior_PossibleSampler sampler; // 0x20
		::System::Int32 repeat; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYVECTOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_randomValue()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYVECTOR_GET_RANDOMVALUE_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_1_E5F22A66D9BCBA01(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYVECTOR_METHOD_1_E5F22A66D9BCBA01_OFFSET))(this, a1, a2);
		}
	};
}
