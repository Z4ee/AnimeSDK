#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_133;

#define CLASS_1_DE601460570FED96_METHOD_1_38057D02FCD18567_OFFSET UNITYSDK_OFFSET(0x123EF2A0)
#define CLASS_1_DE601460570FED96_METHOD_1_500001E3D10E908C_OFFSET UNITYSDK_OFFSET(0x123EF190)
#define CLASS_1_DE601460570FED96_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x123EF180)
#define CLASS_1_DE601460570FED96__CTOR_OFFSET UNITYSDK_OFFSET(0x123EF780)

inline static constexpr unsigned int Class_1_DE601460570FED96_TypeDefinitionIndex = 65314;

class Class_1_DE601460570FED96 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE601460570FED96__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE601460570FED96_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Enum_3_13256E311AF13FFD Method_1_500001E3D10E908C(::System::Int32 a1, ::Class_0_16E4307DCC419505_133* a2)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + CLASS_1_DE601460570FED96_METHOD_1_500001E3D10E908C_OFFSET))(this, a1, a2);
	}

	::Enum_3_13256E311AF13FFD Method_1_38057D02FCD18567(::System::Int32 a1, ::Class_0_16E4307DCC419505_133* a2)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_133*))((::PBYTE)hIl2Cpp + CLASS_1_DE601460570FED96_METHOD_1_38057D02FCD18567_OFFSET))(this, a1, a2);
	}
};
