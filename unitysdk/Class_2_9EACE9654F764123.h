#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_56.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_208.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_9EACE9654F764123_METHOD_2_9BE2513CD38A5F3E_OFFSET UNITYSDK_OFFSET(0x13BE30E0)
#define CLASS_2_9EACE9654F764123__CTOR_OFFSET UNITYSDK_OFFSET(0x13BE2810)

inline static constexpr unsigned int Class_2_9EACE9654F764123_TypeDefinitionIndex = 9455;

class Class_2_9EACE9654F764123 : public ::Class_1_5DA2E7556103D5A3_56
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_2_1; // 0x88
	::Foundation::Unreal::FGameplayTagContainer Field_2_0; // 0xF8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_208 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_208, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_9EACE9654F764123__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_9BE2513CD38A5F3E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EACE9654F764123_METHOD_2_9BE2513CD38A5F3E_OFFSET))(this);
	}
};
