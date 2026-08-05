#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179BF130)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionRowWidgetControllerContext_TypeDefinitionIndex = 51518;

	class UISearchObjectQuestionRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Text; // 0x28
		::System::Action_2<::System::Int32, ::System::Boolean>* SelectedChangeCallback; // 0x30
		::System::Int32 Index; // 0x38
		::System::Boolean IsSingleOrMultiple; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
