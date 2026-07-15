#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_51AFB42020479A35_OFFSET UNITYSDK_OFFSET(0x1D02DE00)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_AC3B1B3F5D77E339_OFFSET UNITYSDK_OFFSET(0x1D02DE50)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitByParamConfig_TypeDefinitionIndex = 18935;

	class RogueActGetMagicUnitByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_51AFB42020479A35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_51AFB42020479A35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AC3B1B3F5D77E339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_6_AC3B1B3F5D77E339_OFFSET))(a1, a2);
		}
	};
}
