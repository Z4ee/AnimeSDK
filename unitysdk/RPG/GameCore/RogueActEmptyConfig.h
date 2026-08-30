#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_6_02E41AA9BF9F9839_OFFSET UNITYSDK_OFFSET(0x1D3B7330)
#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_6_1DFB121E8DE1137D_OFFSET UNITYSDK_OFFSET(0x1D3B7380)
#define RPG_GAMECORE_ROGUEACTEMPTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActEmptyConfig_TypeDefinitionIndex = 19473;

	class RogueActEmptyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_02E41AA9BF9F9839(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEmptyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEmptyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_6_02E41AA9BF9F9839_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1DFB121E8DE1137D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEmptyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEmptyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTEMPTYCONFIG_METHOD_6_1DFB121E8DE1137D_OFFSET))(a1, a2);
		}
	};
}
