#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARDETAILTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A075420)
#define RPG_GAMECORE_AVATARDETAILTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A075A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDetailTabRow_TypeDefinitionIndex = 12286;

	class AvatarDetailTabRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* TabName; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarDetailTabRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDetailTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
