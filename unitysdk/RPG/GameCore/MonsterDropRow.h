#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_MONSTERDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2CE570)
#define RPG_GAMECORE_MONSTERDROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CEC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDropRow_TypeDefinitionIndex = 14086;

	class MonsterDropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::UInt32 AvatarExpReward; // 0x18
		::System::UInt32 WorldLevel; // 0x1C
		::System::UInt32 MonsterTemplateID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterDropRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterDropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
