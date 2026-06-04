#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B35DC0)
#define RPG_GAMECORE_ROGUEDLCROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B35F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCRoomRow_TypeDefinitionIndex = 14044;

	class RogueDLCRoomRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RogueRoomSections; // 0x10
		::System::UInt32 RogueRoomID; // 0x18
		::RPG::GameCore::RogueSubMode RogueSubMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCRoomRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
