#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPOSITECONFIG_METHOD_3_6F24BD63836F0306_OFFSET UNITYSDK_OFFSET(0x1BC29B00)
#define RPG_GAMECORE_COMPOSITECONFIG_METHOD_3_E20A401761F3DC72_OFFSET UNITYSDK_OFFSET(0x1BC29F90)
#define RPG_GAMECORE_COMPOSITECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC29F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CompositeConfig_TypeDefinitionIndex = 22924;

	class CompositeConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPOSITECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F24BD63836F0306(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CompositeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CompositeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPOSITECONFIG_METHOD_3_6F24BD63836F0306_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E20A401761F3DC72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CompositeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CompositeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPOSITECONFIG_METHOD_3_E20A401761F3DC72_OFFSET))(a1, a2);
		}
	};
}
