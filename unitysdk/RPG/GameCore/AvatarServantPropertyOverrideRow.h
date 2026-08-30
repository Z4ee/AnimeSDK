#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE4C870)
#define RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4CF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantPropertyOverrideRow_TypeDefinitionIndex = 12720;

	class AvatarServantPropertyOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* HidePropertyInBattleList; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* SecretPropertyList; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* HidePropertyList; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::String*>* SkillPointIconSourceTriggerKey; // 0x28
		::System::UInt32 ServantID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarServantPropertyOverrideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarServantPropertyOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTPROPERTYOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
