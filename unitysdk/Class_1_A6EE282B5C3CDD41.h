#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4A1AD10FD6B58ED3;
class Class_3_6F28FFD006F2B451;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A6EE282B5C3CDD41_METHOD_1_54A1975A661884CC_OFFSET UNITYSDK_OFFSET(0x1CF11580)
#define CLASS_1_A6EE282B5C3CDD41_METHOD_1_A5087010D13BB37D_OFFSET UNITYSDK_OFFSET(0x1CF11390)
#define CLASS_1_A6EE282B5C3CDD41_METHOD_1_BAFEFE500EF86C3F_OFFSET UNITYSDK_OFFSET(0x1CF11190)
#define CLASS_1_A6EE282B5C3CDD41_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x1CF114F0)
#define CLASS_1_A6EE282B5C3CDD41__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF11100)

inline static constexpr unsigned int Class_1_A6EE282B5C3CDD41_TypeDefinitionIndex = 88310;

class Class_1_A6EE282B5C3CDD41 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_4A1AD10FD6B58ED3*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BAFEFE500EF86C3F(::Class_3_6F28FFD006F2B451* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41_METHOD_1_BAFEFE500EF86C3F_OFFSET))(this, a1, a2);
	}

	::Class_1_4A1AD10FD6B58ED3* Method_1_A5087010D13BB37D(::Class_3_6F28FFD006F2B451* a1, ::System::Int32 a2)
	{
		return ((::Class_1_4A1AD10FD6B58ED3*(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41_METHOD_1_A5087010D13BB37D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_4A1AD10FD6B58ED3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4A1AD10FD6B58ED3*))((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}

	::Class_1_4A1AD10FD6B58ED3* Method_1_54A1975A661884CC(::Class_3_6F28FFD006F2B451* a1, ::Il2CppArray<::System::Int32>* a2)
	{
		return ((::Class_1_4A1AD10FD6B58ED3*(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A6EE282B5C3CDD41_METHOD_1_54A1975A661884CC_OFFSET))(this, a1, a2);
	}
};
