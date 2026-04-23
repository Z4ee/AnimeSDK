#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_6_C21EFC21292E4537_OFFSET UNITYSDK_OFFSET(0x18CC2F10)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_6_D0D74110C6A8BA42_OFFSET UNITYSDK_OFFSET(0x18CC3130)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC3050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffWithBuffTypeConfig_TypeDefinitionIndex = 18671;

	class RogueActGetRogueBuffWithBuffTypeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C21EFC21292E4537(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_6_C21EFC21292E4537_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D0D74110C6A8BA42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffWithBuffTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFWITHBUFFTYPECONFIG_METHOD_6_D0D74110C6A8BA42_OFFSET))(a1, a2);
		}
	};
}
