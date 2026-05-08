#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2B6D4F00131B4879_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115B69C0)
#define CLASS_1_2B6D4F00131B4879_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x115B6860)
#define CLASS_1_2B6D4F00131B4879_EQUALS_OFFSET UNITYSDK_OFFSET(0x115B67B0)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_0D771ED379BBF670_OFFSET UNITYSDK_OFFSET(0x115B6F60)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_5055E1A5000CF422_OFFSET UNITYSDK_OFFSET(0x115B6A20)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_9D1FB11C5C24E13D_OFFSET UNITYSDK_OFFSET(0x115B6E20)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_AA0EFBB13088BA5E_OFFSET UNITYSDK_OFFSET(0x115B7250)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x115B6A10)
#define CLASS_1_2B6D4F00131B4879__CTOR_OFFSET UNITYSDK_OFFSET(0x115B6A00)

inline static constexpr unsigned int Class_1_2B6D4F00131B4879_TypeDefinitionIndex = 82645;

class Class_1_2B6D4F00131B4879 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_1_5; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_2B6D4F00131B4879* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2B6D4F00131B4879*))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_1_5055E1A5000CF422()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_5055E1A5000CF422_OFFSET))(this);
	}

	::System::Boolean Method_1_0D771ED379BBF670()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_0D771ED379BBF670_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_AA0EFBB13088BA5E()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_AA0EFBB13088BA5E_OFFSET))(this);
	}

	::System::Int32 Method_1_9D1FB11C5C24E13D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_9D1FB11C5C24E13D_OFFSET))(this);
	}
};
