#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int GameService_Cache_1_TypeDefinitionIndex = 9023;

	template <typename T>
	class GameService_Cache_1 : public ::System::Object
	{
	public:
		static T* StaticGet_Instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(GameService_Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
