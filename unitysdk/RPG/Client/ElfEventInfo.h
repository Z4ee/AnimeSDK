#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfSelectEventData; }
namespace RPG::Client { class ElfSelectEventMessageContactsData; }
namespace RPG::Client { class ElfSelectEventMessageData; }
namespace RPG::Client { class ElfSelectEventMessageSequence; }
namespace RPG::Client { class ElfSelectEventOptionEffectData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFEVENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC62310)
#define RPG_CLIENT_ELFEVENTINFO_GETCONTACTSDATA_OFFSET UNITYSDK_OFFSET(0x1AC62560)
#define RPG_CLIENT_ELFEVENTINFO_GETMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x1AC624B0)
#define RPG_CLIENT_ELFEVENTINFO_GETOPTIONEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x1AC62610)
#define RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1AC626C0)
#define RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AC62770)
#define RPG_CLIENT_ELFEVENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AC61850)
#define RPG_CLIENT_ELFEVENTINFO__ASSERTLIMITMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC61770)
#define RPG_CLIENT_ELFEVENTINFO__ASSERTSAMESPECIALCUSTOMERID_OFFSET UNITYSDK_OFFSET(0x1AC61670)
#define RPG_CLIENT_ELFEVENTINFO__BUILDSELECTEVENTMESSAGESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AC627C0)
#define RPG_CLIENT_ELFEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC62CE0)
#define RPG_CLIENT_ELFEVENTINFO__INITCONTACTDATA_OFFSET UNITYSDK_OFFSET(0x1AC618B0)
#define RPG_CLIENT_ELFEVENTINFO__INITEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1AC620C0)
#define RPG_CLIENT_ELFEVENTINFO__INITMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x1AC61E10)
#define RPG_CLIENT_ELFEVENTINFO__INITOPTIONEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x1AC61B60)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfEventInfo_TypeDefinitionIndex = 63729;

	class ElfEventInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventMessageData*>* _MessageDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventMessageContactsData*>* _ContactsDataDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventData*>* _EventDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfSelectEventOptionEffectData*>* _OptionEffectDataDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _AssertSameSpecialCustomerID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__ASSERTSAMESPECIALCUSTOMERID_OFFSET))(this, a1, a2);
		}

		::System::Void _AssertLimitMessage(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__ASSERTLIMITMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ElfSelectEventMessageData* GetMessageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventMessageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETMESSAGEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfSelectEventMessageContactsData* GetContactsData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventMessageContactsData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETCONTACTSDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfSelectEventOptionEffectData* GetOptionEffectData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventOptionEffectData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETOPTIONEFFECTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfSelectEventData* GetSelectEventData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfSelectEventMessageSequence* GetSelectEventMessageSequence(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfSelectEventMessageSequence*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO_GETSELECTEVENTMESSAGESEQUENCE_OFFSET))(this, a1);
		}

		::RPG::Client::ElfSelectEventMessageSequence* _BuildSelectEventMessageSequence(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfSelectEventMessageSequence*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__BUILDSELECTEVENTMESSAGESEQUENCE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitContactData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITCONTACTDATA_OFFSET))(this);
		}

		::System::Void _InitMessageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITMESSAGEDATA_OFFSET))(this);
		}

		::System::Void _InitOptionEffectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITOPTIONEFFECTDATA_OFFSET))(this);
		}

		::System::Void _InitEventData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFEVENTINFO__INITEVENTDATA_OFFSET))(this);
		}
	};
}
