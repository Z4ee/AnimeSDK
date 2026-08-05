#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3BB4FDB082E23A99;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1926DD10)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x1926DD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 72304;

	class UIActivePropsPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__1(::Class_2_3BB4FDB082E23A99* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_3BB4FDB082E23A99*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_B__1_OFFSET))(this, b);
		}
	};
}
