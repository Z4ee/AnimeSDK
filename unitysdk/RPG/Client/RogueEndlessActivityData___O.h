#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessActivityData___O_TypeDefinitionIndex = 50017;

	class RogueEndlessActivityData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__0___IsAreaAvailableReward()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessActivityData___O_TypeDefinitionIndex)->GetStaticField(0x154A0);
		}
	};
}
