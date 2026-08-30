#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_AVATARINDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B814A0)
#define RPG_GAMECORE_AVATARINDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B58810)
#define RPG_GAMECORE_AVATARINDEX_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x2E7EAD0)
#define RPG_GAMECORE_AVATARINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B89AF0)
#define RPG_GAMECORE_AVATARINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarIndex_TypeDefinitionIndex = 15289;

	struct alignas(4) AvatarIndex
	{
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 EnhancedID; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINDEX__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINDEX_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::AvatarIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarIndex))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINDEX_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINDEX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARINDEX_TOSTRING_OFFSET))(this);
		}
	};
}
