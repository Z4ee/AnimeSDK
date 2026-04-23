#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186CC930)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186CD150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyOverrideRow_TypeDefinitionIndex = 12014;

	class AvatarPropertyOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* ShowPropertyList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* ShowPropertyInBattleList; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* HidePropertyInBattleList; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* HidePropertyList; // 0x28
		::System::UInt32 AvatarID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPropertyOverrideRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPropertyOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
