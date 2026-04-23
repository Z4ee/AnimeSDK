#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C5570)
#define RPG_GAMECORE_AVATARLINKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186C5690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarLinkRow_TypeDefinitionIndex = 12094;

	class AvatarLinkRow : public ::System::Object
	{
	public:
		::System::UInt32 LinkAvatar; // 0x10
		::System::UInt32 AvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarLinkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarLinkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
