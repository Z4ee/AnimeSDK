#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_6_46C7DAD438735C46_OFFSET UNITYSDK_OFFSET(0x19AE7B90)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_6_6CA5BED8381394D3_OFFSET UNITYSDK_OFFSET(0x19AE7DB0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE7CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicUnitConfig_TypeDefinitionIndex = 18644;

	class RogueActGetRogueMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_46C7DAD438735C46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_6_46C7DAD438735C46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6CA5BED8381394D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICUNITCONFIG_METHOD_6_6CA5BED8381394D3_OFFSET))(a1, a2);
		}
	};
}
