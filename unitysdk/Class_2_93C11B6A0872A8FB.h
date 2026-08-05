#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_16.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_59.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_93C11B6A0872A8FB_METHOD_2_011FED32953F4A34_1_OFFSET UNITYSDK_OFFSET(0x11F07DA0)
#define CLASS_2_93C11B6A0872A8FB_METHOD_2_011FED32953F4A34_OFFSET UNITYSDK_OFFSET(0x11F07D80)
#define CLASS_2_93C11B6A0872A8FB_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11F07D90)
#define CLASS_2_93C11B6A0872A8FB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F078A0)

inline static constexpr unsigned int Class_2_93C11B6A0872A8FB_TypeDefinitionIndex = 11662;

class Class_2_93C11B6A0872A8FB : public ::Class_1_5DA2E7556103D5A3_16
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_2_0; // 0xA8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_59 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_59, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_93C11B6A0872A8FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_011FED32953F4A34()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C11B6A0872A8FB_METHOD_2_011FED32953F4A34_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C11B6A0872A8FB_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_011FED32953F4A34_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C11B6A0872A8FB_METHOD_2_011FED32953F4A34_1_OFFSET))(this);
	}
};
