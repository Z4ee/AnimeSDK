#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightEquipReturnPackEvent_EquipReturnPackSource.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPRETURNPACKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD29B90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipReturnPackEvent_TypeDefinitionIndex = 64979;

	class GridFightEquipReturnPackEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* EquipUIDsToRank; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* EquipUIDs; // 0x18
		::RPG::Client::GridFightPlacementType PlacementType; // 0x20
		::RPG::Client::GridFightEquipReturnPackEvent_EquipReturnPackSource Source; // 0x24
		::System::UInt32 PosIndex; // 0x28
		::System::UInt32 ForgeSelectIndex; // 0x2C
		::System::UInt32 PlacementIndex; // 0x30
		::System::UInt32 RoleUID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPRETURNPACKEVENT__CTOR_OFFSET))(this);
		}
	};
}
