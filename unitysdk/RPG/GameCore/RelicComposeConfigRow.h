#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_RELICCOMPOSECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB813E0)
#define RPG_GAMECORE_RELICCOMPOSECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB81660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicComposeConfigRow_TypeDefinitionIndex = 13737;

	class RelicComposeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MaterialCost; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 CoinCost; // 0x20
		::System::UInt32 WorldLevelRequire; // 0x24
		::System::UInt32 Type; // 0x28
		::System::UInt32 Order; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCOMPOSECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicComposeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicComposeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCOMPOSECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
