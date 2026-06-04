#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_3116770F311CD2EC_OFFSET UNITYSDK_OFFSET(0x19531A90)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_550F0B2918A6D1D2_OFFSET UNITYSDK_OFFSET(0x195316F0)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_DEFB2FA637674097_OFFSET UNITYSDK_OFFSET(0x195319D0)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_F593CF1124B31343_OFFSET UNITYSDK_OFFSET(0x19531590)
#define RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19531650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSkillUsageLimit_TypeDefinitionIndex = 21735;

	class ByCompareSkillUsageLimit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IDFromTargetType; // 0x20
		::System::String* IDFromTriggerKey; // 0x28
		::Il2CppArray<::System::UInt32>* SharedLimitSkillConfigIDs; // 0x30
		::RPG::GameCore::DynamicFloat* ActionDelay; // 0x38
		::RPG::GameCore::DynamicFloat* LimitTimes; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F593CF1124B31343(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillUsageLimit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillUsageLimit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_F593CF1124B31343_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_550F0B2918A6D1D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_550F0B2918A6D1D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DEFB2FA637674097(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_DEFB2FA637674097_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3116770F311CD2EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESKILLUSAGELIMIT_METHOD_4_3116770F311CD2EC_OFFSET))(a1, a2);
		}
	};
}
