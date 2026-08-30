#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarEventData; }
namespace RPG::Client { class PlanetFesAvatarEventOptionResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_ISALLRESULTGOT_OFFSET UNITYSDK_OFFSET(0x1C35CFC0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_ISSINGLEOPTION_OFFSET UNITYSDK_OFFSET(0x1C35CF60)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OPTIONBUBBLETALK_OFFSET UNITYSDK_OFFSET(0x1C35CF20)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OPTIONDESC_OFFSET UNITYSDK_OFFSET(0x1C35CF00)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x1C35CEE0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OWNEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x1C35D110)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_RESULTDICT_OFFSET UNITYSDK_OFFSET(0x1C35CF40)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OPTIONBUBBLETALK_OFFSET UNITYSDK_OFFSET(0x1C35CF30)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OPTIONDESC_OFFSET UNITYSDK_OFFSET(0x1C35CF10)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0x1C35CEF0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OWNEREVENTDATA_OFFSET UNITYSDK_OFFSET(0x1C35D120)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_RESULTDICT_OFFSET UNITYSDK_OFFSET(0x1C35CF50)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35CA30)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA__GETOPTIONPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1C35CD20)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEventOptionData_TypeDefinitionIndex = 66581;

	class PlanetFesAvatarEventOptionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>* _ResultDict_k__BackingField; // 0x10
		::RPG::Client::PlanetFesAvatarEventData* _OwnerEventData_k__BackingField; // 0x18
		::RPG::Client::TextID _OptionBubbleTalk_k__BackingField; // 0x20
		::RPG::Client::TextID _OptionDesc_k__BackingField; // 0x30
		::System::UInt32 _OptionID_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::PlanetFesAvatarEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PlanetFesAvatarEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetOptionProbability(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA__GETOPTIONPROBABILITY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OPTIONID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OptionDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OPTIONDESC_OFFSET))(this);
		}

		::System::Void set_OptionDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OPTIONDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_OptionBubbleTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OPTIONBUBBLETALK_OFFSET))(this);
		}

		::System::Void set_OptionBubbleTalk(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OPTIONBUBBLETALK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>* get_ResultDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_RESULTDICT_OFFSET))(this);
		}

		::System::Void set_ResultDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_RESULTDICT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSingleOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_ISSINGLEOPTION_OFFSET))(this);
		}

		::System::Boolean get_IsAllResultGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_ISALLRESULTGOT_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarEventData* get_OwnerEventData()
		{
			return ((::RPG::Client::PlanetFesAvatarEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_GET_OWNEREVENTDATA_OFFSET))(this);
		}

		::System::Void set_OwnerEventData(::RPG::Client::PlanetFesAvatarEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA_SET_OWNEREVENTDATA_OFFSET))(this, a1);
		}
	};
}
