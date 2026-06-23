#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83296628DE272A09;
class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;

#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1528CA60)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1528CA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaincityMiniGameChildWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 75314;

	class UIMaincityMiniGameChildWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_1_83296628DE272A09* playerInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnInfo_b__1(::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__ONINFO_B__1_OFFSET))(this, t);
		}
	};
}
