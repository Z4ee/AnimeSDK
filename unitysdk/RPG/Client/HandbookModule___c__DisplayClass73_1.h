#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PreAvatarGrowthMaterialData; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD2F3D20)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_1__GETMATERIALGUIDEIDLISTBYAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xD2FBE70)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass73_1_TypeDefinitionIndex = 65639;

	class HandbookModule___c__DisplayClass73_1 : public ::System::Object
	{
	public:
		::RPG::Client::PreAvatarGrowthMaterialData* material_data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMaterialGuideIDListByAvatar_b__0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_1__GETMATERIALGUIDEIDLISTBYAVATAR_B__0_OFFSET))(this, a1);
		}
	};
}
