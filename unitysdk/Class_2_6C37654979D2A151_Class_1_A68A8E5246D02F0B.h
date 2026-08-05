#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_22AF1BA6B9A53CBF;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_6C37654979D2A151_CLASS_1_A68A8E5246D02F0B_METHOD_1_76EF50C6B419ABEE_OFFSET UNITYSDK_OFFSET(0x1992FD00)
#define CLASS_2_6C37654979D2A151_CLASS_1_A68A8E5246D02F0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1992FCF0)

inline static constexpr unsigned int Class_2_6C37654979D2A151_Class_1_A68A8E5246D02F0B_TypeDefinitionIndex = 71318;

class Class_2_6C37654979D2A151_Class_1_A68A8E5246D02F0B : public ::System::Object
{
public:
	::System::Action_1<::Class_1_22AF1BA6B9A53CBF*>* Field_1_0; // 0x10
	::System::Action_2<::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C37654979D2A151_CLASS_1_A68A8E5246D02F0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76EF50C6B419ABEE(::System::Boolean a1, ::Class_1_22AF1BA6B9A53CBF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_22AF1BA6B9A53CBF*))((::PBYTE)hIl2Cpp + CLASS_2_6C37654979D2A151_CLASS_1_A68A8E5246D02F0B_METHOD_1_76EF50C6B419ABEE_OFFSET))(this, a1, a2);
	}
};
