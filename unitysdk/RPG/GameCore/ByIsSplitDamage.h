#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_38F7785594035B34_OFFSET UNITYSDK_OFFSET(0x18757A90)
#define RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_D0F453910F8CA67A_OFFSET UNITYSDK_OFFSET(0x18757B60)
#define RPG_GAMECORE_BYISSPLITDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18757B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSplitDamage_TypeDefinitionIndex = 21933;

	class ByIsSplitDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_38F7785594035B34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSplitDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSplitDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_38F7785594035B34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0F453910F8CA67A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_D0F453910F8CA67A_OFFSET))(a1, a2);
		}
	};
}
