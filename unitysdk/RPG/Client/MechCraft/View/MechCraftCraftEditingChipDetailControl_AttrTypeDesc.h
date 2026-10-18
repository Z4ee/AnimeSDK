#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL_ATTRTYPEDESC__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD619DA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL_ATTRTYPEDESC__CTOR_OFFSET UNITYSDK_OFFSET(0xD619DE0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftEditingChipDetailControl_AttrTypeDesc_TypeDefinitionIndex = 79886;

	class MechCraftCraftEditingChipDetailControl_AttrTypeDesc : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::MechCraftAttributeType Type; // 0x10
		::RPG::Client::TextID Desc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL_ATTRTYPEDESC__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTEDITINGCHIPDETAILCONTROL_ATTRTYPEDESC__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
