#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1_EQUALS_OFFSET UNITYSDK_OFFSET(0xDBBE0)
#define RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDBBF0)
#define RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDBC40)
#define RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDBCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_Struct_2_4753009D0AD89794_1_TypeDefinitionIndex = 65190;

	struct alignas(4) PlaneSlice_Struct_2_4753009D0AD89794_1
	{
		::System::Int32 Field_2_0; // 0x10
		::System::Int32 Field_2_1; // 0x14

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_4753009D0AD89794_1___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
