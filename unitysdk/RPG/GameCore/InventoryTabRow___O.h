#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventoryTabRow___O_TypeDefinitionIndex = 12639;

	class InventoryTabRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ItemSubType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::ItemSubType>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabRow___O_TypeDefinitionIndex)->GetStaticField(0x24310);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::InventorySortType>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::InventorySortType>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabRow___O_TypeDefinitionIndex)->GetStaticField(0x24318);
		}
	};
}
