#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6708DDDE04C9614;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C864C19113E2EEBC_METHOD_1_19B911E6848D24CA_OFFSET UNITYSDK_OFFSET(0x1176C980)
#define CLASS_1_C864C19113E2EEBC_METHOD_1_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0x1176C700)
#define CLASS_1_C864C19113E2EEBC_METHOD_1_66A74E63B0043509_OFFSET UNITYSDK_OFFSET(0x1176C5E0)
#define CLASS_1_C864C19113E2EEBC_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1176CB10)
#define CLASS_1_C864C19113E2EEBC_METHOD_1_B5EE91C86ADEDFB9_OFFSET UNITYSDK_OFFSET(0x1176C840)
#define CLASS_1_C864C19113E2EEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1176CB60)

inline static constexpr unsigned int Class_1_C864C19113E2EEBC_TypeDefinitionIndex = 51910;

class Class_1_C864C19113E2EEBC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D6708DDDE04C9614*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C864C19113E2EEBC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_66A74E63B0043509(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C864C19113E2EEBC_METHOD_1_66A74E63B0043509_OFFSET))(this, a1);
	}

	::Class_1_D6708DDDE04C9614* Method_1_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_D6708DDDE04C9614*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C864C19113E2EEBC_METHOD_1_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5EE91C86ADEDFB9(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C864C19113E2EEBC_METHOD_1_B5EE91C86ADEDFB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19B911E6848D24CA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C864C19113E2EEBC_METHOD_1_19B911E6848D24CA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C864C19113E2EEBC_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
