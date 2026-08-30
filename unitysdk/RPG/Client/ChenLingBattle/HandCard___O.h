#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Condition; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int HandCard___O_TypeDefinitionIndex = 75887;

	class HandCard___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Condition*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Condition*>**)Il2CppClass::FromTypeDefinitionIndex(HandCard___O_TypeDefinitionIndex)->GetStaticField(0x336A0);
		}
	};
}
