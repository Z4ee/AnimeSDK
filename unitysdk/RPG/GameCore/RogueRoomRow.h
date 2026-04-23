#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D65F00)
#define RPG_GAMECORE_ROGUEROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D66150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueRoomRow_TypeDefinitionIndex = 13910;

	class RogueRoomRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RogueRoomSections; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GroupWithContent; // 0x18
		::System::UInt32 RogueRoomType; // 0x20
		::System::UInt32 MapEntrance; // 0x24
		::System::UInt32 RogueRoomID; // 0x28
		::System::UInt32 GroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueRoomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
