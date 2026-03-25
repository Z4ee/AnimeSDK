#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_318E4F04CCDC9261_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x109ED110)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x109EC370)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_08E93855948DA71F_OFFSET UNITYSDK_OFFSET(0x109EBEE0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_172ED7EB6349BF73_OFFSET UNITYSDK_OFFSET(0x109EBDC0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_2246AAFB2E8E5ED2_OFFSET UNITYSDK_OFFSET(0x109EC450)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x109ED130)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x109EB650)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x109ED210)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_1_OFFSET UNITYSDK_OFFSET(0x109ECC60)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_OFFSET UNITYSDK_OFFSET(0x109ECBE0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_6C483AADD3CDD452_OFFSET UNITYSDK_OFFSET(0x109EB6B0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0x109ECCE0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_87F0C63A54A87068_OFFSET UNITYSDK_OFFSET(0x109EBFA0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_8A3E316C82E9B764_OFFSET UNITYSDK_OFFSET(0x109EB750)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_950550245E8D7E06_OFFSET UNITYSDK_OFFSET(0x109ED270)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x109ECE30)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_CE4CE294A670DA1B_OFFSET UNITYSDK_OFFSET(0x109ED1A0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x109ED120)
#define CLASS_2_318E4F04CCDC9261__CTOR_OFFSET UNITYSDK_OFFSET(0x109EB4D0)

inline static constexpr unsigned int Class_2_318E4F04CCDC9261_TypeDefinitionIndex = 45915;

class Class_2_318E4F04CCDC9261 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_2_4; // 0x68
	::RPG::Client::AdventurePhase* Field_2_1; // 0x70
	::RPG::GameCore::AdventureSkillCharacterComponent* Field_2_5; // 0x78
	::RPG::GameCore::TransformComponent* Field_2_6; // 0x80
	::RPG::GameCore::CharacterVisibleComponent* Field_2_3; // 0x88
	::RPG::GameCore::NPCComponent* Field_2_2; // 0x90
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x98
	::System::Boolean Field_2_8; // 0x9C
	::System::Single Field_2_7; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_6C483AADD3CDD452()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_6C483AADD3CDD452_OFFSET))(this);
	}

	::System::Void Method_2_8A3E316C82E9B764(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_8A3E316C82E9B764_OFFSET))(this, a1);
	}

	::System::Void Method_2_172ED7EB6349BF73(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_172ED7EB6349BF73_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_08E93855948DA71F(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_08E93855948DA71F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_87F0C63A54A87068(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_87F0C63A54A87068_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EBE23180774F4D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_OFFSET))(this);
	}

	::System::Void Method_2_5EBE23180774F4D5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_1_OFFSET))(this);
	}

	::System::Void Method_2_70459B7C790C82DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_70459B7C790C82DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2246AAFB2E8E5ED2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_2246AAFB2E8E5ED2_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_CE4CE294A670DA1B(::System::Boolean P0, ::System::Boolean P1, ::RPG::GameCore::AdventureFeatureNormalActiveReason P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_CE4CE294A670DA1B_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_950550245E8D7E06(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_950550245E8D7E06_OFFSET))(this, P0);
	}
};
