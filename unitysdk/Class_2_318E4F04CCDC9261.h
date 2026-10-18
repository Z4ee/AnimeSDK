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

#define CLASS_2_318E4F04CCDC9261_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xB3EB5E0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xB3EB2C0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB3EA800)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_172ED7EB6349BF73_OFFSET UNITYSDK_OFFSET(0xB3EA230)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_2227C7173F41C490_OFFSET UNITYSDK_OFFSET(0xB3EA420)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_2246AAFB2E8E5ED2_OFFSET UNITYSDK_OFFSET(0xB3EA8E0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_1_OFFSET UNITYSDK_OFFSET(0xB3EB0E0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_OFFSET UNITYSDK_OFFSET(0xB3EB060)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_6C483AADD3CDD452_OFFSET UNITYSDK_OFFSET(0xB3E9B30)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0xB3EB160)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_DCDCD984F3A05F38_OFFSET UNITYSDK_OFFSET(0xB3E9BD0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB3E9AD0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_EDE0BFE888E976F8_OFFSET UNITYSDK_OFFSET(0xB3EA360)
#define CLASS_2_318E4F04CCDC9261__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E9930)

inline static constexpr unsigned int Class_2_318E4F04CCDC9261_TypeDefinitionIndex = 57043;

class Class_2_318E4F04CCDC9261 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x68
	::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x70
	::RPG::GameCore::AdventureSkillCharacterComponent* KKANBKCEJEF; // 0x78
	::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x80
	::RPG::GameCore::AdventureAbilityComponent* POLIHAMFHCI; // 0x88
	::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x90
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x98
	::System::Boolean DIMECBLLOGB; // 0x9C
	::System::Single AKGFBENBNFI; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_6C483AADD3CDD452()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_6C483AADD3CDD452_OFFSET))(this);
	}

	::System::Void Method_2_DCDCD984F3A05F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_DCDCD984F3A05F38_OFFSET))(this, a1);
	}

	::System::Void Method_2_172ED7EB6349BF73(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_172ED7EB6349BF73_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EDE0BFE888E976F8(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_EDE0BFE888E976F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_2227C7173F41C490(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_2227C7173F41C490_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_318E4F04CCDC9261_GET_FLAG_OFFSET))(this);
	}
};
