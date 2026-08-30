#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG_METHOD_2_03B65456493461F9_OFFSET UNITYSDK_OFFSET(0x1CE69B20)
#define RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE69CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaselineAvatarPreloadConfig_TypeDefinitionIndex = 16181;

	class BaselineAvatarPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AvatarAssetList; // 0x10
		::Il2CppArray<::System::String*>* NPCAssetList; // 0x18
		::Il2CppArray<::System::String*>* MonsterAssetList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_03B65456493461F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaselineAvatarPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaselineAvatarPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELINEAVATARPRELOADCONFIG_METHOD_2_03B65456493461F9_OFFSET))(a1, a2);
		}
	};
}
