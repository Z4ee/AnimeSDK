#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_378;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_79E331CA5D4D8073_CLEAR_OFFSET UNITYSDK_OFFSET(0x170A6D50)
#define CLASS_1_79E331CA5D4D8073_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x170A6C00)
#define CLASS_1_79E331CA5D4D8073_METHOD_1_47E9D08FEF81A7C3_OFFSET UNITYSDK_OFFSET(0x170A6DE0)
#define CLASS_1_79E331CA5D4D8073_METHOD_1_97E98F020AD09B3C_OFFSET UNITYSDK_OFFSET(0x170A69E0)
#define CLASS_1_79E331CA5D4D8073_METHOD_1_C37F1564CE921DE1_OFFSET UNITYSDK_OFFSET(0x170A6A60)
#define CLASS_1_79E331CA5D4D8073__CTOR_OFFSET UNITYSDK_OFFSET(0x170A6E90)

inline static constexpr unsigned int Class_1_79E331CA5D4D8073_TypeDefinitionIndex = 67908;

class Class_1_79E331CA5D4D8073 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_378* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79E331CA5D4D8073__CTOR_OFFSET))(this);
	}

	static ::Class_1_79E331CA5D4D8073* Method_1_97E98F020AD09B3C(::Class_0_16E4307DCC419505_378* a1)
	{
		return ((::Class_1_79E331CA5D4D8073*(*)(::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + CLASS_1_79E331CA5D4D8073_METHOD_1_97E98F020AD09B3C_OFFSET))(a1);
	}

	::System::Void Method_1_C37F1564CE921DE1(::System::Action_2<::Class_0_16E4307DCC419505_378*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_378*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_79E331CA5D4D8073_METHOD_1_C37F1564CE921DE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79E331CA5D4D8073_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79E331CA5D4D8073_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_47E9D08FEF81A7C3(::Class_0_16E4307DCC419505_378* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_378*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79E331CA5D4D8073_METHOD_1_47E9D08FEF81A7C3_OFFSET))(this, a1, a2);
	}
};
