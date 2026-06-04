#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirBasicType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3CB100)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_DESCRIBE_OFFSET UNITYSDK_OFFSET(0xC3CB4C0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_EFFECTDESCRIBE_OFFSET UNITYSDK_OFFSET(0xC3CB4E0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xC3CB460)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xC3CB480)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_TRIGGERCONTENTID_OFFSET UNITYSDK_OFFSET(0xC3CB4A0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_ISCOSTENOUGH_OFFSET UNITYSDK_OFFSET(0xC3CB270)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_DESCRIBE_OFFSET UNITYSDK_OFFSET(0xC3CB4D0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_EFFECTDESCRIBE_OFFSET UNITYSDK_OFFSET(0xC3CB4F0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xC3CB470)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xC3CB490)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_TRIGGERCONTENTID_OFFSET UNITYSDK_OFFSET(0xC3CB4B0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CB260)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEventOptionData_TypeDefinitionIndex = 73666;

	class PixAirEventOptionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirBasicType, ::System::UInt32>* _BasicCost; // 0x10
		::RPG::Client::TextID _EffectDescribe_k__BackingField; // 0x18
		::System::UInt32 _EventID_k__BackingField; // 0x28
		::System::UInt32 _TriggerContentID_k__BackingField; // 0x2C
		::System::UInt32 _OptionID_k__BackingField; // 0x30
		::RPG::Client::TextID _Describe_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEventOptionData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::PixAir::PixAirEventOptionData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean IsCostEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_ISCOSTENOUGH_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_OPTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TriggerContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_TRIGGERCONTENTID_OFFSET))(this);
		}

		::System::Void set_TriggerContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_TRIGGERCONTENTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Describe()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_DESCRIBE_OFFSET))(this);
		}

		::System::Void set_Describe(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_DESCRIBE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EffectDescribe()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_GET_EFFECTDESCRIBE_OFFSET))(this);
		}

		::System::Void set_EffectDescribe(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTOPTIONDATA_SET_EFFECTDESCRIBE_OFFSET))(this, a1);
		}
	};
}
