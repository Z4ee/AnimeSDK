#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_196;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x1386BF70)
#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x1386BF80)
#define MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1386BF90)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRechargeContext_TypeDefinitionIndex = 75881;

	class ShoppingMallRechargeContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>* _Goods_k__BackingField; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>* goods)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT__CTOR_OFFSET))(this, goods);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECHARGECONTEXT_SET_GOODS_OFFSET))(this, value);
		}
	};
}
