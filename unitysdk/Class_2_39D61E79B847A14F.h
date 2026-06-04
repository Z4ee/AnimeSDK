#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_39D61E79B847A14F_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xA4B1B80)
#define CLASS_2_39D61E79B847A14F_METHOD_2_3EDC18A5268B65E7_OFFSET UNITYSDK_OFFSET(0xA4B1BA0)
#define CLASS_2_39D61E79B847A14F_METHOD_2_6F5DD2B703247213_OFFSET UNITYSDK_OFFSET(0xA4B1AE0)
#define CLASS_2_39D61E79B847A14F_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xA4B1B90)
#define CLASS_2_39D61E79B847A14F_METHOD_2_BBE3E1E8BB1B6701_OFFSET UNITYSDK_OFFSET(0xA4B1C00)
#define CLASS_2_39D61E79B847A14F_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA4B1A30)
#define CLASS_2_39D61E79B847A14F_METHOD_2_F6EEA5546296EDDD_OFFSET UNITYSDK_OFFSET(0xA4B1A80)
#define CLASS_2_39D61E79B847A14F__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B19F0)

inline static constexpr unsigned int Class_2_39D61E79B847A14F_TypeDefinitionIndex = 53277;

class Class_2_39D61E79B847A14F : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::RPG::GameCore::AdventureAbilityComponent* Field_2_0; // 0x68
	::RPG::GameCore::GameEntity* Field_2_1; // 0x70
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_F6EEA5546296EDDD()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F_METHOD_2_F6EEA5546296EDDD_OFFSET))(this);
	}

	::System::Void Method_2_6F5DD2B703247213(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F_METHOD_2_6F5DD2B703247213_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_2_3EDC18A5268B65E7()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F_METHOD_2_3EDC18A5268B65E7_OFFSET))(this);
	}

	::System::Void Method_2_BBE3E1E8BB1B6701(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_39D61E79B847A14F_METHOD_2_BBE3E1E8BB1B6701_OFFSET))(this, a1, a2);
	}
};
