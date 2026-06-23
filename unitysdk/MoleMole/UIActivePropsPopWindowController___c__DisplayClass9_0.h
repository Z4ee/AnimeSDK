#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6DA22669E4D1C4BF;

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1610F2F0)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x1610F300)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 85109;

	class UIActivePropsPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__1(::Class_2_6DA22669E4D1C4BF* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_6DA22669E4D1C4BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONUIOPEN_B__1_OFFSET))(this, b);
		}
	};
}
