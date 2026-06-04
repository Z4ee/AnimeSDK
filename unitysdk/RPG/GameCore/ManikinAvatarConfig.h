#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MANIKINAVATARCONFIG_METHOD_2_01B925A53DCDACC5_OFFSET UNITYSDK_OFFSET(0x198B9600)
#define RPG_GAMECORE_MANIKINAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198B96D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinAvatarConfig_TypeDefinitionIndex = 18015;

	class ManikinAvatarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AvatarPrefabPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_01B925A53DCDACC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINAVATARCONFIG_METHOD_2_01B925A53DCDACC5_OFFSET))(a1, a2);
		}
	};
}
