#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PreReleaseCharaParam; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculator; }
namespace System { class String; }

#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKAVATAREQUIPPEDRELICMAINPROPERTYMISMATCH_OFFSET UNITYSDK_OFFSET(0xA5DA330)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKRELICISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xA5DA600)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xA5DA790)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETRELICSMARTSUITRESULT_OFFSET UNITYSDK_OFFSET(0xA5DA4F0)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA5DA280)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GET_RECOMMENDRELICMINMATCHEDSUBAFFIXCOUNT_OFFSET UNITYSDK_OFFSET(0xA5D9F20)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA5DA080)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_SETSPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA5DA030)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CHECKRELICISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xA5DA670)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D9C10)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetRelicRecommender_TypeDefinitionIndex = 60404;

	class GrowthTargetRelicRecommender : public ::System::Object
	{
	public:
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculator* _RelicSmartSuitCalculator; // 0x10
		::Struct_2_019938BC9C50B169_2 _SpecificPathIdentifier; // 0x18
		::System::Nullable_1<::System::UInt32> _RecommendRelicMinMatchedSubAffixCount; // 0x1C

		::System::Void _ctor(::Struct_2_019938BC9C50B169_2& specificPathIdentifier)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CTOR_OFFSET))(this, specificPathIdentifier);
		}

		::System::UInt32 get_RecommendRelicMinMatchedSubAffixCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GET_RECOMMENDRELICMINMATCHEDSUBAFFIXCOUNT_OFFSET))(this);
		}

		::System::Void SetSpecificPathIdentifier(::Struct_2_019938BC9C50B169_2& specificPathIdentifier)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_SETSPECIFICPATHIDENTIFIER_OFFSET))(this, specificPathIdentifier);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_PREPAREDATA_OFFSET))(this);
		}

		::RPG::Client::RelicRecommendData* GetRelicRecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETRELICRECOMMENDDATA_OFFSET))(this);
		}

		::System::Boolean CheckAvatarEquippedRelicMainPropertyMismatch(::RPG::Client::PreReleaseCharaParam* avatarParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKAVATAREQUIPPEDRELICMAINPROPERTYMISMATCH_OFFSET))(this, avatarParam);
		}

		::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* GetGrowthTargetRelicSmartSuitResult(::RPG::Client::PreReleaseCharaParam* avatarParam)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETRELICSMARTSUITRESULT_OFFSET))(this, avatarParam);
		}

		::System::Boolean CheckRelicIsRecommend(::RPG::Client::RelicItemData* relicItemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_CHECKRELICISRECOMMEND_OFFSET))(this, relicItemData);
		}

		::System::String* GetGrowthTargetAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER_GETGROWTHTARGETAVATARICONPATH_OFFSET))(this);
		}

		::System::Boolean _CheckRelicIsRecommend(::RPG::Client::RelicItemData* relicItemData, ::RPG::Client::RelicRecommendData* recommendData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER__CHECKRELICISRECOMMEND_OFFSET))(this, relicItemData, recommendData);
		}
	};
}
