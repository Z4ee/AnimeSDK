#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_METHOD_3_25C62FDA153DFAEA_OFFSET UNITYSDK_OFFSET(0x19B51B60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_METHOD_3_F24EFF468066A733_OFFSET UNITYSDK_OFFSET(0x19B5CF20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B51B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig_TypeDefinitionIndex = 16976;

	class RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F24EFF468066A733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_METHOD_3_F24EFF468066A733_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25C62FDA153DFAEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnFirstEnterSuperRoomEveryLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFIRSTENTERSUPERROOMEVERYLAYERCONFIG_METHOD_3_25C62FDA153DFAEA_OFFSET))(a1, a2);
		}
	};
}
