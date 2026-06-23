#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

#define CLASS_3_CCAF4B6A77932E66_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19016480)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_2C0792A683B02482_OFFSET UNITYSDK_OFFSET(0x19016A20)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x19016780)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19016560)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_527C2A55F08B8A10_OFFSET UNITYSDK_OFFSET(0x190167F0)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x190165B0)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x19016D30)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_1_OFFSET UNITYSDK_OFFSET(0x19016BF0)
#define CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_OFFSET UNITYSDK_OFFSET(0x19016640)
#define CLASS_3_CCAF4B6A77932E66_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x190163D0)
#define CLASS_3_CCAF4B6A77932E66__CCTOR_OFFSET UNITYSDK_OFFSET(0x190164D0)
#define CLASS_3_CCAF4B6A77932E66__CTOR_OFFSET UNITYSDK_OFFSET(0x19016550)

inline static constexpr unsigned int Class_3_CCAF4B6A77932E66_TypeDefinitionIndex = 86604;

class Class_3_CCAF4B6A77932E66 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xA7; // 0x0
	::Foundation::Unreal::FGameplayTagContainer Field_3_0; // 0x48
	::System::Boolean Field_3_1; // 0xB8
	::System::Boolean Field_3_3; // 0xB9
	::System::Boolean Field_3_2; // 0xBA

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

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_E01BB7CD312B061C(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_3_527C2A55F08B8A10(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_527C2A55F08B8A10_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2C0792A683B02482(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_2C0792A683B02482_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E01BB7CD312B061C_1(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_E01BB7CD312B061C_1_OFFSET))(this, a1, a2);
	}

	static ::Class_3_CCAF4B6A77932E66* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CCAF4B6A77932E66*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CCAF4B6A77932E66_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
