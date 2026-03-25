#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChestType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZECHESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173BF9D0)
#define RPG_GAMECORE_MAZECHESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173BFBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeChestRow_TypeDefinitionIndex = 13177;

	class MazeChestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChestType>* ChestType; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 WorldID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazeChestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeChestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
