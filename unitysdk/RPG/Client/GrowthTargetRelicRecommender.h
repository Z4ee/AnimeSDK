#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PreReleaseCharaParam; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculator; }
namespace System { class String; }

#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKAVATAREQUIPPEDRELICMAINPROPERTYMISMATCH_OFFSET UNITYSDK_OFFSET(0x18FC4920)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKRELICISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x18FC4BF0)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x18FC4D80)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETRELICSMARTSUITRESULT_OFFSET UNITYSDK_OFFSET(0x18FC4AE0)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x18FC4870)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GET_RECOMMENDRELICMINMATCHEDSUBAFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0x18FC3F80)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x18FC40E0)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_SETSPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x18FC4090)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CHECKRELICISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x18FC4C60)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC2790)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetRelicRecommender_TypeDefinitionIndex = 62683;

	class GrowthTargetRelicRecommender : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculator* _RelicSmartSuitCalculator; // 0x10
		::System::Nullable_1<::System::UInt32> _RecommendRelicMinMatchedSubAffixCount; // 0x18
		::Struct_2_D645B4E0B73852B6_1 _SpecificPathIdentifier; // 0x20

		::System::Void _ctor(::Struct_2_D645B4E0B73852B6_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecommendRelicMinMatchedSubAffixCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GET_RECOMMENDRELICMINMATCHEDSUBAFFIXCOUNT_OFFSET))(this);
		}

		::System::Void SetSpecificPathIdentifier(::Struct_2_D645B4E0B73852B6_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_SETSPECIFICPATHIDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_PREPAREDATA_OFFSET))(this);
		}

		::RPG::Client::RelicRecommendData* GetRelicRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETRELICRECOMMENDDATA_OFFSET))(this);
		}

		::System::Boolean CheckAvatarEquippedRelicMainPropertyMismatch(::RPG::Client::PreReleaseCharaParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKAVATAREQUIPPEDRELICMAINPROPERTYMISMATCH_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* GetGrowthTargetRelicSmartSuitResult(::RPG::Client::PreReleaseCharaParam* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETRELICSMARTSUITRESULT_OFFSET))(this, a1);
		}

		::System::Boolean CheckRelicIsRecommend(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKRELICISRECOMMEND_OFFSET))(this, a1);
		}

		::System::String* GetGrowthTargetAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETAVATARICONPATH_OFFSET))(this);
		}

		::System::Boolean _CheckRelicIsRecommend(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicRecommendData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CHECKRELICISRECOMMEND_OFFSET))(this, a1, a2);
		}
	};
}
