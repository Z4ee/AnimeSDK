#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x39EC5C0)
#define RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39EC5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_Struct_2_09F187266BCD97E7_1_TypeDefinitionIndex = 67542;

	struct alignas(4) PlaneSlice_Struct_2_09F187266BCD97E7_1
	{
		::System::Int32 Field_2_0; // 0x10
		::System::Int32 Field_2_1; // 0x14

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1_GETHASHCODE_OFFSET))(this);
		}
	};
}
