#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
class Class_0_16E4307DCC419505_650;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RecommendRelicGrowthGuideItem; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65CDD49C6FE0B0D7_METHOD_1_14DED4FF64F29636_OFFSET UNITYSDK_OFFSET(0x117D2560)
#define CLASS_1_65CDD49C6FE0B0D7_METHOD_1_2848C683F5564E16_OFFSET UNITYSDK_OFFSET(0x117D2840)
#define CLASS_1_65CDD49C6FE0B0D7_METHOD_1_C6B3E812F3A24094_1_OFFSET UNITYSDK_OFFSET(0x117D2B00)
#define CLASS_1_65CDD49C6FE0B0D7_METHOD_1_C6B3E812F3A24094_OFFSET UNITYSDK_OFFSET(0x117D2E10)
#define CLASS_1_65CDD49C6FE0B0D7__CTOR_OFFSET UNITYSDK_OFFSET(0x117D2450)

inline static constexpr unsigned int Class_1_65CDD49C6FE0B0D7_TypeDefinitionIndex = 53254;

class Class_1_65CDD49C6FE0B0D7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65CDD49C6FE0B0D7__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>* Method_1_14DED4FF64F29636(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_65CDD49C6FE0B0D7_METHOD_1_14DED4FF64F29636_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>* Method_1_2848C683F5564E16(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_65CDD49C6FE0B0D7_METHOD_1_2848C683F5564E16_OFFSET))(this, a1);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_C6B3E812F3A24094(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_65CDD49C6FE0B0D7_METHOD_1_C6B3E812F3A24094_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RecommendRelicGrowthGuideItem* Method_1_C6B3E812F3A24094_1(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::RPG::Client::RecommendRelicGrowthGuideItem*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_65CDD49C6FE0B0D7_METHOD_1_C6B3E812F3A24094_1_OFFSET))(this, a1, a2);
	}
};
