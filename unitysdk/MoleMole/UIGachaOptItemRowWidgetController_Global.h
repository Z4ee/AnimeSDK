#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_GLOBAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D90D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptItemRowWidgetController_Global_TypeDefinitionIndex = 71608;

	class UIGachaOptItemRowWidgetController_Global : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::System::Boolean>* IsFocusedFunc; // 0x10
		::System::Action_1<::System::UInt32>* OnFocus; // 0x18
		::System::Func_1<::System::Boolean>* IsSelectionFullFunc; // 0x20
		::System::Action_1<::System::UInt32>* OnClick; // 0x28
		::System::Func_2<::System::UInt32, ::System::Boolean>* IsOwnedFunc; // 0x30
		::System::Func_2<::System::UInt32, ::Class_1_1EA8435E138F2E03*>* GetItemBadgeNodeFunc; // 0x38
		::System::Func_2<::System::UInt32, ::System::Boolean>* IsSelectedFunc; // 0x40
		::System::Boolean UseEmptyNode; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_GLOBAL__CTOR_OFFSET))(this);
		}
	};
}
