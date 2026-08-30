#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BE0CA28AFC032D5;
namespace Sofa { class BaseSofaUI3DWindow; }

#define CLASS_1_7BE0CA28AFC032D5___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EF610)
#define CLASS_1_7BE0CA28AFC032D5___C__DISPLAYCLASS11_0___GETORCREATEUI3DWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A0EF770)

inline static constexpr unsigned int Class_1_7BE0CA28AFC032D5___c__DisplayClass11_0_TypeDefinitionIndex = 79185;

class Class_1_7BE0CA28AFC032D5___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_1_7BE0CA28AFC032D5* __4__this; // 0x10
	::Sofa::BaseSofaUI3DWindow* window; // 0x18
	::System::Object* viewModel; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void __GetOrCreateUI3DWindow_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5___C__DISPLAYCLASS11_0___GETORCREATEUI3DWINDOW_B__0_OFFSET))(this);
	}
};
