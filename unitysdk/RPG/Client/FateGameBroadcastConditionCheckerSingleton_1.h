#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameBroadcastConditionCheckerSingleton_1_TypeDefinitionIndex = 61075;

	template <typename T>
	class FateGameBroadcastConditionCheckerSingleton_1 : public ::System::Object
	{
	public:
		static T* StaticGet__Instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(FateGameBroadcastConditionCheckerSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
