#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D709F0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D70FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentDisplayRow_TypeDefinitionIndex = 14258;

	class RogueTournContentDisplayRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::RPG::Client::TextID DisplayContent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournContentDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournContentDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
