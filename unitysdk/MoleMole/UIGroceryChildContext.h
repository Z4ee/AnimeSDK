#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_29B277056E3DA58E;
class Class_1_F71F7FB55BBEB1D9;

#define MOLEMOLE_UIGROCERYCHILDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186CEDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildContext_TypeDefinitionIndex = 80426;

	class UIGroceryChildContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_29B277056E3DA58E* ShopEntity; // 0x28
		::Class_1_F71F7FB55BBEB1D9* StoreData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
