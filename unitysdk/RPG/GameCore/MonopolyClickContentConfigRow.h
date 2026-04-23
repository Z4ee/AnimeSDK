#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B442A0)
#define RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B443C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyClickContentConfigRow_TypeDefinitionIndex = 11420;

	class MonopolyClickContentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ClickNum; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyClickContentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyClickContentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCLICKCONTENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
