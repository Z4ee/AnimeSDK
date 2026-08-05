#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1487A3F820CB8361.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_0_16E4307DCC419505_229;
class Class_2_3BB4FDB082E23A99;

#define CLASS_2_18647C0DA6EAAED8_METHOD_2_477619032BD53FD3_OFFSET UNITYSDK_OFFSET(0x18154A40)
#define CLASS_2_18647C0DA6EAAED8_METHOD_2_5FF5C61A6E57C587_OFFSET UNITYSDK_OFFSET(0x18154CF0)
#define CLASS_2_18647C0DA6EAAED8_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18154BE0)
#define CLASS_2_18647C0DA6EAAED8_METHOD_2_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0x18154DA0)
#define CLASS_2_18647C0DA6EAAED8__CTOR_OFFSET UNITYSDK_OFFSET(0x18154A20)

inline static constexpr unsigned int Class_2_18647C0DA6EAAED8_TypeDefinitionIndex = 41589;

class Class_2_18647C0DA6EAAED8 : public ::Class_1_1487A3F820CB8361
{
public:
	::Class_2_3BB4FDB082E23A99* Field_2_0; // 0x90

	::System::Void _ctor(::Class_2_3BB4FDB082E23A99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3BB4FDB082E23A99*))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_2_477619032BD53FD3(::Class_0_16E4307DCC419505_229* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_229*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_477619032BD53FD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Single Method_2_5FF5C61A6E57C587(::Class_0_16E4307DCC419505_229* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_229*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_5FF5C61A6E57C587_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97B44ED90A2DE2AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18647C0DA6EAAED8_METHOD_2_97B44ED90A2DE2AB_OFFSET))(this);
	}
};
