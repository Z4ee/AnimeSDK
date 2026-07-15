#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYSPAWNCONFIG_METHOD_2_4804E50858EF8AB8_OFFSET UNITYSDK_OFFSET(0x1C055620)
#define RPG_GAMECORE_ENTITYSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C056B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntitySpawnConfig_TypeDefinitionIndex = 18462;

	class EntitySpawnConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean NeedBlackIn; // 0x10
		::System::Single BlackInDistance; // 0x14
		::System::Boolean NeedFadeIn; // 0x18
		::System::Boolean NeedFadeOut; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSPAWNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4804E50858EF8AB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntitySpawnConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntitySpawnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYSPAWNCONFIG_METHOD_2_4804E50858EF8AB8_OFFSET))(a1, a2);
		}
	};
}
