#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_73C1DBA2BBC7D4F7;
namespace RPG::GameCore { class AvatarRelicRecommendRow; }

#define CLASS_1_E028ABE726C863C5_METHOD_1_01C620DBEACF7720_OFFSET UNITYSDK_OFFSET(0x138486F0)
#define CLASS_1_E028ABE726C863C5_METHOD_1_504C5A982B43CF28_OFFSET UNITYSDK_OFFSET(0x138485F0)

inline static constexpr unsigned int Class_1_E028ABE726C863C5_TypeDefinitionIndex = 58818;

class Class_1_E028ABE726C863C5 : public ::System::Object
{
public:
	static ::RPG::GameCore::AvatarPropertyType Method_1_504C5A982B43CF28(::RPG::GameCore::RelicType a1, ::RPG::GameCore::AvatarRelicRecommendRow* a2)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + CLASS_1_E028ABE726C863C5_METHOD_1_504C5A982B43CF28_OFFSET))(a1, a2);
	}

	static ::Class_1_73C1DBA2BBC7D4F7* Method_1_01C620DBEACF7720(::System::UInt32 a1, ::RPG::GameCore::CombatPowerRelicRarityType a2, ::System::UInt32 a3, ::RPG::GameCore::RelicType a4)
	{
		return ((::Class_1_73C1DBA2BBC7D4F7*(*)(::System::UInt32, ::RPG::GameCore::CombatPowerRelicRarityType, ::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_E028ABE726C863C5_METHOD_1_01C620DBEACF7720_OFFSET))(a1, a2, a3, a4);
	}
};
