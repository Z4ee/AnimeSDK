#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHESTGROUPPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187EF2B0)
#define RPG_GAMECORE_CHESTGROUPPROPERTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187EF4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChestGroupPropertyRow_TypeDefinitionIndex = 13645;

	class ChestGroupPropertyRow : public ::System::Object
	{
	public:
		::System::String* GroupProperty; // 0x10
		::System::UInt32 LittleGameEntityID; // 0x18
		::System::UInt32 ChestID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 GPValue; // 0x28
		::System::UInt32 InstanceID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESTGROUPPROPERTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChestGroupPropertyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChestGroupPropertyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESTGROUPPROPERTYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
