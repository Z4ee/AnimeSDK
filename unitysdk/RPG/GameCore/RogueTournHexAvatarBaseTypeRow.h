#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB78880)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB78EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHexAvatarBaseTypeRow_TypeDefinitionIndex = 14444;

	class RogueTournHexAvatarBaseTypeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* AvatarDamageType; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* AvatarType; // 0x18
		::System::UInt32 MiracleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
