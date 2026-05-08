#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0CDD0BEB64607A45.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168719C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__UPDATETEXTCALLBACK_B__4_OFFSET UNITYSDK_OFFSET(0x16871A30)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__UPDATETEXTCALLBACK_B__6_OFFSET UNITYSDK_OFFSET(0x168719D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass79_0_TypeDefinitionIndex = 73363;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Action* __9__6; // 0x10
		::System::String* s; // 0x18
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x20
		::UnityEngine::RectTransform* root; // 0x28
		::Struct_2_0CDD0BEB64607A45 updateData; // 0x30
		::MoleMole::UIBubbleTips* bubbleTips; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__UPDATETEXTCALLBACK_B__6_OFFSET))(this);
		}

		::System::Void _UpdateTextCallback_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS79_0__UPDATETEXTCALLBACK_B__4_OFFSET))(this);
		}
	};
}
