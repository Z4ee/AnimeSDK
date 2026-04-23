#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FieldEffectHighPriorityList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG_METHOD_2_879DFB5EF16DA78C_OFFSET UNITYSDK_OFFSET(0x188DC450)
#define RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188DC7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldEffectBudgetConfig_TypeDefinitionIndex = 15607;

	class FieldEffectBudgetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* SingleFieldEffectBudget; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* EntityTypeToGuaranteedCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::RPG::GameCore::FieldEffectHighPriorityList*>* StageHighPriorityEffectList; // 0x20
		::System::Single HighQualityTotalBudgetLod0; // 0x28
		::System::Single HighQualityTotalBudgetLod1; // 0x2C
		::System::Single LowQualityTotalBudgetLod1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_879DFB5EF16DA78C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FieldEffectBudgetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FieldEffectBudgetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG_METHOD_2_879DFB5EF16DA78C_OFFSET))(a1, a2);
		}
	};
}
