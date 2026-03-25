#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17603D90)
#define RPG_GAMECORE_ROGUEDLCROOMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17603F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCRoomRow_TypeDefinitionIndex = 13506;

	class RogueDLCRoomRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RogueRoomSections; // 0x10
		::RPG::GameCore::RogueSubMode RogueSubMode; // 0x18
		::System::UInt32 RogueRoomID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCROOMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCRoomRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCRoomRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCROOMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
