#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D450B0)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18D46EB0)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_521267F2AEE4A422_OFFSET UNITYSDK_OFFSET(0x18D45AD0)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18D46E50)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x18D45160)
#define CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET UNITYSDK_OFFSET(0x18D450A0)
#define CLASS_2_A72D0519C5AA20F6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D46DF0)

inline static constexpr unsigned int Class_2_A72D0519C5AA20F6_TypeDefinitionIndex = 39495;

class Class_2_A72D0519C5AA20F6 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_2; // 0x24
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31
	::System::Boolean Field_2_5; // 0x32
	::UnityEngine::Vector3 Field_2_6; // 0x34
	::System::Single Field_2_7; // 0x40

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_521267F2AEE4A422(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_521267F2AEE4A422_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
