#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_AC3B1B3F5D77E339_OFFSET UNITYSDK_OFFSET(0x19AE5F60)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_DB2197C37C1734C4_OFFSET UNITYSDK_OFFSET(0x19AE5D40)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE5E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitByParamConfig_TypeDefinitionIndex = 18659;

	class RogueActGetMagicUnitByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DB2197C37C1734C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_DB2197C37C1734C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AC3B1B3F5D77E339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_AC3B1B3F5D77E339_OFFSET))(a1, a2);
		}
	};
}
