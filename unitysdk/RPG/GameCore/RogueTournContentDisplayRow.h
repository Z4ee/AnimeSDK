#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB72810)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB72DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentDisplayRow_TypeDefinitionIndex = 14463;

	class RogueTournContentDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DisplayContent; // 0x10
		::System::UInt32 DisplayID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournContentDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournContentDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
