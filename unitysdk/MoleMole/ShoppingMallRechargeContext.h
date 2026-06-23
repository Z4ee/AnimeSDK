#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_201;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x18171980)
#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x18171990)
#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x181719A0)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRechargeContext_TypeDefinitionIndex = 83153;

	class ShoppingMallRechargeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* _Goods_k__BackingField; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* goods)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT__CTOR_OFFSET))(this, goods);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_SET_GOODS_OFFSET))(this, value);
		}
	};
}
