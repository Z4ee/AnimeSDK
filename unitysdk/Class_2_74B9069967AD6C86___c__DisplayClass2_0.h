#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
class Class_2_74B9069967AD6C86;

#define CLASS_2_74B9069967AD6C86___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1686A250)
#define CLASS_2_74B9069967AD6C86___C__DISPLAYCLASS2_0___CREATETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1686A420)
#define CLASS_2_74B9069967AD6C86___C__DISPLAYCLASS2_0___CREATETRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1686A4E0)

inline static constexpr unsigned int Class_2_74B9069967AD6C86___c__DisplayClass2_0_TypeDefinitionIndex = 72861;

class Class_2_74B9069967AD6C86___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_74B9069967AD6C86* __4__this; // 0x10
	::Class_2_56DCA1B58073717B* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __CreateTrigger_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86___C__DISPLAYCLASS2_0___CREATETRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void __CreateTrigger_b__1(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86___C__DISPLAYCLASS2_0___CREATETRIGGER_B__1_OFFSET))(this, a1);
	}
};
