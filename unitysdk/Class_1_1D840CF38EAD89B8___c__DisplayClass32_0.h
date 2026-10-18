#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_1D840CF38EAD89B8___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15981270)
#define CLASS_1_1D840CF38EAD89B8___C__DISPLAYCLASS32_0__EXITREADY_B__0_OFFSET UNITYSDK_OFFSET(0x15981360)

inline static constexpr unsigned int Class_1_1D840CF38EAD89B8___c__DisplayClass32_0_TypeDefinitionIndex = 81957;

class Class_1_1D840CF38EAD89B8___c__DisplayClass32_0 : public ::System::Object
{
public:
	::System::Action* onConfirmExit; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D840CF38EAD89B8___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Void _ExitReady_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1D840CF38EAD89B8___C__DISPLAYCLASS32_0__EXITREADY_B__0_OFFSET))(this, a1);
	}
};
