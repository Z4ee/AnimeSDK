#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_001C2E6C8EDBDB1B_OFFSET UNITYSDK_OFFSET(0x1EE85470)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_85A80F5B2D82EDB7_OFFSET UNITYSDK_OFFSET(0x1EE85420)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE85460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitByMaxStyleConfig_TypeDefinitionIndex = 19464;

	class RogueActGetMagicUnitByMaxStyleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_85A80F5B2D82EDB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_85A80F5B2D82EDB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_001C2E6C8EDBDB1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByMaxStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYMAXSTYLECONFIG_METHOD_6_001C2E6C8EDBDB1B_OFFSET))(a1, a2);
		}
	};
}
