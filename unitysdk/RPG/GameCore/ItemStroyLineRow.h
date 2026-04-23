#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMSTROYLINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A33140)
#define RPG_GAMECORE_ITEMSTROYLINEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A33260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemStroyLineRow_TypeDefinitionIndex = 13169;

	class ItemStroyLineRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StoryLineIDList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMSTROYLINEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemStroyLineRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemStroyLineRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMSTROYLINEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
