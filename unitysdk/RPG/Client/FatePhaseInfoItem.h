#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_EFE58C9DA09981B0;
namespace RPG::Client { class FateRoundInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEPHASEINFOITEM_ADDROUNDITEM_OFFSET UNITYSDK_OFFSET(0xA358E70)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_BUFFWEIGHTS_OFFSET UNITYSDK_OFFSET(0xA358FD0)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0xA358F50)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0xA348500)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0xA348920)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_ROUNDS_OFFSET UNITYSDK_OFFSET(0xA358FC0)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA358F60)
#define RPG_CLIENT_FATEPHASEINFOITEM_SETBUFFWEIGHTS_OFFSET UNITYSDK_OFFSET(0xA358F00)
#define RPG_CLIENT_FATEPHASEINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA358E10)

namespace RPG::Client
{
	inline static constexpr unsigned int FatePhaseInfoItem_TypeDefinitionIndex = 58980;

	class FatePhaseInfoItem : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _BuffWeights; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateRoundInfoItem*>* _Rounds; // 0x18
		::System::UInt32 _PhaseID; // 0x20

		::System::Void _ctor(::System::UInt32 phaseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM__CTOR_OFFSET))(this, phaseID);
		}

		::System::Void AddRoundItem(::RPG::Client::FateRoundInfoItem* roundItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRoundInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_ADDROUNDITEM_OFFSET))(this, roundItem);
		}

		::System::Void SetBuffWeights(::Il2CppArray<::RPG::GameCore::FixPoint>* buffWeights)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_SETBUFFWEIGHTS_OFFSET))(this, buffWeights);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEID_OFFSET))(this);
		}

		::System::UInt32 get_PhaseIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEINDEX_OFFSET))(this);
		}

		::System::String* get_PhaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRoundInfoItem*>* get_Rounds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRoundInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_ROUNDS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_BuffWeights()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET_BUFFWEIGHTS_OFFSET))(this);
		}

		::Class_1_EFE58C9DA09981B0* get__Row()
		{
			return ((::Class_1_EFE58C9DA09981B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET__ROW_OFFSET))(this);
		}
	};
}
