#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatShopGoodData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatShopData___O_TypeDefinitionIndex = 70657;

	class DiceCombatShopData___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>** StaticGet__0___SortShopDataList()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatShopGoodData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatShopData___O_TypeDefinitionIndex)->GetStaticField(0x53D0);
		}
	};
}
