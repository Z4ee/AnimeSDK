#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_010347D17DFD5D8F_3;
namespace System { class Action; }

#define CLASS_1_E1EA035BF8C77910_1_METHOD_1_786D66C9C7851CA1_OFFSET UNITYSDK_OFFSET(0x147ED4D0)
#define CLASS_1_E1EA035BF8C77910_1_METHOD_1_A92B7D83816BEFC5_OFFSET UNITYSDK_OFFSET(0x147ED640)
#define CLASS_1_E1EA035BF8C77910_1__CTOR_OFFSET UNITYSDK_OFFSET(0x147ED630)

inline static constexpr unsigned int Class_1_E1EA035BF8C77910_1_TypeDefinitionIndex = 73002;

class Class_1_E1EA035BF8C77910_1 : public ::System::Object
{
public:
	::Class_3_010347D17DFD5D8F_3* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1EA035BF8C77910_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_786D66C9C7851CA1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E1EA035BF8C77910_1_METHOD_1_786D66C9C7851CA1_OFFSET))(this, a1);
	}

	static ::Class_1_E1EA035BF8C77910_1* Method_1_A92B7D83816BEFC5(::Class_3_010347D17DFD5D8F_3* a1)
	{
		return ((::Class_1_E1EA035BF8C77910_1*(*)(::Class_3_010347D17DFD5D8F_3*))((::PBYTE)hIl2Cpp + CLASS_1_E1EA035BF8C77910_1_METHOD_1_A92B7D83816BEFC5_OFFSET))(a1);
	}
};
