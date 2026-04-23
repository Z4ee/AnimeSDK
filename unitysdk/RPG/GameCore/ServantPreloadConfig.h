#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_8E0CA76276B3918C_OFFSET UNITYSDK_OFFSET(0x18E06300)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_AAFDFB12992C1B1F_OFFSET UNITYSDK_OFFSET(0x18E062C0)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E062F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantPreloadConfig_TypeDefinitionIndex = 15465;

	class ServantPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AAFDFB12992C1B1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_AAFDFB12992C1B1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E0CA76276B3918C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_8E0CA76276B3918C_OFFSET))(a1, a2);
		}
	};
}
