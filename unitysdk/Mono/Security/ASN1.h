#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_ASN1_ADD_OFFSET UNITYSDK_OFFSET(0x17763410)
#define MONO_SECURITY_ASN1_COMPAREARRAY_OFFSET UNITYSDK_OFFSET(0x17763330)
#define MONO_SECURITY_ASN1_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x177633A0)
#define MONO_SECURITY_ASN1_DECODETLV_OFFSET UNITYSDK_OFFSET(0x17763C10)
#define MONO_SECURITY_ASN1_DECODE_OFFSET UNITYSDK_OFFSET(0x17762FC0)
#define MONO_SECURITY_ASN1_ELEMENT_OFFSET UNITYSDK_OFFSET(0x17763E20)
#define MONO_SECURITY_ASN1_GETBYTES_OFFSET UNITYSDK_OFFSET(0x17763490)
#define MONO_SECURITY_ASN1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x17763120)
#define MONO_SECURITY_ASN1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17763D20)
#define MONO_SECURITY_ASN1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x17763150)
#define MONO_SECURITY_ASN1_GET_TAG_OFFSET UNITYSDK_OFFSET(0x17763140)
#define MONO_SECURITY_ASN1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17763160)
#define MONO_SECURITY_ASN1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17763250)
#define MONO_SECURITY_ASN1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17763F30)
#define MONO_SECURITY_ASN1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17762E30)
#define MONO_SECURITY_ASN1__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17762E40)
#define MONO_SECURITY_ASN1__CTOR_OFFSET UNITYSDK_OFFSET(0x17762E20)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1_TypeDefinitionIndex = 2246;

	class ASN1 : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* elist; // 0x10
		::Il2CppArray<::System::Byte>* m_aValue; // 0x18
		::System::Byte m_nTag; // 0x20

		::System::Void _ctor(::System::Byte tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1__CTOR_OFFSET))(this, tag);
		}

		::System::Void _ctor_1(::System::Byte tag, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1__CTOR_1_OFFSET))(this, tag, data);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1__CTOR_2_OFFSET))(this, data);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_COUNT_OFFSET))(this);
		}

		::System::Byte get_Tag()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_TAG_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_LENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Value()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean CompareArray(::Il2CppArray<::System::Byte>* array1, ::Il2CppArray<::System::Byte>* array2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_COMPAREARRAY_OFFSET))(this, array1, array2);
		}

		::System::Boolean CompareValue(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_COMPAREVALUE_OFFSET))(this, value);
		}

		::Mono::Security::ASN1* Add(::Mono::Security::ASN1* asn1)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_ADD_OFFSET))(this, asn1);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GETBYTES_OFFSET))(this);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* asn1, ::System::Int32& anPos, ::System::Int32 anLength)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_DECODE_OFFSET))(this, asn1, anPos, anLength);
		}

		::System::Void DecodeTLV(::Il2CppArray<::System::Byte>* asn1, ::System::Int32& pos, ::System::Byte& tag, ::System::Int32& length, ::Il2CppArray<::System::Byte>*& content)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Byte&, ::System::Int32&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_DECODETLV_OFFSET))(this, asn1, pos, tag, length, content);
		}

		::Mono::Security::ASN1* get_Item(::System::Int32 index)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_ITEM_OFFSET))(this, index);
		}

		::Mono::Security::ASN1* Element(::System::Int32 index, ::System::Byte anTag)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_ELEMENT_OFFSET))(this, index, anTag);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_TOSTRING_OFFSET))(this);
		}
	};
}
