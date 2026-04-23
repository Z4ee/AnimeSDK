#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18623CD0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18624340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityNewbiePromoteRow_TypeDefinitionIndex = 10728;

	class ActivityNewbiePromoteRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::System::UInt32 SortID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 DisplayItem; // 0x28
		::System::UInt32 FinishQuest; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityNewbiePromoteRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityNewbiePromoteRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
