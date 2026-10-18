#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D17272E82AE804C2_304_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_503;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYNormalItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYPhotoItem; }

#define CLASS_1_D5F9EE6089A58315_METHOD_1_604DC100022D68B5_OFFSET UNITYSDK_OFFSET(0xC259C20)
#define CLASS_1_D5F9EE6089A58315_METHOD_1_D6A3CE50272441A2_OFFSET UNITYSDK_OFFSET(0xC259A70)
#define CLASS_1_D5F9EE6089A58315_METHOD_1_DCCAD9E64EF566D9_OFFSET UNITYSDK_OFFSET(0xC259A00)
#define CLASS_1_D5F9EE6089A58315_METHOD_1_E3D29E1984E7690E_OFFSET UNITYSDK_OFFSET(0xC259B40)

inline static constexpr unsigned int Class_1_D5F9EE6089A58315_TypeDefinitionIndex = 68163;

class Class_1_D5F9EE6089A58315 : public ::System::Object
{
public:
	static ::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem* Method_1_DCCAD9E64EF566D9(::System::UInt32 a1)
	{
		return ((::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D5F9EE6089A58315_METHOD_1_DCCAD9E64EF566D9_OFFSET))(a1);
	}

	static ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* Method_1_D6A3CE50272441A2(::Class_0_16E4307DCC419505_503* a1)
	{
		return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + CLASS_1_D5F9EE6089A58315_METHOD_1_D6A3CE50272441A2_OFFSET))(a1);
	}

	static ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* Method_1_E3D29E1984E7690E(::System::UInt32 a1, ::System::Int64 a2)
	{
		return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_D5F9EE6089A58315_METHOD_1_E3D29E1984E7690E_OFFSET))(a1, a2);
	}

	static ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem* Method_1_604DC100022D68B5(::Class_1_D17272E82AE804C2_304_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814 a1, ::System::UInt32 a2, ::RPG::GameCore::GenderType a3)
	{
		return ((::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*(*)(::Class_1_D17272E82AE804C2_304_Class_1_534EF681CC2FBEA4_Enum_3_0076592102B61814, ::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_D5F9EE6089A58315_METHOD_1_604DC100022D68B5_OFFSET))(a1, a2, a3);
	}
};
