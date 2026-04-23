#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatShopData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule___O_TypeDefinitionIndex = 58552;

	class DiceCombatModule___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatShopData*>** StaticGet__0___SortShopList()
		{
			return (::System::Comparison_1<::RPG::Client::DiceCombat::DiceCombatShopData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatModule___O_TypeDefinitionIndex)->GetStaticField(0x65BB0);
		}
	};
}
