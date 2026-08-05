#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3BB4FDB082E23A99;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FD910)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET UNITYSDK_OFFSET(0x1A5FD920)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass44_1_TypeDefinitionIndex = 72308;

	class UIActivePropsPopWindowController___c__DisplayClass44_1 : public ::System::Object
	{
	public:
		::Class_2_3BB4FDB082E23A99* previewBuddy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuddyListByMode_b__1(::Class_2_3BB4FDB082E23A99* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_3BB4FDB082E23A99*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS44_1__GETBUDDYLISTBYMODE_B__1_OFFSET))(this, match);
		}
	};
}
