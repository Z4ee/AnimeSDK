#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnInsertAbilityConditionBase.h"
#include "unitysdk/RPG/GameCore/TurnInsertAbilityConditionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TURNINSERTABILITYCONDITION_METHOD_3_244014E57B96B86A_OFFSET UNITYSDK_OFFSET(0x178D4CA0)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITION_METHOD_3_983FEC11F18F0115_OFFSET UNITYSDK_OFFSET(0x178D4C60)
#define RPG_GAMECORE_TURNINSERTABILITYCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x178D4C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAbilityCondition_TypeDefinitionIndex = 16747;

	class TurnInsertAbilityCondition : public ::RPG::GameCore::TurnInsertAbilityConditionBase
	{
	public:
		::RPG::GameCore::TurnInsertAbilityConditionType Type; // 0x10
		::RPG::GameCore::DynamicFloat* Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_983FEC11F18F0115(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAbilityCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAbilityCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITION_METHOD_3_983FEC11F18F0115_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_244014E57B96B86A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAbilityCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAbilityCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITYCONDITION_METHOD_3_244014E57B96B86A_OFFSET))(a1, a2);
		}
	};
}
