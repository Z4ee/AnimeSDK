#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatAbilityState.h"
#include "unitysdk/System/Object.h"

class Class_2_48488E8DBD9F6BCE;
class Class_2_85F04A82B3DCEB31;
namespace RPG::GameCore { class DiceCombatAbilityConfig; }

#define CLASS_1_235374933CBF16FF_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1C0A5ED0)
#define CLASS_1_235374933CBF16FF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C0A6640)
#define CLASS_1_235374933CBF16FF_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x1C0A6290)
#define CLASS_1_235374933CBF16FF_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1C0A6090)
#define CLASS_1_235374933CBF16FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C0A65F0)
#define CLASS_1_235374933CBF16FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A5CA0)

inline static constexpr unsigned int Class_1_235374933CBF16FF_TypeDefinitionIndex = 35777;

class Class_1_235374933CBF16FF : public ::System::Object
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x10
	::Class_2_85F04A82B3DCEB31* PPCEGDLCPJH; // 0x18
	::Class_2_85F04A82B3DCEB31* OJEHBOBEDHL; // 0x20
	::RPG::GameCore::DiceCombatAbilityConfig* IGHAHBNLIJA; // 0x28
	::RPG::LittleGameShare::DiceCombatCore::DiceCombatAbilityState DLNIGFGLPLJ; // 0x30

	::System::Void _ctor(::Class_2_48488E8DBD9F6BCE* a1, ::RPG::GameCore::DiceCombatAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_48488E8DBD9F6BCE*, ::RPG::GameCore::DiceCombatAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_235374933CBF16FF__CTOR_OFFSET))(this, a1, a2);
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
