#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_84.h"
#include "unitysdk/Enum_3_75B6C8C41019010E_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1821F2B3B090A424_METHOD_1_3E35C648C65409C9_OFFSET UNITYSDK_OFFSET(0x85AB190)

inline static constexpr unsigned int Class_1_1821F2B3B090A424_TypeDefinitionIndex = 37586;

class Class_1_1821F2B3B090A424 : public ::System::Object
{
public:
	static ::Enum_3_0A3761FE34514D6C_84 Method_1_3E35C648C65409C9(::Enum_3_75B6C8C41019010E_1 cmdType, ::System::IntPtr data, ::System::Int32 size)
	{
		return ((::Enum_3_0A3761FE34514D6C_84(*)(::Enum_3_75B6C8C41019010E_1, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1821F2B3B090A424_METHOD_1_3E35C648C65409C9_OFFSET))(cmdType, data, size);
	}
};
