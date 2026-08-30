#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_14253460BFECB852_OFFSET UNITYSDK_OFFSET(0x1E33BFE0)
#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_89A2114D7A5440DF_OFFSET UNITYSDK_OFFSET(0x1E33BFA0)
#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33BFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelShopGuideDragUpgrade_TypeDefinitionIndex = 24031;

	class ChimeraDuelShopGuideDragUpgrade : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::UInt32 ChimeraID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89A2114D7A5440DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_89A2114D7A5440DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14253460BFECB852(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_METHOD_3_14253460BFECB852_OFFSET))(a1, a2);
		}
	};
}
