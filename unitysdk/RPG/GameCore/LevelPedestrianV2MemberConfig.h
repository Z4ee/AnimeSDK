#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG_METHOD_2_D54F80D917D51117_OFFSET UNITYSDK_OFFSET(0x1B0852E0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B085440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberConfig_TypeDefinitionIndex = 16626;

	class LevelPedestrianV2MemberConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ExternalAssetConfigPath; // 0x10
		::System::Single OverrideSpawnMaxDistance; // 0x18
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberInfo*>* Members; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D54F80D917D51117(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2MemberConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2MemberConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERCONFIG_METHOD_2_D54F80D917D51117_OFFSET))(a1, a2);
		}
	};
}
