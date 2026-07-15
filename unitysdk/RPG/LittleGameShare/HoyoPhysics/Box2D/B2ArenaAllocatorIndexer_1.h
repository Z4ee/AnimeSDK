#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArenaAllocatorIndexer_1_TypeDefinitionIndex = 35026;

	template <typename T>
	class B2ArenaAllocatorIndexer_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Index()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B2ArenaAllocatorIndexer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
