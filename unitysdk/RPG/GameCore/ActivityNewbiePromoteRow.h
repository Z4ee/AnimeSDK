#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAFC420)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFCAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityNewbiePromoteRow_TypeDefinitionIndex = 10834;

	class ActivityNewbiePromoteRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayItem; // 0x10
		::System::UInt32 SortID; // 0x14
		::RPG::Client::TextID Desc; // 0x18
		::System::UInt32 FinishQuest; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityNewbiePromoteRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityNewbiePromoteRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
