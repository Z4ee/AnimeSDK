#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_6_384CE4FDEED3EDAD_OFFSET UNITYSDK_OFFSET(0x18CC37C0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_6_C728D1D0843E5D90_OFFSET UNITYSDK_OFFSET(0x18CC35A0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC36E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicScepterConfig_TypeDefinitionIndex = 18688;

	class RogueActGetRogueMagicScepterConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C728D1D0843E5D90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_6_C728D1D0843E5D90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_384CE4FDEED3EDAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_METHOD_6_384CE4FDEED3EDAD_OFFSET))(a1, a2);
		}
	};
}
