#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbilityModifierApplier; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C30E0E115DF81A79_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x188DE1C0)
#define CLASS_2_C30E0E115DF81A79_METHOD_2_41AFF98B456871F8_OFFSET UNITYSDK_OFFSET(0x188DE0D0)
#define CLASS_2_C30E0E115DF81A79_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x188DE270)
#define CLASS_2_C30E0E115DF81A79_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x188DDF20)
#define CLASS_2_C30E0E115DF81A79_METHOD_2_82783748A4AF28A3_OFFSET UNITYSDK_OFFSET(0x188DDF90)
#define CLASS_2_C30E0E115DF81A79_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188DE220)
#define CLASS_2_C30E0E115DF81A79__CTOR_OFFSET UNITYSDK_OFFSET(0x188DDE90)

inline static constexpr unsigned int Class_2_C30E0E115DF81A79_TypeDefinitionIndex = 77437;

class Class_2_C30E0E115DF81A79 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbilityModifierApplier* BMNKALMLGFP; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_C30E0E115DF81A79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C30E0E115DF81A79_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C30E0E115DF81A79_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_82783748A4AF28A3()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C30E0E115DF81A79_METHOD_2_82783748A4AF28A3_OFFSET))(this);
	}

	::System::Void Method_2_41AFF98B456871F8(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C30E0E115DF81A79_METHOD_2_41AFF98B456871F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C30E0E115DF81A79_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C30E0E115DF81A79_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}
};
