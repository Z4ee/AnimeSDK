#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_640ADD7FDB40B430.h"
#include "unitysdk/Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7.h"

class Class_3_46655DA07E3EA26B_2;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_0794A8E234D5EC2D_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x16EA6860)
#define CLASS_5_0794A8E234D5EC2D_METHOD_5_A1F2D6F6717AA854_OFFSET UNITYSDK_OFFSET(0x16EA63D0)
#define CLASS_5_0794A8E234D5EC2D_METHOD_5_C6B186D8867FF988_OFFSET UNITYSDK_OFFSET(0x16EA60D0)
#define CLASS_5_0794A8E234D5EC2D__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA6800)

inline static constexpr unsigned int Class_5_0794A8E234D5EC2D_TypeDefinitionIndex = 80184;

class Class_5_0794A8E234D5EC2D : public ::Class_4_640ADD7FDB40B430
{
public:
	::System::Collections::Generic::LinkedList_1<::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7>* Field_5_0; // 0x2D0
	::Class_5_0794A8E234D5EC2D_Struct_2_C3BE3DEEF56DE7F7 Field_5_7; // 0x2D8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C6B186D8867FF988(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D_METHOD_5_C6B186D8867FF988_OFFSET))(this, a1);
	}

	::System::Void Method_5_A1F2D6F6717AA854(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D_METHOD_5_A1F2D6F6717AA854_OFFSET))(this, a1);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_5_0794A8E234D5EC2D_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}
};
