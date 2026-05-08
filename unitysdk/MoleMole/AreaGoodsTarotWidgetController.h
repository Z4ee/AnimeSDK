#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardOptionItemWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_AREAGOODSTAROTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x122D0800)
#define MOLEMOLE_AREAGOODSTAROTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x122D0AB0)
#define MOLEMOLE_AREAGOODSTAROTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x122D0AE0)

namespace MoleMole
{
	inline static constexpr unsigned int AreaGoodsTarotWidgetController_TypeDefinitionIndex = 62131;

	class AreaGoodsTarotWidgetController : public ::MoleMole::UIHollowCardOptionItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREAGOODSTAROTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AREAGOODSTAROTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AREAGOODSTAROTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
