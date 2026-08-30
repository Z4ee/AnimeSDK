#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_EBD47A6A04BEEE4E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B7B210)
#define STRUCT_2_EBD47A6A04BEEE4E_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7B130)
#define STRUCT_2_EBD47A6A04BEEE4E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B7B200)
#define STRUCT_2_EBD47A6A04BEEE4E_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3B7B0C0)
#define STRUCT_2_EBD47A6A04BEEE4E_METHOD_2_48E22455E87DF248_OFFSET UNITYSDK_OFFSET(0x1C3CBFF0)
#define STRUCT_2_EBD47A6A04BEEE4E_METHOD_2_D55AB896F0A2394E_OFFSET UNITYSDK_OFFSET(0x1C3CBF70)

inline static constexpr unsigned int Struct_2_EBD47A6A04BEEE4E_TypeDefinitionIndex = 41642;

struct alignas(8) Struct_2_EBD47A6A04BEEE4E
{
	::System::String* AHCPFFKPOMG; // 0x10
	::System::Boolean PNBBENOEEIC; // 0x18
	::UnityEngine::Vector2Int HOFDLLGGMLE; // 0x1C

	static ::Struct_2_EBD47A6A04BEEE4E Method_2_D55AB896F0A2394E(::System::String* a1)
	{
		return ((::Struct_2_EBD47A6A04BEEE4E(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_EBD47A6A04BEEE4E_METHOD_2_D55AB896F0A2394E_OFFSET))(a1);
	}

	static ::Struct_2_EBD47A6A04BEEE4E Method_2_48E22455E87DF248(::System::String* a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::Struct_2_EBD47A6A04BEEE4E(*)(::System::String*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_EBD47A6A04BEEE4E_METHOD_2_48E22455E87DF248_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EBD47A6A04BEEE4E_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_EBD47A6A04BEEE4E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_EBD47A6A04BEEE4E))((::PBYTE)hIl2Cpp + STRUCT_2_EBD47A6A04BEEE4E_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EBD47A6A04BEEE4E_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_EBD47A6A04BEEE4E_EQUALS_1_OFFSET))(this, a1);
	}
};
