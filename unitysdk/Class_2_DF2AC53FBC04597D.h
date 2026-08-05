#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_DF2AC53FBC04597D_METHOD_2_2C64889981DCAEA6_OFFSET UNITYSDK_OFFSET(0x123451D0)
#define CLASS_2_DF2AC53FBC04597D__CTOR_OFFSET UNITYSDK_OFFSET(0x12345180)

inline static constexpr unsigned int Class_2_DF2AC53FBC04597D_TypeDefinitionIndex = 71828;

class Class_2_DF2AC53FBC04597D : public ::System::EventArgs
{
public:
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF2AC53FBC04597D__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_2_2C64889981DCAEA6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF2AC53FBC04597D_METHOD_2_2C64889981DCAEA6_OFFSET))(this);
	}
};
