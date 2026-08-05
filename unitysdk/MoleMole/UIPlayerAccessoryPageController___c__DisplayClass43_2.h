#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_927E2D0470CF77A4;

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1835D9B0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__SENDCHANGESKIN_B__3_OFFSET UNITYSDK_OFFSET(0x1835D9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass43_2_TypeDefinitionIndex = 51559;

	class UIPlayerAccessoryPageController___c__DisplayClass43_2 : public ::System::Object
	{
	public:
		::System::Int32 mainSkinID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _SendChangeSkin_b__3(::Class_2_927E2D0470CF77A4* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_927E2D0470CF77A4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_2__SENDCHANGESKIN_B__3_OFFSET))(this, x);
		}
	};
}
