#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_D1A466904ACA14F0_Class_1_855159C78A644662;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_D1A466904ACA14F0_CLASS_1_7782401CA747DE9A_METHOD_1_51666B9C51B1E673_OFFSET UNITYSDK_OFFSET(0x1F671260)
#define CLASS_2_D1A466904ACA14F0_CLASS_1_7782401CA747DE9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F671250)

inline static constexpr unsigned int Class_2_D1A466904ACA14F0_Class_1_7782401CA747DE9A_TypeDefinitionIndex = 93694;

class Class_2_D1A466904ACA14F0_Class_1_7782401CA747DE9A : public ::System::Object
{
public:
	::Class_2_D1A466904ACA14F0_Class_1_855159C78A644662* Field_1_7; // 0x10
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1A466904ACA14F0_CLASS_1_7782401CA747DE9A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_51666B9C51B1E673(::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_D1A466904ACA14F0_CLASS_1_7782401CA747DE9A_METHOD_1_51666B9C51B1E673_OFFSET))(this, a1, a2);
	}
};
