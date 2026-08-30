#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class EffectProgressConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int DynamicProgressEffect___O_TypeDefinitionIndex = 75881;

	class DynamicProgressEffect___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::EffectProgressConfig*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::EffectProgressConfig*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicProgressEffect___O_TypeDefinitionIndex)->GetStaticField(0x2CBF0);
		}
	};
}
