#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionStatType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_028929D307C6D9D5_METHOD_1_1F154BF7529613ED_OFFSET UNITYSDK_OFFSET(0x1C573B90)
#define CLASS_1_028929D307C6D9D5_METHOD_1_66986FA5342E561A_OFFSET UNITYSDK_OFFSET(0x1C573B30)

inline static constexpr unsigned int Class_1_028929D307C6D9D5_TypeDefinitionIndex = 41651;

class Class_1_028929D307C6D9D5 : public ::System::Object
{
public:
	static ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionStatType> Method_1_66986FA5342E561A(::RPG::Client::MechCraft::MechCraftConditionType a1)
	{
		return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionStatType>(*)(::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + CLASS_1_028929D307C6D9D5_METHOD_1_66986FA5342E561A_OFFSET))(a1);
	}

	static ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType> Method_1_1F154BF7529613ED(::RPG::Client::MechCraft::MechCraftConditionType a1)
	{
		return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType>(*)(::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + CLASS_1_028929D307C6D9D5_METHOD_1_1F154BF7529613ED_OFFSET))(a1);
	}
};
