#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESTARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19848110)
#define RPG_GAMECORE_IDLELIVESTARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19848310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveStarRow_TypeDefinitionIndex = 11296;

	class IdleLiveStarRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 FinishChapterID; // 0x20
		::System::UInt32 Star; // 0x24
		::System::UInt32 LiveRoomExpNeeded; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESTARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveStarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveStarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESTARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
