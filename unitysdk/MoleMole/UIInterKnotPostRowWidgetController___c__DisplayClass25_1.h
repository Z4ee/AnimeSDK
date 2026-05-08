#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotPostRowWidgetController___c__DisplayClass25_0; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15001C60)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS25_1__PLAYIMAGEANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x15001C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c__DisplayClass25_1_TypeDefinitionIndex = 41376;

	class UIInterKnotPostRowWidgetController___c__DisplayClass25_1 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::MoleMole::UIInterKnotPostRowWidgetController___c__DisplayClass25_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayImageAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS25_1__PLAYIMAGEANIMATION_B__1_OFFSET))(this);
		}
	};
}
