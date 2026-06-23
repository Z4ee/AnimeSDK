#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A82B60E34CC48197;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_FB3AD67D095D0BFB_METHOD_1_7C80F4B7497E6B44_OFFSET UNITYSDK_OFFSET(0x15588130)
#define CLASS_1_FB3AD67D095D0BFB_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x15588110)
#define CLASS_1_FB3AD67D095D0BFB_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x15588100)
#define CLASS_1_FB3AD67D095D0BFB_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x15588330)
#define CLASS_1_FB3AD67D095D0BFB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x155880F0)
#define CLASS_1_FB3AD67D095D0BFB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15588120)
#define CLASS_1_FB3AD67D095D0BFB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15588340)
#define CLASS_1_FB3AD67D095D0BFB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15588070)
#define CLASS_1_FB3AD67D095D0BFB__CTOR_OFFSET UNITYSDK_OFFSET(0x15587E40)

inline static constexpr unsigned int Class_1_FB3AD67D095D0BFB_TypeDefinitionIndex = 72111;

class Class_1_FB3AD67D095D0BFB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor(::Class_3_A82B60E34CC48197* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A82B60E34CC48197*))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_3_A82B60E34CC48197* Method_1_7C80F4B7497E6B44()
	{
		return ((::Class_3_A82B60E34CC48197*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB_METHOD_1_7C80F4B7497E6B44_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB3AD67D095D0BFB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
