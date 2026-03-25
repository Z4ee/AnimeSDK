#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageSpecialChangeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGESPECIALCHANGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173D9140)
#define RPG_GAMECORE_MESSAGESPECIALCHANGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173D9280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageSpecialChangeRow_TypeDefinitionIndex = 13215;

	class MessageSpecialChangeRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::RPG::GameCore::MessageSpecialChangeType ActionType; // 0x14
		::System::UInt32 DialogShowID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESPECIALCHANGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageSpecialChangeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageSpecialChangeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESPECIALCHANGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
