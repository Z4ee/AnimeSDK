#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194928B0)
#define RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19492A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoEntranceConfigRow_TypeDefinitionIndex = 12170;

	class AvatarDemoEntranceConfigRow : public ::System::Object
	{
	public:
		::System::String* TrialRoleAvatarPath; // 0x10
		::System::String* TrialRoleAvatarBackPath; // 0x18
		::System::String* TrialRoleAvatarFrontPath; // 0x20
		::System::UInt32 StageID; // 0x28
		::System::UInt32 AvatarID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarDemoEntranceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDemoEntranceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
