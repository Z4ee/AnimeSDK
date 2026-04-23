#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB68E670)
#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB68E620)
#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xB68E6C0)
#define RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB68E720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FeverTimeInfoChangeParam_TypeDefinitionIndex = 52391;

	class FeverTimeInfoChangeParam : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::FixPoint CurProgress; // 0x18
		::RPG::GameCore::FeverTimePeriodType PeriodType; // 0x20
		::RPG::Client::TextID ToastTextID; // 0x28
		::RPG::GameCore::FixPoint MaxProgress; // 0x38
		::RPG::GameCore::FixPoint ToastDelta; // 0x40
		::RPG::GameCore::FeverTimeToastType ToastType; // 0x48
		::System::Boolean IsLimitReached; // 0x4C
		::RPG::GameCore::FixPoint ExtraCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_FillAmount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FEVERTIMEINFOCHANGEPARAM_GET_FILLAMOUNT_OFFSET))(this);
		}
	};
}
