#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_7F980E1B269F8610_OFFSET UNITYSDK_OFFSET(0x170188D0)
#define RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_C5BA92E8D49D8736_OFFSET UNITYSDK_OFFSET(0x17018800)
#define RPG_GAMECORE_BYCOMPARESTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17018880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStance_TypeDefinitionIndex = 20731;

	class ByCompareStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean IncludeRedStance; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C5BA92E8D49D8736(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_C5BA92E8D49D8736_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F980E1B269F8610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTANCE_METHOD_4_7F980E1B269F8610_OFFSET))(a1, a2);
		}
	};
}
