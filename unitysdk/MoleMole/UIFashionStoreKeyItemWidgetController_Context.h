#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_720FD421F092FF93_Class_2_00BB15F82D0C5B51;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_GET_FASHIONSTOREKEYDATA_OFFSET UNITYSDK_OFFSET(0x18AB6340)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_SET_FASHIONSTOREKEYDATA_OFFSET UNITYSDK_OFFSET(0x18AB6350)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB6360)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyItemWidgetController_Context_TypeDefinitionIndex = 42716;

	class UIFashionStoreKeyItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnClick; // 0x28
		::Class_2_720FD421F092FF93_Class_2_00BB15F82D0C5B51* _FashionStoreKeyData_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::Class_2_720FD421F092FF93_Class_2_00BB15F82D0C5B51* get_FashionStoreKeyData()
		{
			return ((::Class_2_720FD421F092FF93_Class_2_00BB15F82D0C5B51*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_GET_FASHIONSTOREKEYDATA_OFFSET))(this);
		}

		::System::Void set_FashionStoreKeyData(::Class_2_720FD421F092FF93_Class_2_00BB15F82D0C5B51* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_2_00BB15F82D0C5B51*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_SET_FASHIONSTOREKEYDATA_OFFSET))(this, value);
		}
	};
}
