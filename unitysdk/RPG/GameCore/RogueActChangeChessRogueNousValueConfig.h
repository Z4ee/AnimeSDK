#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_6_0DA8711197674646_OFFSET UNITYSDK_OFFSET(0x18CBDBE0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_6_B6B4370620197C23_OFFSET UNITYSDK_OFFSET(0x18CBD9C0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBDB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueNousValueConfig_TypeDefinitionIndex = 18642;

	class RogueActChangeChessRogueNousValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B6B4370620197C23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_6_B6B4370620197C23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0DA8711197674646(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_6_0DA8711197674646_OFFSET))(a1, a2);
		}
	};
}
