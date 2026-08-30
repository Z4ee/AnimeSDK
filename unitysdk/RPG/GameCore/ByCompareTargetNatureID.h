#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_21350C33CE107D89_OFFSET UNITYSDK_OFFSET(0x1CF07030)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_469B61DAAC0D1B89_OFFSET UNITYSDK_OFFSET(0x1CF07210)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_7ABE7F0AFE96AFB7_OFFSET UNITYSDK_OFFSET(0x1CF071E0)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_B1D2788A707B4280_OFFSET UNITYSDK_OFFSET(0x1CF06FF0)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF07020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetNatureID_TypeDefinitionIndex = 22755;

	class ByCompareTargetNatureID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 TargetNatureID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B1D2788A707B4280(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetNatureID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetNatureID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_B1D2788A707B4280_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21350C33CE107D89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_21350C33CE107D89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7ABE7F0AFE96AFB7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_7ABE7F0AFE96AFB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_469B61DAAC0D1B89(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_469B61DAAC0D1B89_OFFSET))(a1, a2);
		}
	};
}
