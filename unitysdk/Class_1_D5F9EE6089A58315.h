#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D17272E82AE804C2_272_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYNormalItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYPhotoItem; }

#define CLASS_1_D5F9EE6089A58315_METHOD_1_604DC100022D68B5_OFFSET UNITYSDK_OFFSET(0x15EA94F0)
#define CLASS_1_D5F9EE6089A58315_METHOD_1_A14373DB6278AA2B_OFFSET UNITYSDK_OFFSET(0x15EA9450)
#define CLASS_1_D5F9EE6089A58315_METHOD_1_DCCAD9E64EF566D9_OFFSET UNITYSDK_OFFSET(0x15EA93E0)

inline static constexpr unsigned int Class_1_D5F9EE6089A58315_TypeDefinitionIndex = 65147;

class Class_1_D5F9EE6089A58315 : public ::System::Object
{
public:
	static ::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem* Method_1_DCCAD9E64EF566D9(::System::UInt32 a1)
	{
		return ((::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5F9EE6089A58315_METHOD_1_DCCAD9E64EF566D9_OFFSET))(a1);
	}

	static ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* Method_1_A14373DB6278AA2B(::System::UInt32 a1, ::System::Int64 a2)
	{
		return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_D5F9EE6089A58315_METHOD_1_A14373DB6278AA2B_OFFSET))(a1, a2);
	}

	static ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem* Method_1_604DC100022D68B5(::Class_1_D17272E82AE804C2_272_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 a1, ::System::UInt32 a2, ::RPG::GameCore::GenderType a3)
	{
		return ((::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*(*)(::Class_1_D17272E82AE804C2_272_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814, ::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_D5F9EE6089A58315_METHOD_1_604DC100022D68B5_OFFSET))(a1, a2, a3);
	}
};
