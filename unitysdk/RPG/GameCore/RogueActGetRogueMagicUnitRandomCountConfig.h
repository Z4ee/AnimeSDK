#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_6_93367ECA63088707_OFFSET UNITYSDK_OFFSET(0x1D3B7BD0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_6_DD7342E6231C2AAB_OFFSET UNITYSDK_OFFSET(0x1D3B7C20)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicUnitRandomCountConfig_TypeDefinitionIndex = 19448;

	class RogueActGetRogueMagicUnitRandomCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_93367ECA63088707(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_6_93367ECA63088707_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DD7342E6231C2AAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitRandomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITRANDOMCOUNTCONFIG_METHOD_6_DD7342E6231C2AAB_OFFSET))(a1, a2);
		}
	};
}
