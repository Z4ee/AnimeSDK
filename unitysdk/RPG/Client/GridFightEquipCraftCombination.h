#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitElationEffect; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION_GET_TARGETROLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A6807C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A680A00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftCombination_TypeDefinitionIndex = 61587;

	class GridFightEquipCraftCombination : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* ToElationTrait; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipItemData*>* RelatedItems; // 0x18
		::RPG::Client::GridFightEquipCraftRecipe* RelatedRecipe; // 0x20
		::System::Int32 ElationEquipSlotIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TargetRoleUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION_GET_TARGETROLEUNIQUEID_OFFSET))(this);
		}
	};
}
