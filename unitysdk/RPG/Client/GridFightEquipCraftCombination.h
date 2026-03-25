#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION_GET_TARGETROLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x97FBF10)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTCOMBINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x97FC100)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftCombination_TypeDefinitionIndex = 52405;

	class GridFightEquipCraftCombination : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipCraftRecipe* RelatedRecipe; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipItemData*>* RelatedItems; // 0x18

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
