#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_C8489A0F22314D2F;
class Class_1_F71F7FB55BBEB1D9;

#define MOLEMOLE_UIGROCERYCHILDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x157B0850)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildContext_TypeDefinitionIndex = 40574;

	class UIGroceryChildContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F71F7FB55BBEB1D9* StoreData; // 0x28
		::Class_1_C8489A0F22314D2F* ShopEntity; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
