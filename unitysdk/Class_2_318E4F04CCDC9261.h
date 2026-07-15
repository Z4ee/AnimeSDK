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

#define CLASS_2_318E4F04CCDC9261_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x15F9FE70)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x15F9FB50)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x15F9F0A0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_172ED7EB6349BF73_OFFSET UNITYSDK_OFFSET(0x15F9EAD0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_2227C7173F41C490_OFFSET UNITYSDK_OFFSET(0x15F9ECC0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_2246AAFB2E8E5ED2_OFFSET UNITYSDK_OFFSET(0x15F9F180)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_1_OFFSET UNITYSDK_OFFSET(0x15F9F970)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_5EBE23180774F4D5_OFFSET UNITYSDK_OFFSET(0x15F9F8F0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_6C483AADD3CDD452_OFFSET UNITYSDK_OFFSET(0x15F9E3F0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0x15F9F9F0)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_DCDCD984F3A05F38_OFFSET UNITYSDK_OFFSET(0x15F9E490)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x15F9E390)
#define CLASS_2_318E4F04CCDC9261_METHOD_2_EDE0BFE888E976F8_OFFSET UNITYSDK_OFFSET(0x15F9EC00)
#define CLASS_2_318E4F04CCDC9261__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9E1F0)

inline static constexpr unsigned int Class_2_318E4F04CCDC9261_TypeDefinitionIndex = 54489;

class Class_2_318E4F04CCDC9261 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureSkillCharacterComponent* Field_2_0; // 0x68
	::RPG::GameCore::NPCComponent* Field_2_1; // 0x70
	::RPG::GameCore::TransformComponent* Field_2_2; // 0x78
	::RPG::GameCore::AdventureAbilityComponent* Field_2_3; // 0x80
	::RPG::Client::AdventurePhase* Field_2_4; // 0x88
	::RPG::GameCore::CharacterVisibleComponent* Field_2_5; // 0x90
	::System::Boolean Field_2_6; // 0x98
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x9C
	::System::Single Field_2_8; // 0xA0

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
