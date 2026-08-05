#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9F7D78FFC33B7AE7_Class_2_1EE30F7DE42DCBDA;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6CB0867E412796CC_METHOD_1_60AD89BF0778A2A5_OFFSET UNITYSDK_OFFSET(0xF74EF90)
#define CLASS_1_6CB0867E412796CC_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0xF74F070)
#define CLASS_1_6CB0867E412796CC__CTOR_OFFSET UNITYSDK_OFFSET(0xF74EF80)

inline static constexpr unsigned int Class_1_6CB0867E412796CC_TypeDefinitionIndex = 69659;

class Class_1_6CB0867E412796CC : public ::System::Object
{
public:
	::Class_2_9F7D78FFC33B7AE7_Class_2_1EE30F7DE42DCBDA* Field_1_2; // 0x10
	::System::Action_1<::System::Int32>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0867E412796CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60AD89BF0778A2A5(::System::Int32 a1, ::Class_2_9F7D78FFC33B7AE7_Class_2_1EE30F7DE42DCBDA* a2, ::System::Action_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_9F7D78FFC33B7AE7_Class_2_1EE30F7DE42DCBDA*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0867E412796CC_METHOD_1_60AD89BF0778A2A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0867E412796CC_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
	}
};
