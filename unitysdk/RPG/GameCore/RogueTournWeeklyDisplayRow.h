#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_73507DF29F8561CD;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BD14C0)
#define RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD1680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournWeeklyDisplayRow_TypeDefinitionIndex = 14248;

	class RogueTournWeeklyDisplayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_73507DF29F8561CD*>* DescParams; // 0x10
		::RPG::Client::TextID WeeklyDisplayContent; // 0x18
		::System::UInt32 WeeklyDisplayID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournWeeklyDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournWeeklyDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
