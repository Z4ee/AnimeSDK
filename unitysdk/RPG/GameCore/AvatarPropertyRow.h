#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186CB610)
#define RPG_GAMECORE_AVATARPROPERTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186CD160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyRow_TypeDefinitionIndex = 12042;

	class AvatarPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 PropertyClassify; // 0x18
		::System::UInt32 MainRelicFilter; // 0x1C
		::System::UInt32 SubRelicFilter; // 0x20
		::System::UInt32 Order; // 0x24
		::System::UInt32 PropertyInstructionID; // 0x28
		::System::Boolean isBattleDisplay; // 0x2C
		::System::Boolean IsDisplay; // 0x2D
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x30
		::RPG::Client::TextID PropertyNameSkillTree; // 0x38
		::RPG::Client::TextID PropertyNameFilter; // 0x48
		::RPG::Client::TextID PropertyNameRelic; // 0x58
		::RPG::Client::TextID PropertyName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPropertyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPropertyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
