#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_3BDFAF4A2AB65026;

#define CLASS_2_FA2E647D1A1F89AA_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA528C50)
#define CLASS_2_FA2E647D1A1F89AA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA528D90)
#define CLASS_2_FA2E647D1A1F89AA_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA528DE0)
#define CLASS_2_FA2E647D1A1F89AA__CTOR_OFFSET UNITYSDK_OFFSET(0xA528C40)
#define CLASS_2_FA2E647D1A1F89AA__START_B__3_0_OFFSET UNITYSDK_OFFSET(0xA528DD0)

inline static constexpr unsigned int Class_2_FA2E647D1A1F89AA_TypeDefinitionIndex = 55680;

class Class_2_FA2E647D1A1F89AA : public ::Class_1_2231FD56C070349F
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x1C

	::System::Void _ctor(::Class_3_3BDFAF4A2AB65026* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BDFAF4A2AB65026*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _Start_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA__START_B__3_0_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
