#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FB9C92968BA98DE_Struct_2_B06C2CF9EAE96419.h"
#include "unitysdk/System/Object.h"

class Class_1_0FB9C92968BA98DE_Class_1_32E4AB9E969DC9E7;
class Class_1_0FB9C92968BA98DE_Class_1_692374EB3DEDCAC6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FB9C92968BA98DE_CLASS_1_9BE8E984EE24259D_METHOD_1_29CA0DFD8ED5B73F_OFFSET UNITYSDK_OFFSET(0x16E12370)
#define CLASS_1_0FB9C92968BA98DE_CLASS_1_9BE8E984EE24259D__CTOR_OFFSET UNITYSDK_OFFSET(0x16E12180)

inline static constexpr unsigned int Class_1_0FB9C92968BA98DE_Class_1_9BE8E984EE24259D_TypeDefinitionIndex = 67317;

class Class_1_0FB9C92968BA98DE_Class_1_9BE8E984EE24259D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0FB9C92968BA98DE_Class_1_32E4AB9E969DC9E7*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0FB9C92968BA98DE_Class_1_32E4AB9E969DC9E7*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0FB9C92968BA98DE_Class_1_32E4AB9E969DC9E7*>* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_1_0FB9C92968BA98DE_Struct_2_B06C2CF9EAE96419, ::Class_1_0FB9C92968BA98DE_Class_1_692374EB3DEDCAC6*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_0FB9C92968BA98DE_Class_1_32E4AB9E969DC9E7*>* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB9C92968BA98DE_CLASS_1_9BE8E984EE24259D__CTOR_OFFSET))(this);
	}

	::Class_1_0FB9C92968BA98DE_Class_1_692374EB3DEDCAC6* Method_1_29CA0DFD8ED5B73F(::Class_1_0FB9C92968BA98DE_Struct_2_B06C2CF9EAE96419 a1)
	{
		return ((::Class_1_0FB9C92968BA98DE_Class_1_692374EB3DEDCAC6*(*)(::PVOID, ::Class_1_0FB9C92968BA98DE_Struct_2_B06C2CF9EAE96419))((::PBYTE)hIl2Cpp + CLASS_1_0FB9C92968BA98DE_CLASS_1_9BE8E984EE24259D_METHOD_1_29CA0DFD8ED5B73F_OFFSET))(this, a1);
	}
};
