#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB2D1C0)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2D8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SKillNavigationConfigRow_TypeDefinitionIndex = 13716;

	class SKillNavigationConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Down; // 0x10
		::System::UInt32 Right; // 0x14
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x18
		::System::UInt32 PointID; // 0x1C
		::System::UInt32 Up; // 0x20
		::System::UInt32 Left; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SKillNavigationConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SKillNavigationConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
