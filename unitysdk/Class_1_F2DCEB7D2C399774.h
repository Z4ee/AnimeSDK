#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2DCEB7D2C399774_METHOD_1_A25E227C56B537C3_OFFSET UNITYSDK_OFFSET(0x98F0290)
#define CLASS_1_F2DCEB7D2C399774_METHOD_1_BBE326368BAA09B2_OFFSET UNITYSDK_OFFSET(0x98F0390)
#define CLASS_1_F2DCEB7D2C399774__CTOR_OFFSET UNITYSDK_OFFSET(0x98F0420)

inline static constexpr unsigned int Class_1_F2DCEB7D2C399774_TypeDefinitionIndex = 70328;

class Class_1_F2DCEB7D2C399774 : public ::System::Object
{
public:
	::System::Func_3<::System::UInt32, ::System::Boolean, ::Class_0_16E4307DCC419505_341*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_341*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_341*>* Field_1_2; // 0x20
	::System::Action* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A25E227C56B537C3(::Class_0_16E4307DCC419505_341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774_METHOD_1_A25E227C56B537C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBE326368BAA09B2(::System::Boolean a1, ::Class_0_16E4307DCC419505_341* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_F2DCEB7D2C399774_METHOD_1_BBE326368BAA09B2_OFFSET))(this, a1, a2);
	}
};
