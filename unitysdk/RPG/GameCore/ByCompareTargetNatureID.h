#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_21350C33CE107D89_OFFSET UNITYSDK_OFFSET(0x1873F530)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_METHOD_4_676871315DF5EF41_OFFSET UNITYSDK_OFFSET(0x1873F460)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID__CTOR_OFFSET UNITYSDK_OFFSET(0x1873F4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetNatureID_TypeDefinitionIndex = 21937;

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
	};
}
