#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_STRUCT_2_B2D09F598F62D749_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x158B40)
#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_STRUCT_2_B2D09F598F62D749_EQUALS_OFFSET UNITYSDK_OFFSET(0x158AE0)
#define RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_STRUCT_2_B2D09F598F62D749_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x158B50)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MeshSelfIntersectionDebugger_Struct_2_B2D09F598F62D749_TypeDefinitionIndex = 73530;

	struct alignas(4) MeshSelfIntersectionDebugger_Struct_2_B2D09F598F62D749
	{
		::System::Int32 IODCJHMDGFH; // 0x10
		::System::Int32 ACICDNHCLIB; // 0x14

		::System::Boolean Equals(::RPG::Client::TAUtils::MeshSelfIntersectionDebugger_Struct_2_B2D09F598F62D749 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::MeshSelfIntersectionDebugger_Struct_2_B2D09F598F62D749))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_STRUCT_2_B2D09F598F62D749_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_STRUCT_2_B2D09F598F62D749_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MESHSELFINTERSECTIONDEBUGGER_STRUCT_2_B2D09F598F62D749_GETHASHCODE_OFFSET))(this);
		}
	};
}
