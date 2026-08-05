#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B7FC057D30D5C12;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_2F0FC86FB1718E82_1_CLASS_1_3CB3E8056D54057F_1_METHOD_1_AC2886437C307622_OFFSET UNITYSDK_OFFSET(0x11565670)
#define CLASS_1_2F0FC86FB1718E82_1_CLASS_1_3CB3E8056D54057F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11565660)

inline static constexpr unsigned int Class_1_2F0FC86FB1718E82_1_Class_1_3CB3E8056D54057F_1_TypeDefinitionIndex = 77022;

class Class_1_2F0FC86FB1718E82_1_Class_1_3CB3E8056D54057F_1 : public ::System::Object
{
public:
	::System::Action_2<::System::Single, ::System::Single>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_CLASS_1_3CB3E8056D54057F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AC2886437C307622(::Class_1_7B7FC057D30D5C12* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_CLASS_1_3CB3E8056D54057F_1_METHOD_1_AC2886437C307622_OFFSET))(this, a1, a2, a3);
	}
};
