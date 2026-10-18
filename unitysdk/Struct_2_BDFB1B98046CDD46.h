#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }

#define STRUCT_2_BDFB1B98046CDD46_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C29660)
#define STRUCT_2_BDFB1B98046CDD46_METHOD_2_98906002E322F7BC_OFFSET UNITYSDK_OFFSET(0x3C29750)
#define STRUCT_2_BDFB1B98046CDD46_METHOD_2_D2C3F89A0D55669A_OFFSET UNITYSDK_OFFSET(0x3C296E0)
#define STRUCT_2_BDFB1B98046CDD46_METHOD_2_D6FB64E8356E7B4B_OFFSET UNITYSDK_OFFSET(0x3C297C0)
#define STRUCT_2_BDFB1B98046CDD46_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C296D0)
#define STRUCT_2_BDFB1B98046CDD46__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C29640)
#define STRUCT_2_BDFB1B98046CDD46__CTOR_OFFSET UNITYSDK_OFFSET(0x140C0)

inline static constexpr unsigned int Struct_2_BDFB1B98046CDD46_TypeDefinitionIndex = 41831;

struct alignas(4) Struct_2_BDFB1B98046CDD46
{
	::UnityEngine::Vector2Int BBFOLEOPPPL; // 0x10
	::RPG::Client::MechCraft::MechCraftRotationType NMELCPIOKNO; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2Int a1, ::RPG::Client::MechCraft::MechCraftRotationType a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + STRUCT_2_BDFB1B98046CDD46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::MechCraft::MechCraftRotationType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + STRUCT_2_BDFB1B98046CDD46__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Equals(::Struct_2_BDFB1B98046CDD46 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + STRUCT_2_BDFB1B98046CDD46_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BDFB1B98046CDD46_TOSTRING_OFFSET))(this);
	}

	::Struct_2_BDFB1B98046CDD46 Method_2_D2C3F89A0D55669A(::UnityEngine::Vector2Int a1)
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_BDFB1B98046CDD46_METHOD_2_D2C3F89A0D55669A_OFFSET))(this, a1);
	}

	::Struct_2_BDFB1B98046CDD46 Method_2_98906002E322F7BC(::RPG::Client::MechCraft::MechCraftRotationType a1)
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + STRUCT_2_BDFB1B98046CDD46_METHOD_2_98906002E322F7BC_OFFSET))(this, a1);
	}

	/*
	::Struct_2_BDFB1B98046CDD46 Method_2_D6FB64E8356E7B4B(::System::Nullable_1<::UnityEngine::Vector2Int> a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType> a2)
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType>))((::PBYTE)hIl2Cpp + STRUCT_2_BDFB1B98046CDD46_METHOD_2_D6FB64E8356E7B4B_OFFSET))(this, a1, a2);
	}
	*/
};
