#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3079942E0116397;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }

#define CLASS_1_E3079942E0116397___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD19AE0)
#define CLASS_1_E3079942E0116397___C__DISPLAYCLASS7_0___FETCHFORSOFA_B__0_OFFSET UNITYSDK_OFFSET(0xCD19B70)

inline static constexpr unsigned int Class_1_E3079942E0116397___c__DisplayClass7_0_TypeDefinitionIndex = 72912;

class Class_1_E3079942E0116397___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_E3079942E0116397* __4__this; // 0x10
	::Sofa::BaseSofaUI3DWindow* ui3d; // 0x18
	::Sofa::BaseSofaWindow* window; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void __FetchForSofa_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397___C__DISPLAYCLASS7_0___FETCHFORSOFA_B__0_OFFSET))(this);
	}
};
