#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS96_1__CTOR_OFFSET UNITYSDK_OFFSET(0x177EC290)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS96_1__DOFADEOUT_B__3_OFFSET UNITYSDK_OFFSET(0x177EC2A0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS96_1__DOFADEOUT_B__4_OFFSET UNITYSDK_OFFSET(0x177EC2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass96_1_TypeDefinitionIndex = 86512;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass96_1 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* root; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS96_1__CTOR_OFFSET))(this);
		}

		::System::Single _DoFadeOut_b__3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS96_1__DOFADEOUT_B__3_OFFSET))(this);
		}

		::System::Void _DoFadeOut_b__4(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS96_1__DOFADEOUT_B__4_OFFSET))(this, v);
		}
	};
}
