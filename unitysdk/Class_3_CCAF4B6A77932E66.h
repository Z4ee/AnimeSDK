#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

#define CLASS_3_CCAF4B6A77932E66_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x141B00A0)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_2C0792A683B02482_OFFSET UNITYSDK_OFFSET(0x141B06C0)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x141B0420)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_527C2A55F08B8A10_OFFSET UNITYSDK_OFFSET(0x141B01F0)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x141B04F0)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x141B0470)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_1_OFFSET UNITYSDK_OFFSET(0x141B0890)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_OFFSET UNITYSDK_OFFSET(0x141B0580)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x141B0180)
#define CLASS_3_CCAF4B6A77932E66_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x141AFFF0)
#define CLASS_3_CCAF4B6A77932E66__CCTOR_OFFSET UNITYSDK_OFFSET(0x141B00F0)
#define CLASS_3_CCAF4B6A77932E66__CTOR_OFFSET UNITYSDK_OFFSET(0x141B0170)

inline static constexpr unsigned int Class_3_CCAF4B6A77932E66_TypeDefinitionIndex = 57874;

class Class_3_CCAF4B6A77932E66 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0xA8; // 0x0
	::Foundation::Unreal::FGameplayTagContainer Field_3_1; // 0x48
	::System::Boolean Field_3_6; // 0xB8
	::System::Boolean Field_3_0; // 0xB9
	::System::Boolean Field_3_7; // 0xBA

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Boolean Method_3_527C2A55F08B8A10(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_527C2A55F08B8A10_OFFSET))(this, a1, a2);
	}

	static ::Class_3_CCAF4B6A77932E66* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CCAF4B6A77932E66*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_E01BB7CD312B061C(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2C0792A683B02482(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_2C0792A683B02482_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E01BB7CD312B061C_1(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
