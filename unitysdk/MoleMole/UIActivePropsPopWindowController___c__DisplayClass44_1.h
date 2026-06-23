#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6DA22669E4D1C4BF;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18A24BD0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET UNITYSDK_OFFSET(0x18A24BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass44_1_TypeDefinitionIndex = 85111;

	class UIActivePropsPopWindowController___c__DisplayClass44_1 : public ::System::Object
	{
	public:
		::Class_2_6DA22669E4D1C4BF* previewBuddy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuddyListByMode_b__1(::Class_2_6DA22669E4D1C4BF* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_6DA22669E4D1C4BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET))(this, match);
		}
	};
}
