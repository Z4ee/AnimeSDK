#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_201;

#define MOLEMOLE_GIFTPACKITEMICONCONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x1A034280)
#define MOLEMOLE_GIFTPACKITEMICONCONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x1A034290)
#define MOLEMOLE_GIFTPACKITEMICONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0342A0)

namespace MoleMole
{
	inline static constexpr unsigned int GiftPackItemIconContext_TypeDefinitionIndex = 87161;

	class GiftPackItemIconContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_201* _GoodsData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GIFTPACKITEMICONCONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_201* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_201*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GIFTPACKITEMICONCONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_201* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + MOLEMOLE_GIFTPACKITEMICONCONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
