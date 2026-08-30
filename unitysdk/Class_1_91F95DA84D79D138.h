#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B44E7E9CBC9D1A8E;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_91F95DA84D79D138_CLEANUP_OFFSET UNITYSDK_OFFSET(0x16870400)
#define CLASS_1_91F95DA84D79D138_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1686FE90)
#define CLASS_1_91F95DA84D79D138_METHOD_1_0AD58C8AAABBF179_OFFSET UNITYSDK_OFFSET(0x16870440)
#define CLASS_1_91F95DA84D79D138_METHOD_1_702FE528C6E82BF9_OFFSET UNITYSDK_OFFSET(0x16870280)
#define CLASS_1_91F95DA84D79D138__CTOR_OFFSET UNITYSDK_OFFSET(0x1686FDB0)

inline static constexpr unsigned int Class_1_91F95DA84D79D138_TypeDefinitionIndex = 77487;

class Class_1_91F95DA84D79D138 : public ::System::Object
{
public:
	::Class_3_543326C044264182* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_2_6B60059019300BAD*>* FHCMNOGOCEH; // 0x18
	::Class_2_2090B77B5C7838F2* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_EXECUTE_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_CLEANUP_OFFSET))(this);
	}

	::System::Void Method_1_702FE528C6E82BF9(::Class_2_6B60059019300BAD* a1, ::Class_1_B44E7E9CBC9D1A8E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_1_B44E7E9CBC9D1A8E*))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_METHOD_1_702FE528C6E82BF9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_0AD58C8AAABBF179(::Class_1_B44E7E9CBC9D1A8E* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_B44E7E9CBC9D1A8E*))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_METHOD_1_0AD58C8AAABBF179_OFFSET))(this, a1);
	}
};
