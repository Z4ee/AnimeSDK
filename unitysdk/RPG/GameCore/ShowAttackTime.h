#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShowAttackTimeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_CC98F3A758BFD9D7_OFFSET UNITYSDK_OFFSET(0x19C74130)
#define RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_E6397EECEF83B3E9_OFFSET UNITYSDK_OFFSET(0x19C740B0)
#define RPG_GAMECORE_SHOWATTACKTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x19C74100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAttackTime_TypeDefinitionIndex = 21677;

	class ShowAttackTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ShowAttackTimeType IconType; // 0x20
		::System::Boolean ShowInActionMode; // 0x24
		::RPG::GameCore::DynamicFloat* BaseAttackTime; // 0x28
		::RPG::GameCore::DynamicFloat* EnhancedAttackTime; // 0x30
		::System::Boolean IsShow; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6397EECEF83B3E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAttackTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAttackTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_E6397EECEF83B3E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC98F3A758BFD9D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAttackTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAttackTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_CC98F3A758BFD9D7_OFFSET))(a1, a2);
		}
	};
}
