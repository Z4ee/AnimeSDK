#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
class Class_0_16E4307DCC419505_800;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RecommendRelicGrowthGuideItem; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15A53D2959680CAA_METHOD_1_198DDC6D73AD062C_OFFSET UNITYSDK_OFFSET(0xD7EDA50)
#define CLASS_1_15A53D2959680CAA_METHOD_1_427F7FE6A362CBF9_OFFSET UNITYSDK_OFFSET(0xD7EDD70)
#define CLASS_1_15A53D2959680CAA_METHOD_1_4895702D6A451D8F_1_OFFSET UNITYSDK_OFFSET(0xD7EE0F0)
#define CLASS_1_15A53D2959680CAA_METHOD_1_4895702D6A451D8F_OFFSET UNITYSDK_OFFSET(0xD7EE430)
#define CLASS_1_15A53D2959680CAA__CTOR_OFFSET UNITYSDK_OFFSET(0xD7ED7E0)

inline static constexpr unsigned int Class_1_15A53D2959680CAA_TypeDefinitionIndex = 61316;

class Class_1_15A53D2959680CAA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_800*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>* Method_1_198DDC6D73AD062C(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA_METHOD_1_198DDC6D73AD062C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>* Method_1_427F7FE6A362CBF9(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA_METHOD_1_427F7FE6A362CBF9_OFFSET))(this, a1);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_4895702D6A451D8F(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA_METHOD_1_4895702D6A451D8F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_4895702D6A451D8F_1(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_15A53D2959680CAA_METHOD_1_4895702D6A451D8F_1_OFFSET))(this, a1, a2);
	}
};
