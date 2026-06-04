#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComposeItemMaterial; }

#define RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB704B60)
#define RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0___MERGEMATERIALLISTKIND_B__0_OFFSET UNITYSDK_OFFSET(0xB7054F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemData___c__DisplayClass83_0_TypeDefinitionIndex = 61475;

	class ComposeItemData___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::RPG::Client::ComposeItemMaterial* composeItemMat; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __MergeMaterialListKind_b__0(::RPG::Client::ComposeItemMaterial* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ComposeItemMaterial*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0___MERGEMATERIALLISTKIND_B__0_OFFSET))(this, a1);
		}
	};
}
