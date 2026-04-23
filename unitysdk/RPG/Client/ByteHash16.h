#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_BYTEHASH16_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22AF7F0)
#define RPG_CLIENT_BYTEHASH16_EQUALS_OFFSET UNITYSDK_OFFSET(0x22AF770)
#define RPG_CLIENT_BYTEHASH16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22AF800)
#define RPG_CLIENT_BYTEHASH16_METHOD_2_16CE6C53D61BC7E4_OFFSET UNITYSDK_OFFSET(0x17B80FA0)
#define RPG_CLIENT_BYTEHASH16_METHOD_2_47481B30F0B839BD_OFFSET UNITYSDK_OFFSET(0x17B81020)
#define RPG_CLIENT_BYTEHASH16_METHOD_2_7DC101B0AF1C5A10_OFFSET UNITYSDK_OFFSET(0x22AF6E0)
#define RPG_CLIENT_BYTEHASH16_METHOD_2_AC64FAF78AE39F81_OFFSET UNITYSDK_OFFSET(0x22AF6D0)
#define RPG_CLIENT_BYTEHASH16_METHOD_2_AD926EDA52F5878B_OFFSET UNITYSDK_OFFSET(0x22AF760)
#define RPG_CLIENT_BYTEHASH16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AF750)
#define RPG_CLIENT_BYTEHASH16__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B810A0)
#define RPG_CLIENT_BYTEHASH16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22AF6C0)
#define RPG_CLIENT_BYTEHASH16__CTOR_OFFSET UNITYSDK_OFFSET(0x76020)
#define RPG_CLIENT_BYTEHASH16___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22AF8C0)
#define RPG_CLIENT_BYTEHASH16___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22AF900)
#define RPG_CLIENT_BYTEHASH16___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AF860)

namespace RPG::Client
{
	inline static constexpr unsigned int ByteHash16_TypeDefinitionIndex = 37679;

	struct alignas(4) ByteHash16
	{
		static ::Il2CppArray<::System::Byte>** StaticGet__ByteArray()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ByteHash16_TypeDefinitionIndex)->GetStaticField(0x1130);
		}
		static ::RPG::Client::ByteHash16* StaticGet_ZERO()
		{
			return (::RPG::Client::ByteHash16*)Il2CppClass::FromTypeDefinitionIndex(ByteHash16_TypeDefinitionIndex)->GetStaticField(0xF90);
		}
		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ByteHash16_TypeDefinitionIndex)->GetStaticField(0xFA0);
		}
		::System::UInt32 _HashA; // 0x10
		::System::UInt32 _HashB; // 0x14
		::System::UInt32 _HashC; // 0x18
		::System::UInt32 _HashD; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* Method_2_AC64FAF78AE39F81()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_METHOD_2_AC64FAF78AE39F81_OFFSET))(this);
		}

		::System::Void Method_2_7DC101B0AF1C5A10(::System::Byte* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_METHOD_2_7DC101B0AF1C5A10_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_AD926EDA52F5878B(::System::Byte* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_METHOD_2_AD926EDA52F5878B_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::ByteHash16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_2_16CE6C53D61BC7E4(::RPG::Client::ByteHash16 a1, ::RPG::Client::ByteHash16 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ByteHash16, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_METHOD_2_16CE6C53D61BC7E4_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_47481B30F0B839BD(::RPG::Client::ByteHash16 a1, ::RPG::Client::ByteHash16 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ByteHash16, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16_METHOD_2_47481B30F0B839BD_OFFSET))(a1, a2);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYTEHASH16___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
