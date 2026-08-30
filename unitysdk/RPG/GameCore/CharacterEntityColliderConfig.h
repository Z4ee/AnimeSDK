#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class EntityColliderCameraConfig; }

#define RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG_METHOD_2_B5B22BF0C4BB9585_OFFSET UNITYSDK_OFFSET(0x1D11FD30)
#define RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D120F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEntityColliderConfig_TypeDefinitionIndex = 16383;

	class CharacterEntityColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AvatarColliderCameraConfig* CharacterColliderCameraConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityColliderCameraConfig*>* EntityColliderCameraConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B5B22BF0C4BB9585(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEntityColliderConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEntityColliderConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG_METHOD_2_B5B22BF0C4BB9585_OFFSET))(a1, a2);
		}
	};
}
