#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_201;

#define MOLEMOLE_UIAMERINFOCONTEXT_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x17441DA0)
#define MOLEMOLE_UIAMERINFOCONTEXT_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x17441DB0)
#define MOLEMOLE_UIAMERINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17441DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAmerInfoContext_TypeDefinitionIndex = 41655;

	class UIAmerInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_201* _GoodsData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERINFOCONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_201* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_201*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERINFOCONTEXT_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_201* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERINFOCONTEXT_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
