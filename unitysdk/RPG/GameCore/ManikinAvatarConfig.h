#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MANIKINAVATARCONFIG_METHOD_2_01B925A53DCDACC5_OFFSET UNITYSDK_OFFSET(0x18A85EC0)
#define RPG_GAMECORE_MANIKINAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A85F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinAvatarConfig_TypeDefinitionIndex = 17988;

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
