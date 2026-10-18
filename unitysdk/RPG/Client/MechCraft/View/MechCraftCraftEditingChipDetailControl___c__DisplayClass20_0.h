#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftCraftEditingChipDetailControl_AttrTypeDesc; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD622520)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL___C__DISPLAYCLASS20_0___TRYGETATTRTYPEDESC_B__0_OFFSET UNITYSDK_OFFSET(0xD6229C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditingChipDetailControl___c__DisplayClass20_0_TypeDefinitionIndex = 79888;

	class MechCraftCraftEditingChipDetailControl___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryGetAttrTypeDesc_b__0(::RPG::Client::MechCraft::View::MechCraftCraftEditingChipDetailControl_AttrTypeDesc* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::View::MechCraftCraftEditingChipDetailControl_AttrTypeDesc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL___C__DISPLAYCLASS20_0___TRYGETATTRTYPEDESC_B__0_OFFSET))(this, a1);
		}
	};
}
