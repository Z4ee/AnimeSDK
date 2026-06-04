#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_INT64USERDATATESTDATA_GETINT64U_OFFSET UNITYSDK_OFFSET(0xBD3F620)
#define RPG_CLIENT_INT64USERDATATESTDATA_GETINT64_OFFSET UNITYSDK_OFFSET(0xBD3F6A0)
#define RPG_CLIENT_INT64USERDATATESTDATA_GETUINT64U_OFFSET UNITYSDK_OFFSET(0xBD3F660)
#define RPG_CLIENT_INT64USERDATATESTDATA_GETUINT64_OFFSET UNITYSDK_OFFSET(0xBD3F6E0)
#define RPG_CLIENT_INT64USERDATATESTDATA_TOINT64CHECK_OFFSET UNITYSDK_OFFSET(0xBD3F810)
#define RPG_CLIENT_INT64USERDATATESTDATA_TOINT64MAX_OFFSET UNITYSDK_OFFSET(0xBD3F770)
#define RPG_CLIENT_INT64USERDATATESTDATA_TOINT64MIN_OFFSET UNITYSDK_OFFSET(0xBD3F720)
#define RPG_CLIENT_INT64USERDATATESTDATA_TOINT64_OFFSET UNITYSDK_OFFSET(0xBD3F8B0)
#define RPG_CLIENT_INT64USERDATATESTDATA_TOUINT64CHECK_OFFSET UNITYSDK_OFFSET(0xBD3F860)
#define RPG_CLIENT_INT64USERDATATESTDATA_TOUINT64MAX_OFFSET UNITYSDK_OFFSET(0xBD3F7C0)
#define RPG_CLIENT_INT64USERDATATESTDATA_TOUINT64_OFFSET UNITYSDK_OFFSET(0xBD3F900)
#define RPG_CLIENT_INT64USERDATATESTDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD3F960)
#define RPG_CLIENT_INT64USERDATATESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD3F950)

namespace RPG::Client
{
	inline static constexpr unsigned int Int64UserDataTestData_TypeDefinitionIndex = 64947;

	class Int64UserDataTestData : public ::System::Object
	{
	public:
		static ::RPG::Client::Int64UserDataTestData** StaticGet_TestDataMul2()
		{
			return (::RPG::Client::Int64UserDataTestData**)Il2CppClass::FromTypeDefinitionIndex(Int64UserDataTestData_TypeDefinitionIndex)->GetStaticField(0xAF40);
		}
		static ::RPG::Client::Int64UserDataTestData** StaticGet_TestDataMax()
		{
			return (::RPG::Client::Int64UserDataTestData**)Il2CppClass::FromTypeDefinitionIndex(Int64UserDataTestData_TypeDefinitionIndex)->GetStaticField(0xAF48);
		}
		static ::RPG::Client::Int64UserDataTestData** StaticGet_TestDataDiv5()
		{
			return (::RPG::Client::Int64UserDataTestData**)Il2CppClass::FromTypeDefinitionIndex(Int64UserDataTestData_TypeDefinitionIndex)->GetStaticField(0xAF50);
		}
		static ::RPG::Client::Int64UserDataTestData** StaticGet_TestData()
		{
			return (::RPG::Client::Int64UserDataTestData**)Il2CppClass::FromTypeDefinitionIndex(Int64UserDataTestData_TypeDefinitionIndex)->GetStaticField(0xAF58);
		}
		static ::RPG::Client::Int64UserDataTestData** StaticGet_TestDataUnm()
		{
			return (::RPG::Client::Int64UserDataTestData**)Il2CppClass::FromTypeDefinitionIndex(Int64UserDataTestData_TypeDefinitionIndex)->GetStaticField(0xAF60);
		}
		static ::RPG::Client::Int64UserDataTestData** StaticGet_TestDataAdd1()
		{
			return (::RPG::Client::Int64UserDataTestData**)Il2CppClass::FromTypeDefinitionIndex(Int64UserDataTestData_TypeDefinitionIndex)->GetStaticField(0xAF68);
		}
		static ::RPG::Client::Int64UserDataTestData** StaticGet_TestDataMod3()
		{
			return (::RPG::Client::Int64UserDataTestData**)Il2CppClass::FromTypeDefinitionIndex(Int64UserDataTestData_TypeDefinitionIndex)->GetStaticField(0xAF70);
		}
		::System::Int64 int64; // 0x10
		::System::UInt64 uint64; // 0x18
		::System::UInt64 uint64u; // 0x20
		::System::Int64 int64u; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA__CCTOR_OFFSET))();
		}

		::System::Int64 GetInt64U()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_GETINT64U_OFFSET))(this);
		}

		::System::UInt64 GetUInt64U()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_GETUINT64U_OFFSET))(this);
		}

		::System::Int64 GetInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_GETINT64_OFFSET))(this);
		}

		::System::UInt64 GetUint64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_GETUINT64_OFFSET))(this);
		}

		::System::Void ToInt64Min(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_TOINT64MIN_OFFSET))(this, a1);
		}

		::System::Void ToInt64Max(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_TOINT64MAX_OFFSET))(this, a1);
		}

		::System::Void ToUint64Max(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_TOUINT64MAX_OFFSET))(this, a1);
		}

		::System::Void ToInt64Check(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_TOINT64CHECK_OFFSET))(this, a1, a2);
		}

		::System::Void ToUInt64Check(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_TOUINT64CHECK_OFFSET))(this, a1, a2);
		}

		::System::Void ToInt64(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_TOINT64_OFFSET))(this, a1);
		}

		::System::Void ToUInt64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_INT64USERDATATESTDATA_TOUINT64_OFFSET))(this, a1);
		}
	};
}
