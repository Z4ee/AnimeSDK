#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0CDD0BEB64607A45.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19E854B0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS82_0__UPDATETEXTCALLBACK_B__4_OFFSET UNITYSDK_OFFSET(0x19E85520)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS82_0__UPDATETEXTCALLBACK_B__6_OFFSET UNITYSDK_OFFSET(0x19E854C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass82_0_TypeDefinitionIndex = 43597;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::System::String* s; // 0x18
		::MoleMole::UIBubbleTips* bubbleTips; // 0x20
		::Struct_2_0CDD0BEB64607A45 updateData; // 0x28
		::UnityEngine::RectTransform* root; // 0x40
		::System::Action* __9__6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS82_0__UPDATETEXTCALLBACK_B__6_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS82_0__UPDATETEXTCALLBACK_B__4_OFFSET))(this);
		}
	};
}
