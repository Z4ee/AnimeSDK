#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_STATEPARAMTRANSITION_DURATION__CTOR_OFFSET UNITYSDK_OFFSET(0xB1CCF10)

namespace RPG::Client
{
	inline static constexpr unsigned int StateParamTransition_Duration_TypeDefinitionIndex = 63476;

	class StateParamTransition_Duration : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Single duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATEPARAMTRANSITION_DURATION__CTOR_OFFSET))(this);
		}
	};
}
