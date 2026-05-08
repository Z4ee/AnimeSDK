#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class GameService___c__8_1; }
namespace System { class Action; }

namespace Foundation
{
	inline static constexpr unsigned int GameService___c__8_1_TypeDefinitionIndex = 9024;

	template <typename T>
	class GameService___c__8_1 : public ::System::Object
	{
	public:
		static ::Foundation::GameService___c__8_1<T>** StaticGet___9()
		{
			return (::Foundation::GameService___c__8_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GameService___c__8_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameService___c__8_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
