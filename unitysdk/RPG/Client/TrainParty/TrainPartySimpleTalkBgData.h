#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TrainPartyEventBgConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET_BGCONFIGJSONPATH_OFFSET UNITYSDK_OFFSET(0xCABDCF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET_BGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCABDC20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET_TRIGGERANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xCABDD60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCABDC90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCABDC10)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySimpleTalkBgData_TypeDefinitionIndex = 69400;

	class TrainPartySimpleTalkBgData : public ::System::Object
	{
	public:
		::System::UInt32 BgID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_BgImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET_BGIMAGEPATH_OFFSET))(this);
		}

		::System::String* get_BgConfigJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET_BGCONFIGJSONPATH_OFFSET))(this);
		}

		::System::String* get_TriggerAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET_TRIGGERANIMATIONNAME_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyEventBgConfigRow* get__Row()
		{
			return ((::RPG::GameCore::TrainPartyEventBgConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSIMPLETALKBGDATA_GET__ROW_OFFSET))(this);
		}
	};
}
