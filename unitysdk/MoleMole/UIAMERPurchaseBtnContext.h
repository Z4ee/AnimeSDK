#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_179;

#define MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x197A5AC0)
#define MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x197A5AD0)
#define MOLEMOLE_UIAMERPURCHASEBTNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197A5AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAMERPurchaseBtnContext_TypeDefinitionIndex = 72051;

	class UIAMERPurchaseBtnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_179* _GoodsData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNCONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_179* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_179*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_179* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_179*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEBTNCONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
