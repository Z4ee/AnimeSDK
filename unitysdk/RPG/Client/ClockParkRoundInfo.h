#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkRoundType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ClockParkRoundRow; }

#define RPG_CLIENT_CLOCKPARKROUNDINFO_GET_DICESPECIALDISPLAY_OFFSET UNITYSDK_OFFSET(0x1AE0DB20)
#define RPG_CLIENT_CLOCKPARKROUNDINFO_GET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x1AE0DAE0)
#define RPG_CLIENT_CLOCKPARKROUNDINFO_GET_ROUNDTYPE_OFFSET UNITYSDK_OFFSET(0x1AE08900)
#define RPG_CLIENT_CLOCKPARKROUNDINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE0DB00)
#define RPG_CLIENT_CLOCKPARKROUNDINFO_SET_ROUNDID_OFFSET UNITYSDK_OFFSET(0x1AE0DAF0)
#define RPG_CLIENT_CLOCKPARKROUNDINFO_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE0DB10)
#define RPG_CLIENT_CLOCKPARKROUNDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE02C20)
#define RPG_CLIENT_CLOCKPARKROUNDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE03050)
#define RPG_CLIENT_CLOCKPARKROUNDINFO__ONROUNDCHANGED_OFFSET UNITYSDK_OFFSET(0x1AE0DA70)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkRoundInfo_TypeDefinitionIndex = 58755;

	class ClockParkRoundInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkRoundRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _RoundID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void _OnRoundChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO__ONROUNDCHANGED_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO_GET_ROUNDID_OFFSET))(this);
		}

		::System::Void set_RoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO_SET_ROUNDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ClockParkRoundRow* get_Row()
		{
			return ((::RPG::GameCore::ClockParkRoundRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ClockParkRoundRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkRoundRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ClockParkRoundType get_RoundType()
		{
			return ((::RPG::GameCore::ClockParkRoundType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO_GET_ROUNDTYPE_OFFSET))(this);
		}

		::System::Boolean get_DiceSpecialDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKROUNDINFO_GET_DICESPECIALDISPLAY_OFFSET))(this);
		}
	};
}
