#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarUseMaterialDataRow; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS82_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05D340)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS82_1__GETMATERIALGUIDEIDLISTBYAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x1A067860)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass82_1_TypeDefinitionIndex = 65701;

	class HandbookModule___c__DisplayClass82_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarUseMaterialDataRow* use_material_data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS82_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMaterialGuideIDListByAvatar_b__1(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS82_1__GETMATERIALGUIDEIDLISTBYAVATAR_B__1_OFFSET))(this, a1);
		}
	};
}
