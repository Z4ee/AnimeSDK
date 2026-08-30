#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNROLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D48E290)
#define RPG_GAMECORE_ROGUETOURNROLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48E380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoleRow_TypeDefinitionIndex = 14836;

	class RogueTournRoleRow : public ::System::Object
	{
	public:
		::System::UInt32 BuffID; // 0x10
		::System::UInt32 AvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournRoleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournRoleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
