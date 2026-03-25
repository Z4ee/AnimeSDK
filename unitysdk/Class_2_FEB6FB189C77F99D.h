#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbilityModifierApplier; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FEB6FB189C77F99D_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9C67C90)
#define CLASS_2_FEB6FB189C77F99D_METHOD_2_41AFF98B456871F8_OFFSET UNITYSDK_OFFSET(0x9C67B90)
#define CLASS_2_FEB6FB189C77F99D_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9C67D40)
#define CLASS_2_FEB6FB189C77F99D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9C67A60)
#define CLASS_2_FEB6FB189C77F99D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9C67DA0)
#define CLASS_2_FEB6FB189C77F99D_METHOD_2_71C92BBCBCD2012C_OFFSET UNITYSDK_OFFSET(0x9C67AD0)
#define CLASS_2_FEB6FB189C77F99D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C67CF0)
#define CLASS_2_FEB6FB189C77F99D__CTOR_OFFSET UNITYSDK_OFFSET(0x9C679D0)

inline static constexpr unsigned int Class_2_FEB6FB189C77F99D_TypeDefinitionIndex = 63366;

class Class_2_FEB6FB189C77F99D : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbilityModifierApplier* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_71C92BBCBCD2012C()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D_METHOD_2_71C92BBCBCD2012C_OFFSET))(this);
	}

	::System::Void Method_2_41AFF98B456871F8(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D_METHOD_2_41AFF98B456871F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB6FB189C77F99D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
