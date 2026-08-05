#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotPostRowWidgetController___c__DisplayClass25_0; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184B8F50)
#define MOLEMOLE_UIINTERKNOTPOSTROWWIDGETCONTROLLER___C__DISPLAYCLASS25_1__PLAYIMAGEANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x184B8F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostRowWidgetController___c__DisplayClass25_1_TypeDefinitionIndex = 41686;

	class UIInterKnotPostRowWidgetController___c__DisplayClass25_1 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotPostRowWidgetController___c__DisplayClass25_0* CS___8__locals1; // 0x10
		::UnityEngine::Animation* anim; // 0x18

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
