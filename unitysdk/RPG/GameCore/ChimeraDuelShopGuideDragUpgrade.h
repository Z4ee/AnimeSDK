#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_14253460BFECB852_OFFSET UNITYSDK_OFFSET(0x19646950)
#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_DDAE665F5D805663_OFFSET UNITYSDK_OFFSET(0x196468D0)
#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x19646920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelShopGuideDragUpgrade_TypeDefinitionIndex = 22984;

	class ChimeraDuelShopGuideDragUpgrade : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::UInt32 ChimeraID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDAE665F5D805663(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_DDAE665F5D805663_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14253460BFECB852(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_14253460BFECB852_OFFSET))(a1, a2);
		}
	};
}
