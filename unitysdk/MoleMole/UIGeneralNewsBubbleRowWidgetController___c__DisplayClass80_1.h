#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass80_0; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_1__CTOR_OFFSET UNITYSDK_OFFSET(0x169CBE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass80_1_TypeDefinitionIndex = 86522;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass80_1 : public ::System::Object
	{
	public:
		::UnityEngine::UI::HorizontalLayoutGroup* group; // 0x10
		::UnityEngine::UI::VerticalLayoutGroup* frameGroup; // 0x18
		::UnityEngine::RectTransform* missionDescRect; // 0x20
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass80_0* CS___8__locals1; // 0x28
		::System::Single delta; // 0x30
		::System::Single lastHeight; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS80_1__CTOR_OFFSET))(this);
		}
	};
}
