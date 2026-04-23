#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

namespace System { class String; }

#define CLASS_2_F20997ACFDF53B1A_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x92B6F80)
#define CLASS_2_F20997ACFDF53B1A_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x92B6FD0)
#define CLASS_2_F20997ACFDF53B1A_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x92B7350)
#define CLASS_2_F20997ACFDF53B1A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x92B72F0)
#define CLASS_2_F20997ACFDF53B1A_METHOD_2_C03EB4DDBD7C2029_OFFSET UNITYSDK_OFFSET(0x92B7110)
#define CLASS_2_F20997ACFDF53B1A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92B6F90)
#define CLASS_2_F20997ACFDF53B1A__CTOR_OFFSET UNITYSDK_OFFSET(0x92B72E0)

inline static constexpr unsigned int Class_2_F20997ACFDF53B1A_TypeDefinitionIndex = 49538;

class Class_2_F20997ACFDF53B1A : public ::Class_1_C411A3DD6A930CFA
{
public:
	::System::String* Field_2_2; // 0x18
	::RPG::GameCore::AntiLockHPStrength Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x24
	::RPG::GameCore::FixPoint Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F20997ACFDF53B1A__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F20997ACFDF53B1A_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F20997ACFDF53B1A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F20997ACFDF53B1A_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_C03EB4DDBD7C2029(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F20997ACFDF53B1A_METHOD_2_C03EB4DDBD7C2029_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F20997ACFDF53B1A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F20997ACFDF53B1A_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
