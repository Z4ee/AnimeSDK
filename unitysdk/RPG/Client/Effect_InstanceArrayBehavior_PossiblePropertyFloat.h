#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_InstanceArrayBehavior_PossibleSampler.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYFLOAT_GET_RANDOMVALUE_OFFSET UNITYSDK_OFFSET(0xCDEB700)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYFLOAT_METHOD_1_6CC538194602C49B_OFFSET UNITYSDK_OFFSET(0xCDEB180)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0xCDEB790)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_PossiblePropertyFloat_TypeDefinitionIndex = 70578;

	class Effect_InstanceArrayBehavior_PossiblePropertyFloat : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::Single>* possibleValues; // 0x18
		::RPG::Client::Effect_InstanceArrayBehavior_PossibleSampler sampler; // 0x20
		::System::Int32 repeat; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single get_randomValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYFLOAT_GET_RANDOMVALUE_OFFSET))(this);
		}

		::System::Single Method_1_6CC538194602C49B(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_POSSIBLEPROPERTYFLOAT_METHOD_1_6CC538194602C49B_OFFSET))(this, a1, a2);
		}
	};
}
