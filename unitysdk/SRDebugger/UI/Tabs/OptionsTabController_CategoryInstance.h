#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Controls { class OptionsControlBase; }
namespace SRDebugger::UI::Other { class CategoryGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CATEGORYINSTANCE_GET_CATEGORYGROUP_OFFSET UNITYSDK_OFFSET(0x1AD172E0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CATEGORYINSTANCE_SET_CATEGORYGROUP_OFFSET UNITYSDK_OFFSET(0x1AD172F0)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CATEGORYINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD15930)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int OptionsTabController_CategoryInstance_TypeDefinitionIndex = 35657;

	class OptionsTabController_CategoryInstance : public ::System::Object
	{
	public:
		::SRDebugger::UI::Other::CategoryGroup* _CategoryGroup_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::OptionsControlBase*>* Options; // 0x18

		::System::Void _ctor(::SRDebugger::UI::Other::CategoryGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::CategoryGroup*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CATEGORYINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::SRDebugger::UI::Other::CategoryGroup* get_CategoryGroup()
		{
			return ((::SRDebugger::UI::Other::CategoryGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CATEGORYINSTANCE_GET_CATEGORYGROUP_OFFSET))(this);
		}

		::System::Void set_CategoryGroup(::SRDebugger::UI::Other::CategoryGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Other::CategoryGroup*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER_CATEGORYINSTANCE_SET_CATEGORYGROUP_OFFSET))(this, a1);
		}
	};
}
