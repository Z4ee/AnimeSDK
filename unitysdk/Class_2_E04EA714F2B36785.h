#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_2_C14C025AFA60DCA2;
class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_E04EA714F2B36785_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1249C5D0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_0033B9A604AE9CC9_OFFSET UNITYSDK_OFFSET(0x1249BD50)
#define CLASS_2_E04EA714F2B36785_METHOD_2_29CCD26C6A3DEA02_OFFSET UNITYSDK_OFFSET(0x1249C5E0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_2D7C6502F83786E0_OFFSET UNITYSDK_OFFSET(0x1249BEC0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x1249C7E0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x1249BC80)
#define CLASS_2_E04EA714F2B36785_METHOD_2_56C46243AEA2C868_OFFSET UNITYSDK_OFFSET(0x1249C3B0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1249BBB0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1249C6E0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_6ECB8D11B438CB8D_OFFSET UNITYSDK_OFFSET(0x1249BC10)
#define CLASS_2_E04EA714F2B36785_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1249BDF0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_8B1ED6EA075B6C67_OFFSET UNITYSDK_OFFSET(0x1249C650)
#define CLASS_2_E04EA714F2B36785_METHOD_2_950550245E8D7E06_OFFSET UNITYSDK_OFFSET(0x1249C740)
#define CLASS_2_E04EA714F2B36785_METHOD_2_CE4CE294A670DA1B_OFFSET UNITYSDK_OFFSET(0x1249C670)
#define CLASS_2_E04EA714F2B36785_METHOD_2_CFD1CA86E17B2E3E_OFFSET UNITYSDK_OFFSET(0x1249C260)
#define CLASS_2_E04EA714F2B36785_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1249C660)
#define CLASS_2_E04EA714F2B36785_METHOD_2_DE86B869D175F16E_OFFSET UNITYSDK_OFFSET(0x1249C550)
#define CLASS_2_E04EA714F2B36785__CTOR_OFFSET UNITYSDK_OFFSET(0x1249BB70)

inline static constexpr unsigned int Class_2_E04EA714F2B36785_TypeDefinitionIndex = 52576;

class Class_2_E04EA714F2B36785 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_5; // 0x68
	::RPG::GameCore::GameEntity* Field_2_4; // 0x70
	::Class_2_C14C025AFA60DCA2* Field_2_3; // 0x78
	::Class_2_F1C3EBA366E084A2* Field_2_2; // 0x80
	::System::Boolean Field_2_6; // 0x88
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x8C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_6ECB8D11B438CB8D(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_6ECB8D11B438CB8D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0033B9A604AE9CC9(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_0033B9A604AE9CC9_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_CFD1CA86E17B2E3E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_CFD1CA86E17B2E3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_459C79521BFE514E_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_DE86B869D175F16E()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_DE86B869D175F16E_OFFSET))(this);
	}

	::System::Boolean Method_2_56C46243AEA2C868(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_56C46243AEA2C868_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_2D7C6502F83786E0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_2D7C6502F83786E0_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_29CCD26C6A3DEA02(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_29CCD26C6A3DEA02_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_8B1ED6EA075B6C67(::RPG::GameCore::AdventureModifierInstance* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_8B1ED6EA075B6C67_OFFSET))(this, P0);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_CE4CE294A670DA1B(::System::Boolean P0, ::System::Boolean P1, ::RPG::GameCore::AdventureFeatureNormalActiveReason P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_CE4CE294A670DA1B_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_950550245E8D7E06(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_950550245E8D7E06_OFFSET))(this, P0);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}
};
