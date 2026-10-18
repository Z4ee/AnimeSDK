#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D41D9E0)
#define RPG_GAMECORE_AVATARPROPERTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41F360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyRow_TypeDefinitionIndex = 12745;

	class AvatarPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 SubRelicFilter; // 0x18
		::System::Boolean IsDisplay; // 0x1C
		::System::Boolean isBattleDisplay; // 0x1D
		::RPG::Client::TextID PropertyName; // 0x20
		::RPG::Client::TextID PropertyNameFilter; // 0x30
		::RPG::Client::TextID PropertyNameRelic; // 0x40
		::System::UInt32 PropertyInstructionID; // 0x50
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x54
		::System::UInt32 PropertyClassify; // 0x58
		::System::UInt32 MainRelicFilter; // 0x5C
		::RPG::Client::TextID PropertyNameSkillTree; // 0x60
		::System::UInt32 Order; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarPropertyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPropertyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
