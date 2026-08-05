#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

#define CLASS_2_E5D77D01FFB55CB5_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1191E2E0)
#define CLASS_2_E5D77D01FFB55CB5_METHOD_2_BE2041E26617FAD2_OFFSET UNITYSDK_OFFSET(0x1191E370)
#define CLASS_2_E5D77D01FFB55CB5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1191E460)
#define CLASS_2_E5D77D01FFB55CB5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1191E260)
#define CLASS_2_E5D77D01FFB55CB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1191E2D0)

inline static constexpr unsigned int Class_2_E5D77D01FFB55CB5_TypeDefinitionIndex = 63586;

class Class_2_E5D77D01FFB55CB5 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x74; // 0x0
	::Foundation::Unreal::FGameplayTagContainer Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E5D77D01FFB55CB5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5D77D01FFB55CB5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5D77D01FFB55CB5_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_BE2041E26617FAD2(::System::UInt32 a1, ::Foundation::Unreal::FGameplayTagContainer a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_2_E5D77D01FFB55CB5_METHOD_2_BE2041E26617FAD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5D77D01FFB55CB5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
