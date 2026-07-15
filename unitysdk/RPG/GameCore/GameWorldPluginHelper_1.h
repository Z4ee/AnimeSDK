#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameWorldPluginHelper_1_TypeDefinitionIndex = 55265;

	template <typename T>
	class GameWorldPluginHelper_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Index()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GameWorldPluginHelper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
