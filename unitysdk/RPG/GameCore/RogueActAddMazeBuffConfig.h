#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_2865EAEBA3DEB035_OFFSET UNITYSDK_OFFSET(0x1D3B6910)
#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_82F1520AE10EF939_OFFSET UNITYSDK_OFFSET(0x1D3B6960)
#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B6950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddMazeBuffConfig_TypeDefinitionIndex = 19398;

	class RogueActAddMazeBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2865EAEBA3DEB035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_2865EAEBA3DEB035_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_82F1520AE10EF939(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_82F1520AE10EF939_OFFSET))(a1, a2);
		}
	};
}
