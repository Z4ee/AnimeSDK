#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B611A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleChoiceWidgetControllerContext_TypeDefinitionIndex = 47972;

	class UICampIdleChoiceWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Desc; // 0x28
		::System::Action* OnClickAction; // 0x30
		::System::Boolean IsStoryQA; // 0x38
		::System::Boolean IsCorrectAnswer; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLECHOICEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
