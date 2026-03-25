#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_METHOD_3_A0E5AE9E8E07BC43_OFFSET UNITYSDK_OFFSET(0x17673730)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_METHOD_3_DD1B748DBAA0AFC7_OFFSET UNITYSDK_OFFSET(0x17673510)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17673500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncHexEquipmentConfig_TypeDefinitionIndex = 16577;

	class RogueWorkbenchFuncHexEquipmentConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0E5AE9E8E07BC43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_METHOD_3_A0E5AE9E8E07BC43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD1B748DBAA0AFC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncHexEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCHEXEQUIPMENTCONFIG_METHOD_3_DD1B748DBAA0AFC7_OFFSET))(a1, a2);
		}
	};
}
