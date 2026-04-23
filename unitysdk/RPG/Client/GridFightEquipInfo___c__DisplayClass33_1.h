#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA485110)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_1__GETEQUIPRECOMMENDROLEIDLIST_B__1_OFFSET UNITYSDK_OFFSET(0xA485290)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_1__GETEQUIPRECOMMENDROLEIDLIST_B__2_OFFSET UNITYSDK_OFFSET(0xA4852E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c__DisplayClass33_1_TypeDefinitionIndex = 59814;

	class GridFightEquipInfo___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* equipConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipRecommendRoleIDList_b__1(::RPG::Client::GridFightTraitConfigBase* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_1__GETEQUIPRECOMMENDROLEIDLIST_B__1_OFFSET))(this, x);
		}

		::System::Boolean _GetEquipRecommendRoleIDList_b__2(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS33_1__GETEQUIPRECOMMENDROLEIDLIST_B__2_OFFSET))(this, x);
		}
	};
}
