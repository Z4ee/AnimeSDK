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

#define CLASS_2_B63BB58AA3B9D57D_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1452EFA0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1452E1F0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_1269AF86FE25AECE_OFFSET UNITYSDK_OFFSET(0x1452F020)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_172ED7EB6349BF73_OFFSET UNITYSDK_OFFSET(0x1452DC10)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_2246AAFB2E8E5ED2_OFFSET UNITYSDK_OFFSET(0x1452E2D0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x1452EFC0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_5107CFEA9A7D5CFA_OFFSET UNITYSDK_OFFSET(0x1452DDF0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1452F090)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_5EBE23180774F4D5_1_OFFSET UNITYSDK_OFFSET(0x1452EAD0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_5EBE23180774F4D5_OFFSET UNITYSDK_OFFSET(0x1452EA50)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_6C483AADD3CDD452_OFFSET UNITYSDK_OFFSET(0x1452D530)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0x1452EB50)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1452EFB0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x1452ECB0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_C2C495C915C952BA_OFFSET UNITYSDK_OFFSET(0x1452F0F0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_DCDCD984F3A05F38_OFFSET UNITYSDK_OFFSET(0x1452D5D0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1452D4D0)
#define CLASS_2_B63BB58AA3B9D57D_METHOD_2_EDE0BFE888E976F8_OFFSET UNITYSDK_OFFSET(0x1452DD30)
#define CLASS_2_B63BB58AA3B9D57D__CTOR_OFFSET UNITYSDK_OFFSET(0x1452D330)

inline static constexpr unsigned int Class_2_B63BB58AA3B9D57D_TypeDefinitionIndex = 53274;

class Class_2_B63BB58AA3B9D57D : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::NPCComponent* Field_2_0; // 0x68
	::RPG::Client::AdventurePhase* Field_2_1; // 0x70
	::RPG::GameCore::AdventureAbilityComponent* Field_2_2; // 0x78
	::RPG::GameCore::CharacterVisibleComponent* Field_2_3; // 0x80
	::RPG::GameCore::TransformComponent* Field_2_4; // 0x88
	::RPG::GameCore::AdventureSkillCharacterComponent* Field_2_5; // 0x90
	::System::Boolean Field_2_6; // 0x98
	::System::Single Field_2_7; // 0x9C
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0xA0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_6C483AADD3CDD452()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_6C483AADD3CDD452_OFFSET))(this);
	}

	::System::Void Method_2_DCDCD984F3A05F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_DCDCD984F3A05F38_OFFSET))(this, a1);
	}

	::System::Void Method_2_172ED7EB6349BF73(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_172ED7EB6349BF73_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EDE0BFE888E976F8(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_EDE0BFE888E976F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_5107CFEA9A7D5CFA(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_5107CFEA9A7D5CFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EBE23180774F4D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_5EBE23180774F4D5_OFFSET))(this);
	}

	::System::Void Method_2_5EBE23180774F4D5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_5EBE23180774F4D5_1_OFFSET))(this);
	}

	::System::Void Method_2_70459B7C790C82DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_70459B7C790C82DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2246AAFB2E8E5ED2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_2246AAFB2E8E5ED2_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_1269AF86FE25AECE(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_1269AF86FE25AECE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C2C495C915C952BA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B63BB58AA3B9D57D_METHOD_2_C2C495C915C952BA_OFFSET))(this, a1);
	}
};
