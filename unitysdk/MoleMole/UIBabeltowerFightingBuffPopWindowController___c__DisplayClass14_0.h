#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerFightingBuffPopWindowController; }
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB8220)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHBUFFSET_B__2_OFFSET UNITYSDK_OFFSET(0x15AB8470)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHBUFFSET_G__OPENMONSTER_3_OFFSET UNITYSDK_OFFSET(0x15AB8480)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHBUFFSET_G__REFRESHMONSTER_0_OFFSET UNITYSDK_OFFSET(0x15AB8230)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingBuffPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 48304;

	class UIBabeltowerFightingBuffPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* floorTemplate; // 0x10
		::MoleMole::UIBabeltowerFightingBuffPopWindowController* __4__this; // 0x18
		::System::Int32 cardsetid; // 0x20
		::System::UInt32 currentFloor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBuffSet_g__RefreshMonster_0(::System::Int32 index, ::System::Int32 monsterCard)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHBUFFSET_G__REFRESHMONSTER_0_OFFSET))(this, index, monsterCard);
		}

		::System::Void _RefreshBuffSet_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHBUFFSET_B__2_OFFSET))(this);
		}

		::System::Void _RefreshBuffSet_g__OpenMonster_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__REFRESHBUFFSET_G__OPENMONSTER_3_OFFSET))(this);
		}
	};
}
