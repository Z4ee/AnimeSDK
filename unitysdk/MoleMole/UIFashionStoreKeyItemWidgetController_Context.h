#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_720FD421F092FF93_Class_2_550F633C31EC92A2;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_GET_FASHIONSTOREKEYDATA_OFFSET UNITYSDK_OFFSET(0x16491660)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_SET_FASHIONSTOREKEYDATA_OFFSET UNITYSDK_OFFSET(0x16491670)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16491680)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyItemWidgetController_Context_TypeDefinitionIndex = 60584;

	class UIFashionStoreKeyItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_720FD421F092FF93_Class_2_550F633C31EC92A2* _FashionStoreKeyData_k__BackingField; // 0x28
		::System::Action_1<::System::Int32>* OnClick; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::Class_2_720FD421F092FF93_Class_2_550F633C31EC92A2* get_FashionStoreKeyData()
		{
			return ((::Class_2_720FD421F092FF93_Class_2_550F633C31EC92A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_GET_FASHIONSTOREKEYDATA_OFFSET))(this);
		}

		::System::Void set_FashionStoreKeyData(::Class_2_720FD421F092FF93_Class_2_550F633C31EC92A2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_2_550F633C31EC92A2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_SET_FASHIONSTOREKEYDATA_OFFSET))(this, value);
		}
	};
}
