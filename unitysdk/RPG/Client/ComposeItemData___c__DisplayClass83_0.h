#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComposeItemMaterial; }

#define RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C5A90)
#define RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0___MERGEMATERIALLISTKIND_B__0_OFFSET UNITYSDK_OFFSET(0xA0C63F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComposeItemData___c__DisplayClass83_0_TypeDefinitionIndex = 60541;

	class ComposeItemData___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::RPG::Client::ComposeItemMaterial* composeItemMat; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __MergeMaterialListKind_b__0(::RPG::Client::ComposeItemMaterial* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ComposeItemMaterial*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPOSEITEMDATA___C__DISPLAYCLASS83_0___MERGEMATERIALLISTKIND_B__0_OFFSET))(this, item);
		}
	};
}
