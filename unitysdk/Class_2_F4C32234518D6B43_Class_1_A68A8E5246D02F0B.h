#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB3A5EFF78BBB49D;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F4C32234518D6B43_CLASS_1_A68A8E5246D02F0B_METHOD_1_76EF50C6B419ABEE_OFFSET UNITYSDK_OFFSET(0x10FC7B90)
#define CLASS_2_F4C32234518D6B43_CLASS_1_A68A8E5246D02F0B__CTOR_OFFSET UNITYSDK_OFFSET(0x10FC7B80)

inline static constexpr unsigned int Class_2_F4C32234518D6B43_Class_1_A68A8E5246D02F0B_TypeDefinitionIndex = 60695;

class Class_2_F4C32234518D6B43_Class_1_A68A8E5246D02F0B : public ::System::Object
{
public:
	::System::Action_1<::Class_1_DB3A5EFF78BBB49D*>* Field_1_0; // 0x10
	::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4C32234518D6B43_CLASS_1_A68A8E5246D02F0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76EF50C6B419ABEE(::System::Boolean a1, ::Class_1_DB3A5EFF78BBB49D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*))((::PBYTE)hIl2Cpp + CLASS_2_F4C32234518D6B43_CLASS_1_A68A8E5246D02F0B_METHOD_1_76EF50C6B419ABEE_OFFSET))(this, a1, a2);
	}
};
