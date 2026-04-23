#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B44E7E9CBC9D1A8E;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_91F95DA84D79D138_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1252C2B0)
#define CLASS_1_91F95DA84D79D138_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1252BD30)
#define CLASS_1_91F95DA84D79D138_METHOD_1_0AD58C8AAABBF179_OFFSET UNITYSDK_OFFSET(0x1252C2F0)
#define CLASS_1_91F95DA84D79D138_METHOD_1_702FE528C6E82BF9_OFFSET UNITYSDK_OFFSET(0x1252C130)
#define CLASS_1_91F95DA84D79D138__CTOR_OFFSET UNITYSDK_OFFSET(0x1252BC50)

inline static constexpr unsigned int Class_1_91F95DA84D79D138_TypeDefinitionIndex = 71456;

class Class_1_91F95DA84D79D138 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_181A7F9409C60DBC*>* Field_1_2; // 0x10
	::Class_3_543326C044264182* Field_1_1; // 0x18
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_EXECUTE_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_CLEANUP_OFFSET))(this);
	}

	::System::Void Method_1_702FE528C6E82BF9(::Class_2_181A7F9409C60DBC* a1, ::Class_1_B44E7E9CBC9D1A8E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_1_B44E7E9CBC9D1A8E*))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_METHOD_1_702FE528C6E82BF9_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_0AD58C8AAABBF179(::Class_1_B44E7E9CBC9D1A8E* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_B44E7E9CBC9D1A8E*))((::PBYTE)hIl2Cpp + CLASS_1_91F95DA84D79D138_METHOD_1_0AD58C8AAABBF179_OFFSET))(this, a1);
	}
};
