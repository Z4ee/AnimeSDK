#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_179;

#define MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_GET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x1518FCE0)
#define MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_SET_GOODSDATA_OFFSET UNITYSDK_OFFSET(0x1518FCF0)
#define MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1518FD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallSkinRowWidgetController_Data_TypeDefinitionIndex = 40923;

	class UIShoppingMallSkinRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_179* _GoodsData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_179* get_GoodsData()
		{
			return ((::Class_0_16E4307DCC419505_179*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_GET_GOODSDATA_OFFSET))(this);
		}

		::System::Void set_GoodsData(::Class_0_16E4307DCC419505_179* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_179*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINROWWIDGETCONTROLLER_DATA_SET_GOODSDATA_OFFSET))(this, value);
		}
	};
}
