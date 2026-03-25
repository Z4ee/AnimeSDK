#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_0CFC8637D0CFC8C6_OFFSET UNITYSDK_OFFSET(0x17007290)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_43B7441A86F2002A_OFFSET UNITYSDK_OFFSET(0x170071C0)
#define RPG_GAMECORE_BYCOMPAREENHANCEDID__CTOR_OFFSET UNITYSDK_OFFSET(0x17007240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEnhancedID_TypeDefinitionIndex = 20735;

	class ByCompareEnhancedID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetEnhancedID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_43B7441A86F2002A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnhancedID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnhancedID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_43B7441A86F2002A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CFC8637D0CFC8C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENHANCEDID_METHOD_4_0CFC8637D0CFC8C6_OFFSET))(a1, a2);
		}
	};
}
