#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_09E787A7E1EF76AC_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x112A2930)
#define CLASS_2_09E787A7E1EF76AC_METHOD_2_1269AF86FE25AECE_OFFSET UNITYSDK_OFFSET(0x112A29B0)
#define CLASS_2_09E787A7E1EF76AC_METHOD_2_1B80EE1C517B1E05_OFFSET UNITYSDK_OFFSET(0x112A2820)
#define CLASS_2_09E787A7E1EF76AC_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0x112A2950)
#define CLASS_2_09E787A7E1EF76AC_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x112A2940)
#define CLASS_2_09E787A7E1EF76AC_METHOD_2_88616CED425F4077_OFFSET UNITYSDK_OFFSET(0x112A27A0)
#define CLASS_2_09E787A7E1EF76AC_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x112A2750)
#define CLASS_2_09E787A7E1EF76AC__CTOR_OFFSET UNITYSDK_OFFSET(0x112A2700)

inline static constexpr unsigned int Class_2_09E787A7E1EF76AC_TypeDefinitionIndex = 53254;

class Class_2_09E787A7E1EF76AC : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::Class_2_F67FF7EB526BF85C* Field_2_0; // 0x68
	::RPG::GameCore::AdventureAbilityComponent* Field_2_1; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_88616CED425F4077()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC_METHOD_2_88616CED425F4077_OFFSET))(this);
	}

	::System::Void Method_2_1B80EE1C517B1E05(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC_METHOD_2_1B80EE1C517B1E05_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_1269AF86FE25AECE(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_2_09E787A7E1EF76AC_METHOD_2_1269AF86FE25AECE_OFFSET))(this, a1, a2, a3);
	}
};
