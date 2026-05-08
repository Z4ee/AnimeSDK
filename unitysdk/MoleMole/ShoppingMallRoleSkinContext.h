#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_196;

#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x12FAFD30)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x12FAFD40)
#define MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FAFD50)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRoleSkinContext_TypeDefinitionIndex = 39861;

	class ShoppingMallRoleSkinContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_196* _Goods_k__BackingField; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_196* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_196*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT__CTOR_OFFSET))(this, goods);
		}

		::Class_0_16E4307DCC419505_196* get_Goods()
		{
			return ((::Class_0_16E4307DCC419505_196*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::Class_0_16E4307DCC419505_196* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_196*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLROLESKINCONTEXT_SET_GOODS_OFFSET))(this, value);
		}
	};
}
