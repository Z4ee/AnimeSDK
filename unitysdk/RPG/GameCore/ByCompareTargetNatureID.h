#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_21350C33CE107D89_OFFSET UNITYSDK_OFFSET(0x1953A290)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_3277D7E0D0FAA8E3_OFFSET UNITYSDK_OFFSET(0x1953A440)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_5DD0BAE5CA009058_OFFSET UNITYSDK_OFFSET(0x1953A4C0)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_676871315DF5EF41_OFFSET UNITYSDK_OFFSET(0x1953A1C0)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID__CTOR_OFFSET UNITYSDK_OFFSET(0x1953A240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetNatureID_TypeDefinitionIndex = 21760;

	class ByCompareTargetNatureID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 TargetNatureID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_676871315DF5EF41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetNatureID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetNatureID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_676871315DF5EF41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21350C33CE107D89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_21350C33CE107D89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3277D7E0D0FAA8E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_3277D7E0D0FAA8E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5DD0BAE5CA009058(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_5DD0BAE5CA009058_OFFSET))(a1, a2);
		}
	};
}
