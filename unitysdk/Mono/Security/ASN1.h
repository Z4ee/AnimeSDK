#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_ASN1_ADD_OFFSET UNITYSDK_OFFSET(0x1D2397A0)
#define MONO_SECURITY_ASN1_COMPAREARRAY_OFFSET UNITYSDK_OFFSET(0x1D2396C0)
#define MONO_SECURITY_ASN1_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x1D239730)
#define MONO_SECURITY_ASN1_DECODETLV_OFFSET UNITYSDK_OFFSET(0x1D23A2F0)
#define MONO_SECURITY_ASN1_DECODE_OFFSET UNITYSDK_OFFSET(0x1D2392C0)
#define MONO_SECURITY_ASN1_ELEMENT_OFFSET UNITYSDK_OFFSET(0x1D23A5D0)
#define MONO_SECURITY_ASN1_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1D239880)
#define MONO_SECURITY_ASN1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D2393D0)
#define MONO_SECURITY_ASN1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D23A3E0)
#define MONO_SECURITY_ASN1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D239470)
#define MONO_SECURITY_ASN1_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1D239460)
#define MONO_SECURITY_ASN1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D239480)
#define MONO_SECURITY_ASN1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D2395E0)
#define MONO_SECURITY_ASN1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D23A7E0)
#define MONO_SECURITY_ASN1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D239150)
#define MONO_SECURITY_ASN1__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D239160)
#define MONO_SECURITY_ASN1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D239140)

namespace Mono::Security
{
	inline static constexpr unsigned int ASN1_TypeDefinitionIndex = 2257;

	class ASN1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* m_aValue; // 0x10
		::System::Collections::ArrayList* elist; // 0x18
		::System::Byte m_nTag; // 0x20

		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Byte a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1__CTOR_2_OFFSET))(this, a1);
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

		::System::Void set_Value(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean CompareArray(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_COMPAREARRAY_OFFSET))(this, a1, a2);
		}

		::System::Boolean CompareValue(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_COMPAREVALUE_OFFSET))(this, a1);
		}

		::Mono::Security::ASN1* Add(::Mono::Security::ASN1* a1)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_ADD_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GETBYTES_OFFSET))(this);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_DECODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DecodeTLV(::Il2CppArray<::System::Byte>* a1, ::System::Int32& a2, ::System::Byte& a3, ::System::Int32& a4, ::Il2CppArray<::System::Byte>*& a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Byte&, ::System::Int32&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_DECODETLV_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Mono::Security::ASN1* get_Item(::System::Int32 a1)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_GET_ITEM_OFFSET))(this, a1);
		}

		::Mono::Security::ASN1* Element(::System::Int32 a1, ::System::Byte a2)
		{
			return ((::Mono::Security::ASN1*(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_ELEMENT_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_ASN1_TOSTRING_OFFSET))(this);
		}
	};
}
