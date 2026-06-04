#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x140CE0)
#define RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x140CF0)
#define RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x140D40)
#define RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x140DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_Struct_2_09F187266BCD97E7_1_TypeDefinitionIndex = 66117;

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

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_09F187266BCD97E7_1___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
