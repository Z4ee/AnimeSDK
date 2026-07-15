#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1D603D561A625D6B;
class Class_2_56DCA1B58073717B;

#define CLASS_2_1D603D561A625D6B___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16396130)
#define CLASS_2_1D603D561A625D6B___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__0_OFFSET UNITYSDK_OFFSET(0x16396300)
#define CLASS_2_1D603D561A625D6B___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__1_OFFSET UNITYSDK_OFFSET(0x16396330)

inline static constexpr unsigned int Class_2_1D603D561A625D6B___c__DisplayClass7_0_TypeDefinitionIndex = 72819;

class Class_2_1D603D561A625D6B___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_56DCA1B58073717B* entity; // 0x10
	::Class_2_1D603D561A625D6B* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D603D561A625D6B___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void __AddEventEmitter_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_1D603D561A625D6B___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__0_OFFSET))(this, a1);
	}

	::System::Void __AddEventEmitter_b__1(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_1D603D561A625D6B___C__DISPLAYCLASS7_0___ADDEVENTEMITTER_B__1_OFFSET))(this, a1);
	}
};
