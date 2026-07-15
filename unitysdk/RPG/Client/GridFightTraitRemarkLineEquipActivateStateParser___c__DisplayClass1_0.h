#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60E570)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_0___GETISACTIVE_B__2_OFFSET UNITYSDK_OFFSET(0x1A60E720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEquipActivateStateParser___c__DisplayClass1_0_TypeDefinitionIndex = 62563;

	class GridFightTraitRemarkLineEquipActivateStateParser___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* allRoles; // 0x10
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* allNPCs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetIsActive_b__2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEQUIPACTIVATESTATEPARSER___C__DISPLAYCLASS1_0___GETISACTIVE_B__2_OFFSET))(this, a1);
		}
	};
}
