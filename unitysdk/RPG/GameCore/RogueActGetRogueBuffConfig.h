#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_C781D89B0997505A_OFFSET UNITYSDK_OFFSET(0x18CC2CE0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_FCD3053D93366AFF_OFFSET UNITYSDK_OFFSET(0x18CC2F00)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC2E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffConfig_TypeDefinitionIndex = 18589;

	class RogueActGetRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C781D89B0997505A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_C781D89B0997505A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FCD3053D93366AFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_FCD3053D93366AFF_OFFSET))(a1, a2);
		}
	};
}
