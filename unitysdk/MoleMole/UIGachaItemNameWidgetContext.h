#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGACHAITEMNAMEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F368E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemNameWidgetContext_TypeDefinitionIndex = 83380;

	class UIGachaItemNameWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* NameEFText; // 0x28
		::System::String* NameText; // 0x30
		::System::Action* OnClickBtn; // 0x38
		::System::Boolean ShowBtn; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMNAMEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
