#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArtPrefabPreview_MeshPartLodInfo.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD5DF030)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER___C__DISPLAYCLASS2_0__START_B__0_OFFSET UNITYSDK_OFFSET(0xD5DF1A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftActivityRandomPaintController___c__DisplayClass2_0_TypeDefinitionIndex = 79968;

	class MechCraftActivityRandomPaintController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::MechCraftPartType partType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Start_b__0(::RPG::Client::ArtPrefabPreview_MeshPartLodInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ArtPrefabPreview_MeshPartLodInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER___C__DISPLAYCLASS2_0__START_B__0_OFFSET))(this, a1);
		}
	};
}
