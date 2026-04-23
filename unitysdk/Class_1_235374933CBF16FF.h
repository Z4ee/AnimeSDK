#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatAbilityState.h"
#include "unitysdk/System/Object.h"

class Class_2_305B57DBA79213AA;
class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatAbilityConfig; }

#define CLASS_1_235374933CBF16FF_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17D73670)
#define CLASS_1_235374933CBF16FF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17D73A00)
#define CLASS_1_235374933CBF16FF_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x17D73920)
#define CLASS_1_235374933CBF16FF_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x17D73780)
#define CLASS_1_235374933CBF16FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D739B0)
#define CLASS_1_235374933CBF16FF__CTOR_OFFSET UNITYSDK_OFFSET(0x17D735A0)

inline static constexpr unsigned int Class_1_235374933CBF16FF_TypeDefinitionIndex = 34252;

class Class_1_235374933CBF16FF : public ::System::Object
{
public:
	::Class_2_305B57DBA79213AA* Field_1_3; // 0x10
	::Class_2_843468DEB2C89684* Field_1_1; // 0x18
	::RPG::GameCore::DiceCombatAbilityConfig* Field_1_0; // 0x20
	::Class_2_305B57DBA79213AA* Field_1_4; // 0x28
	::RPG::LittleGameShare::DiceCombatCore::DiceCombatAbilityState Field_1_2; // 0x30

	::System::Void _ctor(::Class_2_843468DEB2C89684* a1, ::RPG::GameCore::DiceCombatAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_843468DEB2C89684*, ::RPG::GameCore::DiceCombatAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_235374933CBF16FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235374933CBF16FF_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235374933CBF16FF_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_235374933CBF16FF_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235374933CBF16FF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_235374933CBF16FF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
