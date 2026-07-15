#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageSpecialChangeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGESPECIALCHANGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF60D00)
#define RPG_GAMECORE_MESSAGESPECIALCHANGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF60E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageSpecialChangeRow_TypeDefinitionIndex = 13894;

	class MessageSpecialChangeRow : public ::System::Object
	{
	public:
		::RPG::GameCore::MessageSpecialChangeType ActionType; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::UInt32 DialogShowID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESPECIALCHANGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MessageSpecialChangeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageSpecialChangeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESPECIALCHANGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
