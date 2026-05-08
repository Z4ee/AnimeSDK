#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_640ADD7FDB40B430.h"
#include "unitysdk/Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7.h"

class Class_3_F6E9D1CD310ACC17;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_0794A8E234D5EC2D_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x12F1AD10)
#define CLASS_5_0794A8E234D5EC2D_METHOD_5_A1F2D6F6717AA854_OFFSET UNITYSDK_OFFSET(0x12F1A880)
#define CLASS_5_0794A8E234D5EC2D_METHOD_5_C6B186D8867FF988_OFFSET UNITYSDK_OFFSET(0x12F1A580)
#define CLASS_5_0794A8E234D5EC2D__CTOR_OFFSET UNITYSDK_OFFSET(0x12F1ACB0)

inline static constexpr unsigned int Class_5_0794A8E234D5EC2D_TypeDefinitionIndex = 64476;

class Class_5_0794A8E234D5EC2D : public ::Class_4_640ADD7FDB40B430
{
public:
	::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7 Field_5_1; // 0x2C0
	::System::Collections::Generic::LinkedList_1<::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7>* Field_5_0; // 0x2D8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C6B186D8867FF988(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D_METHOD_5_C6B186D8867FF988_OFFSET))(this, a1);
	}

	::System::Void Method_5_A1F2D6F6717AA854(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D_METHOD_5_A1F2D6F6717AA854_OFFSET))(this, a1);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}
};
