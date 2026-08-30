#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropAttractEnemyBehaviourType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETTARGETALERTVALUE_METHOD_3_5A36E5D7F30B9094_OFFSET UNITYSDK_OFFSET(0x1CBA2A00)
#define RPG_GAMECORE_ADVSETTARGETALERTVALUE_METHOD_3_E1D533264CD8D52E_OFFSET UNITYSDK_OFFSET(0x1CBA2A80)
#define RPG_GAMECORE_ADVSETTARGETALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA2A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetTargetAlertValue_TypeDefinitionIndex = 20108;

	class AdvSetTargetAlertValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropAttractEnemyBehaviourType BehaviourType; // 0x20
		::System::Single AlertValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTARGETALERTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A36E5D7F30B9094(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetTargetAlertValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetTargetAlertValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTARGETALERTVALUE_METHOD_3_5A36E5D7F30B9094_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1D533264CD8D52E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetTargetAlertValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetTargetAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTARGETALERTVALUE_METHOD_3_E1D533264CD8D52E_OFFSET))(a1, a2);
		}
	};
}
