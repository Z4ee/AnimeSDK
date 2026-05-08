#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_11995F30C0EF4036_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_072190A5F792A53F_CLASS_1_389CF8A83F01E546_METHOD_1_3D93BC23178A8863_OFFSET UNITYSDK_OFFSET(0x14F6D1D0)
#define CLASS_1_072190A5F792A53F_CLASS_1_389CF8A83F01E546__CTOR_OFFSET UNITYSDK_OFFSET(0x14F6D130)

inline static constexpr unsigned int Class_1_072190A5F792A53F_Class_1_389CF8A83F01E546_TypeDefinitionIndex = 18096;

class Class_1_072190A5F792A53F_Class_1_389CF8A83F01E546 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* Field_1_1; // 0x10
	::Il2CppArray<::System::Collections::Generic::List_1<::Class_2_11995F30C0EF4036_2*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_072190A5F792A53F_CLASS_1_389CF8A83F01E546__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3D93BC23178A8863(::Class_2_11995F30C0EF4036_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_11995F30C0EF4036_2*))((::PBYTE)hIl2Cpp + CLASS_1_072190A5F792A53F_CLASS_1_389CF8A83F01E546_METHOD_1_3D93BC23178A8863_OFFSET))(this, a1);
	}
};
