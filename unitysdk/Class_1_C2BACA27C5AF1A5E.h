#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C2BACA27C5AF1A5E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155566B0)
#define CLASS_1_C2BACA27C5AF1A5E_METHOD_1_24934BA96EA9EBB0_OFFSET UNITYSDK_OFFSET(0x15556620)
#define CLASS_1_C2BACA27C5AF1A5E_METHOD_1_BB7A1049F84E8127_OFFSET UNITYSDK_OFFSET(0x15556700)
#define CLASS_1_C2BACA27C5AF1A5E__CTOR_OFFSET UNITYSDK_OFFSET(0x155566F0)

inline static constexpr unsigned int Class_1_C2BACA27C5AF1A5E_TypeDefinitionIndex = 75410;

class Class_1_C2BACA27C5AF1A5E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2BACA27C5AF1A5E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_24934BA96EA9EBB0(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_1_C2BACA27C5AF1A5E_METHOD_1_24934BA96EA9EBB0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2BACA27C5AF1A5E_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_C2BACA27C5AF1A5E* Method_1_BB7A1049F84E8127()
	{
		return ((::Class_1_C2BACA27C5AF1A5E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2BACA27C5AF1A5E_METHOD_1_BB7A1049F84E8127_OFFSET))();
	}
};
