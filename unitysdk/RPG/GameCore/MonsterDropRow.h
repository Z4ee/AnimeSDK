#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_MONSTERDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B581F0)
#define RPG_GAMECORE_MONSTERDROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B58900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDropRow_TypeDefinitionIndex = 13450;

	class MonsterDropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::UInt32 WorldLevel; // 0x18
		::System::UInt32 MonsterTemplateID; // 0x1C
		::System::UInt32 AvatarExpReward; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterDropRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterDropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
