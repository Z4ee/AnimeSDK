#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class HoyoTag; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagIndexer_1_TypeDefinitionIndex = 53303;

	template <typename T>
	class PropTagIndexer_1 : public ::System::Object
	{
	public:
		static ::RPG::GameCore::HoyoTag** StaticGet_Tag()
		{
			return (::RPG::GameCore::HoyoTag**)Il2CppClass::FromTypeDefinitionIndex(PropTagIndexer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
