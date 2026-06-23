#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0CDD0BEB64607A45.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171E1A10)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_0__UPDATETEXTCALLBACK_B__4_OFFSET UNITYSDK_OFFSET(0x171E1A80)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_0__UPDATETEXTCALLBACK_B__6_OFFSET UNITYSDK_OFFSET(0x171E1A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass80_0_TypeDefinitionIndex = 86482;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::String* s; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x18
		::MoleMole::UIBubbleTips* bubbleTips; // 0x20
		::UnityEngine::RectTransform* root; // 0x28
		::System::Action* __9__6; // 0x30
		::Struct_2_0CDD0BEB64607A45 updateData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_0__UPDATETEXTCALLBACK_B__6_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_0__UPDATETEXTCALLBACK_B__4_OFFSET))(this);
		}
	};
}
