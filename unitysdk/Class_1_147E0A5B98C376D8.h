#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_85.h"
#include "unitysdk/Enum_3_75B6C8C41019010E.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_147E0A5B98C376D8_METHOD_1_E47506C1B1D6F2CC_OFFSET UNITYSDK_OFFSET(0x8DE1120)

inline static constexpr unsigned int Class_1_147E0A5B98C376D8_TypeDefinitionIndex = 43463;

class Class_1_147E0A5B98C376D8 : public ::System::Object
{
public:
	static ::Enum_3_0A3761FE34514D6C_85 Method_1_E47506C1B1D6F2CC(::Enum_3_75B6C8C41019010E cmdType, ::System::IntPtr data, ::System::Int32 size)
	{
		return ((::Enum_3_0A3761FE34514D6C_85(*)(::Enum_3_75B6C8C41019010E, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_147E0A5B98C376D8_METHOD_1_E47506C1B1D6F2CC_OFFSET))(cmdType, data, size);
	}
};
