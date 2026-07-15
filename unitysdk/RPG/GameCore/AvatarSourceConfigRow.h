#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARSOURCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A3D6130)
#define RPG_GAMECORE_AVATARSOURCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D6220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSourceConfigRow_TypeDefinitionIndex = 10583;

	class AvatarSourceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 SourceAvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSOURCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarSourceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSourceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSOURCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
