#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_E2DCA4DCC2D0E91F;
namespace RPG::Client { class FateRoundInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEPHASEINFOITEM_ADDROUNDITEM_OFFSET UNITYSDK_OFFSET(0x1A5B8C50)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_BUFFWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1A5B8DE0)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1A5A60C0)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x1A5A58D0)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0x1A5A5E80)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET_ROUNDS_OFFSET UNITYSDK_OFFSET(0x1A5A5C30)
#define RPG_CLIENT_FATEPHASEINFOITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1A5B8D80)
#define RPG_CLIENT_FATEPHASEINFOITEM_SETBUFFWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1A5B8D30)
#define RPG_CLIENT_FATEPHASEINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B8BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FatePhaseInfoItem_TypeDefinitionIndex = 61195;

	class FatePhaseInfoItem : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _BuffWeights; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateRoundInfoItem*>* _Rounds; // 0x18
		::System::UInt32 _PhaseID; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddRoundItem(::RPG::Client::FateRoundInfoItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRoundInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_ADDROUNDITEM_OFFSET))(this, a1);
		}

		::System::Void SetBuffWeights(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_SETBUFFWEIGHTS_OFFSET))(this, a1);
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

		::Class_1_E2DCA4DCC2D0E91F* get__Row()
		{
			return ((::Class_1_E2DCA4DCC2D0E91F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEPHASEINFOITEM_GET__ROW_OFFSET))(this);
		}
	};
}
