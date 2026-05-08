#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9_Struct_2_7E5074935084DB55.h"
#include "unitysdk/System/Object.h"

class Class_3_39E7492E16896206_2;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_32DD80AF96D59B2A_OFFSET UNITYSDK_OFFSET(0x13D8A660)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_B4CB03FB7D110721_OFFSET UNITYSDK_OFFSET(0x13D8B420)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x13D8B470)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_0986CB729CB90AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8A590)

inline static constexpr unsigned int Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9_TypeDefinitionIndex = 44731;

class Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_39E7492E16896206_2*>* Field_1_0; // 0x10
	::Class_2_11E43C7F4F662EE8_Class_1_0986CB729CB90AC9_Struct_2_7E5074935084DB55 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x28

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
