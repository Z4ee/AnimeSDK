#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_2_F1C3EBA366E084A2;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_E04EA714F2B36785_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x149B3F60)
#define CLASS_2_E04EA714F2B36785_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x149B37A0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x149B3620)
#define CLASS_2_E04EA714F2B36785_METHOD_2_56C46243AEA2C868_OFFSET UNITYSDK_OFFSET(0x149B3D50)
#define CLASS_2_E04EA714F2B36785_METHOD_2_6ECB8D11B438CB8D_OFFSET UNITYSDK_OFFSET(0x149B35A0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_77B9575FEB2524A7_OFFSET UNITYSDK_OFFSET(0x149B3870)
#define CLASS_2_E04EA714F2B36785_METHOD_2_C16CEDF61D344A1C_OFFSET UNITYSDK_OFFSET(0x149B3700)
#define CLASS_2_E04EA714F2B36785_METHOD_2_CFD1CA86E17B2E3E_OFFSET UNITYSDK_OFFSET(0x149B3BF0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_DE86B869D175F16E_OFFSET UNITYSDK_OFFSET(0x149B3EE0)
#define CLASS_2_E04EA714F2B36785_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x149B3540)
#define CLASS_2_E04EA714F2B36785__CTOR_OFFSET UNITYSDK_OFFSET(0x149B34F0)

inline static constexpr unsigned int Class_2_E04EA714F2B36785_TypeDefinitionIndex = 54491;

class Class_2_E04EA714F2B36785 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x68
	::Class_2_F1C3EBA366E084A2* Field_2_2; // 0x70
	::RPG::GameCore::GameEntity* Field_2_3; // 0x78
	::Class_2_F67FF7EB526BF85C* Field_2_4; // 0x80
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x88
	::System::Boolean Field_2_6; // 0x8C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_6ECB8D11B438CB8D(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_6ECB8D11B438CB8D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C16CEDF61D344A1C(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_C16CEDF61D344A1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_078D85152011B919_OFFSET))(this);
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

	::RPG::GameCore::GameEntity* Method_2_77B9575FEB2524A7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_METHOD_2_77B9575FEB2524A7_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E04EA714F2B36785_GET_FLAG_OFFSET))(this);
	}
};
