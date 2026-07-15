#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMSTROYLINEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B024C50)
#define RPG_GAMECORE_ITEMSTROYLINEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B024D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemStroyLineRow_TypeDefinitionIndex = 13396;

	class ItemStroyLineRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StoryLineIDList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMSTROYLINEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemStroyLineRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemStroyLineRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMSTROYLINEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
