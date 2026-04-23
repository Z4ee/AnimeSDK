#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_001C2E6C8EDBDB1B_OFFSET UNITYSDK_OFFSET(0x18CC1920)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_33E7543F64A7712E_OFFSET UNITYSDK_OFFSET(0x18CC1700)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC1840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitByMaxStyleConfig_TypeDefinitionIndex = 18694;

	class RogueActGetMagicUnitByMaxStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_33E7543F64A7712E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_33E7543F64A7712E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_001C2E6C8EDBDB1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_001C2E6C8EDBDB1B_OFFSET))(a1, a2);
		}
	};
}
