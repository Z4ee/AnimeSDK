#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceRejectionType.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingSource; }
namespace InControl { class PlayerAction; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGADDED_OFFSET UNITYSDK_OFFSET(0x18E7B2B0)
#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGENDED_OFFSET UNITYSDK_OFFSET(0x18E7B300)
#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGFOUND_OFFSET UNITYSDK_OFFSET(0x18E7B290)
#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGREJECTED_OFFSET UNITYSDK_OFFSET(0x18E7B2D0)
#define INCONTROL_BINDINGLISTENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7B320)

namespace InControl
{
	inline static constexpr unsigned int BindingListenOptions_TypeDefinitionIndex = 39495;

	class BindingListenOptions : public ::System::Object
	{
	public:
		::System::Action_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType>* OnBindingRejected; // 0x10
		::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>* OnBindingFound; // 0x18
		::System::Action_2<::InControl::PlayerAction*, ::InControl::BindingSource*>* OnBindingAdded; // 0x20
		::InControl::BindingSource* ReplaceBinding; // 0x28
		::System::Action_1<::InControl::PlayerAction*>* OnBindingEnded; // 0x30
		::System::Boolean IncludeControllers; // 0x38
		::System::Boolean AllowDuplicateBindingsPerSet; // 0x39
		::System::Boolean IncludeMouseButtons; // 0x3A
		::System::Boolean IncludeKeys; // 0x3B
		::System::UInt32 MaxAllowedBindingsPerType; // 0x3C
		::System::Boolean IncludeUnknownControllers; // 0x40
		::System::Boolean RejectRedundantBindings; // 0x41
		::System::Boolean IncludeNonStandardControls; // 0x42
		::System::Boolean IncludeModifiersAsFirstClassKeys; // 0x43
		::System::Boolean IncludeMouseScrollWheel; // 0x44
		::System::Boolean UnsetDuplicateBindingsOnSet; // 0x45
		::System::UInt32 MaxAllowedBindings; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Boolean CallOnBindingFound(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGFOUND_OFFSET))(this, a1, a2);
		}

		::System::Void CallOnBindingAdded(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGADDED_OFFSET))(this, a1, a2);
		}

		::System::Void CallOnBindingRejected(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2, ::InControl::BindingSourceRejectionType a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGREJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CallOnBindingEnded(::InControl::PlayerAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGENDED_OFFSET))(this, a1);
		}
	};
}
