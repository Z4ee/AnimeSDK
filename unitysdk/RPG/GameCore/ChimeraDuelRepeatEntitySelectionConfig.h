#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelSaveEntitySelectionConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_METHOD_3_11C56FE8C62799F7_OFFSET UNITYSDK_OFFSET(0x1CFCDAE0)
#define RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_METHOD_3_1F796C676422C4D5_OFFSET UNITYSDK_OFFSET(0x1CFCDB40)
#define RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCDB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRepeatEntitySelectionConfig_TypeDefinitionIndex = 15728;

	class ChimeraDuelRepeatEntitySelectionConfig : public ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* RepeatTimesValueGetter; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Selector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11C56FE8C62799F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_METHOD_3_11C56FE8C62799F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F796C676422C4D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRepeatEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPEATENTITYSELECTIONCONFIG_METHOD_3_1F796C676422C4D5_OFFSET))(a1, a2);
		}
	};
}
