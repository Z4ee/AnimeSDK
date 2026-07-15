#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
class Class_0_16E4307DCC419505_838;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RecommendRelicGrowthGuideItem; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61593EC35C5C173D_METHOD_1_439236A2386842D8_1_OFFSET UNITYSDK_OFFSET(0x176F5C90)
#define CLASS_1_61593EC35C5C173D_METHOD_1_439236A2386842D8_OFFSET UNITYSDK_OFFSET(0x176F5E90)
#define CLASS_1_61593EC35C5C173D_METHOD_1_9A06D797D4112EBF_OFFSET UNITYSDK_OFFSET(0x176F54D0)
#define CLASS_1_61593EC35C5C173D_METHOD_1_AC7F164A0803B0C9_OFFSET UNITYSDK_OFFSET(0x176F58A0)
#define CLASS_1_61593EC35C5C173D__CTOR_OFFSET UNITYSDK_OFFSET(0x176F5260)

inline static constexpr unsigned int Class_1_61593EC35C5C173D_TypeDefinitionIndex = 62658;

class Class_1_61593EC35C5C173D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_838*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_836*>* Method_1_9A06D797D4112EBF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_836*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D_METHOD_1_9A06D797D4112EBF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_836*>* Method_1_AC7F164A0803B0C9(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_836*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D_METHOD_1_AC7F164A0803B0C9_OFFSET))(this, a1);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_439236A2386842D8(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D_METHOD_1_439236A2386842D8_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_439236A2386842D8_1(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_61593EC35C5C173D_METHOD_1_439236A2386842D8_1_OFFSET))(this, a1, a2);
	}
};
