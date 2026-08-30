#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BDD5FBBF6DBFFD8D_METHOD_2_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x3AE3330)
#define STRUCT_2_BDD5FBBF6DBFFD8D_METHOD_2_B87DD725F435ED7B_OFFSET UNITYSDK_OFFSET(0x3AE3320)
#define STRUCT_2_BDD5FBBF6DBFFD8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x186B86F0)

inline static constexpr unsigned int Struct_2_BDD5FBBF6DBFFD8D_TypeDefinitionIndex = 73116;

struct alignas(8) Struct_2_BDD5FBBF6DBFFD8D
{
	static ::Struct_2_BDD5FBBF6DBFFD8D* StaticGet_NKHLMJGGKEM()
	{
		return (::Struct_2_BDD5FBBF6DBFFD8D*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BDD5FBBF6DBFFD8D_TypeDefinitionIndex)->GetStaticField(0x20EE0);
	}
	::System::UInt64 BFLIFKBEOPJ; // 0x10
	::System::UInt64 MFGNBMNJPGP; // 0x18
	::Il2CppArray<::System::Byte>* OJJLJDNKBEJ; // 0x20
	::RPG::GameCore::VideoEncryptionMethod BMGKFAIOCAA; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_BDD5FBBF6DBFFD8D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_B87DD725F435ED7B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BDD5FBBF6DBFFD8D_METHOD_2_B87DD725F435ED7B_OFFSET))(this);
	}

	::System::Boolean Method_2_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BDD5FBBF6DBFFD8D_METHOD_2_B078C58C2CD24B5E_OFFSET))(this);
	}
};
