#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameTargetMemoryType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
class Class_0_16E4307DCC419505_288;
class Class_1_C93B67AB1D1BC17A;
class Class_1_E59130C10EDDE9BC;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame { template <typename T> class IAbilityAttributeService_1; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

namespace RPG::Client::LittleGame::Ability
{
	inline static constexpr unsigned int LittleGameAbilityContext_1_TypeDefinitionIndex = 76891;

	template <typename TEntity>
	class LittleGameAbilityContext_1 : public ::System::Object
	{
	public:
		TEntity _AbilityOwner_k__BackingField; // 0x0
		::Entitas::IEntity* _AbilitySelf_k__BackingField; // 0x0
		::Entitas::IContext* _Context_k__BackingField; // 0x0
		::RPG::Client::LittleGame::IAbilityAttributeService_1<TEntity>* _AttributeService_k__BackingField; // 0x0
		::Class_0_16E4307DCC419505_288* _EffectService_k__BackingField; // 0x0
		::Class_1_C93B67AB1D1BC17A* _TargetSelectorService; // 0x0
		::Class_1_E59130C10EDDE9BC* _ValueGetterService; // 0x0
		::System::Text::StringBuilder* _DebugInfo; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameTargetMemoryType, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _TargetMemory; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _RuntimeValues; // 0x0
	};
}
