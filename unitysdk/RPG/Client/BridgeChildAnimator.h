#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_BRIDGECHILDANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB5860)

namespace RPG::Client
{
	inline static constexpr unsigned int BridgeChildAnimator_TypeDefinitionIndex = 64787;

	class BridgeChildAnimator : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Animator* animator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BRIDGECHILDANIMATOR__CTOR_OFFSET))(this);
		}
	};
}
