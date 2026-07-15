#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0729A0)
#define RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A072B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoEntranceConfigRow_TypeDefinitionIndex = 12304;

	class AvatarDemoEntranceConfigRow : public ::System::Object
	{
	public:
		::System::String* TrialRoleAvatarBackPath; // 0x10
		::System::String* TrialRoleAvatarFrontPath; // 0x18
		::System::String* TrialRoleAvatarPath; // 0x20
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
