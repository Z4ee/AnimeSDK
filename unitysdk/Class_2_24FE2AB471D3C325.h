#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_765BE772598E3A58.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_24FE2AB471D3C325__CTOR_OFFSET UNITYSDK_OFFSET(0x154A1370)

inline static constexpr unsigned int Class_2_24FE2AB471D3C325_TypeDefinitionIndex = 48118;

class Class_2_24FE2AB471D3C325 : public ::System::EventArgs
{
public:
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Enum_3_765BE772598E3A58 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24FE2AB471D3C325__CTOR_OFFSET))(this);
	}
};
