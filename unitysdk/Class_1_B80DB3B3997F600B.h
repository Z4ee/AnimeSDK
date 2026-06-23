#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_6779C7FABAF16A58.h"
#include "unitysdk/Struct_2_C5AA8D6700875A30.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B80DB3B3997F600B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFF4580)
#define CLASS_1_B80DB3B3997F600B_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFF4060)
#define CLASS_1_B80DB3B3997F600B_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xFFF40E0)
#define CLASS_1_B80DB3B3997F600B_METHOD_1_8F38D1E0FC0C448C_OFFSET UNITYSDK_OFFSET(0xFFF45E0)
#define CLASS_1_B80DB3B3997F600B__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF4800)

inline static constexpr unsigned int Class_1_B80DB3B3997F600B_TypeDefinitionIndex = 68541;

class Class_1_B80DB3B3997F600B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_C5AA8D6700875A30>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_6779C7FABAF16A58>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B80DB3B3997F600B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B80DB3B3997F600B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B80DB3B3997F600B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F38D1E0FC0C448C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B80DB3B3997F600B_METHOD_1_8F38D1E0FC0C448C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B80DB3B3997F600B_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
