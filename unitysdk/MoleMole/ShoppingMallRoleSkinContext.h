#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_201;

#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x141A5170)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x141A5180)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x141A5190)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRoleSkinContext_TypeDefinitionIndex = 51786;

	class ShoppingMallRoleSkinContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_201* _Goods_k__BackingField; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_201* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET))(this, goods);
		}

		::Class_0_16E4307DCC419505_201* get_Goods()
		{
			return ((::Class_0_16E4307DCC419505_201*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::Class_0_16E4307DCC419505_201* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET))(this, value);
		}
	};
}
