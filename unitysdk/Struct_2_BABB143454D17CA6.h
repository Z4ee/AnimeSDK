#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleTeamType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_BABB143454D17CA6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AE71E0)
#define STRUCT_2_BABB143454D17CA6_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AE7170)
#define STRUCT_2_BABB143454D17CA6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AE7160)
#define STRUCT_2_BABB143454D17CA6_METHOD_2_726D00087F5202C3_1_OFFSET UNITYSDK_OFFSET(0x18A25A70)
#define STRUCT_2_BABB143454D17CA6_METHOD_2_726D00087F5202C3_OFFSET UNITYSDK_OFFSET(0x18A259B0)
#define STRUCT_2_BABB143454D17CA6__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

inline static constexpr unsigned int Struct_2_BABB143454D17CA6_TypeDefinitionIndex = 63916;

struct alignas(4) Struct_2_BABB143454D17CA6
{
	::System::UInt32 AHNBPKAGAIL; // 0x10
	::System::UInt32 HHFINENIGFL; // 0x14
	::RPG::Client::ExpeditionBattleTeamType GMPGDEINODK; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::ExpeditionBattleTeamType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::ExpeditionBattleTeamType))((::PBYTE)hIl2Cpp + STRUCT_2_BABB143454D17CA6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BABB143454D17CA6_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_BABB143454D17CA6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BABB143454D17CA6))((::PBYTE)hIl2Cpp + STRUCT_2_BABB143454D17CA6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BABB143454D17CA6_EQUALS_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_726D00087F5202C3(::Struct_2_BABB143454D17CA6 a1, ::Struct_2_BABB143454D17CA6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BABB143454D17CA6, ::Struct_2_BABB143454D17CA6))((::PBYTE)hIl2Cpp + STRUCT_2_BABB143454D17CA6_METHOD_2_726D00087F5202C3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_726D00087F5202C3_1(::Struct_2_BABB143454D17CA6 a1, ::Struct_2_BABB143454D17CA6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BABB143454D17CA6, ::Struct_2_BABB143454D17CA6))((::PBYTE)hIl2Cpp + STRUCT_2_BABB143454D17CA6_METHOD_2_726D00087F5202C3_1_OFFSET))(a1, a2);
	}
};
