#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9_Struct_2_7E5074935084DB55.h"
#include "unitysdk/System/Object.h"

class Class_3_39E7492E16896206_2;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_32DD80AF96D59B2A_OFFSET UNITYSDK_OFFSET(0x1390C360)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_B4CB03FB7D110721_OFFSET UNITYSDK_OFFSET(0x1390D120)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1390D170)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1390C290)

inline static constexpr unsigned int Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9_TypeDefinitionIndex = 64067;

class Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_39E7492E16896206_2*>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9_Struct_2_7E5074935084DB55 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32DD80AF96D59B2A(::System::Collections::Generic::IList_1<::Class_3_39E7492E16896206_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_39E7492E16896206_2*>*))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_32DD80AF96D59B2A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B4CB03FB7D110721(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_B4CB03FB7D110721_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}
};
