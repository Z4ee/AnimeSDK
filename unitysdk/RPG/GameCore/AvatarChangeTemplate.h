#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarChangeOption.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARCHANGETEMPLATE_METHOD_2_7BFFAC22DB9C4479_OFFSET UNITYSDK_OFFSET(0x1CE36FD0)
#define RPG_GAMECORE_AVATARCHANGETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE37320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarChangeTemplate_TypeDefinitionIndex = 16941;

	class AvatarChangeTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 NewAvatarID; // 0x10
		::System::UInt32 NewAvatarEnhancedID; // 0x14
		::RPG::GameCore::AvatarChangeOption Option; // 0x18
		::System::String* DepartedGroupName; // 0x20
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* InheritCurrentPropertyList; // 0x28
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* InheritOriginPropertyBlackList; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeNewAvatarCreate; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarCreate; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNewAvatarRefresh; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCHANGETEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7BFFAC22DB9C4479(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarChangeTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarChangeTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCHANGETEMPLATE_METHOD_2_7BFFAC22DB9C4479_OFFSET))(a1, a2);
		}
	};
}
