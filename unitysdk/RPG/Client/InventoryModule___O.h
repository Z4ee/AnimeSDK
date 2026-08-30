#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemComefromRow; }
namespace System { template <typename T> class Func_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___O_TypeDefinitionIndex = 65750;

	class InventoryModule___O : public ::System::Object
	{
	public:
		static ::System::Func_1<::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>>** StaticGet__0___GetEnumerator()
		{
			return (::System::Func_1<::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromRow*>>**)Il2CppClass::FromTypeDefinitionIndex(InventoryModule___O_TypeDefinitionIndex)->GetStaticField(0x5BC80);
		}
	};
}
