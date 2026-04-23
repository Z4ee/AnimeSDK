#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9BDC0E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETFULLNODEPROGRESSTEXT_OFFSET UNITYSDK_OFFSET(0x9BDC320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETNODEROMANNUMBER_OFFSET UNITYSDK_OFFSET(0x9BDC200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0x9BDC0B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0x9BDC0D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SHOWRECOMMENDPOWER_OFFSET UNITYSDK_OFFSET(0x9BDC3E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDC1F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int NodeUIData_TypeDefinitionIndex = 69487;

	class NodeUIData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _SuggestPower_k__BackingField; // 0x18
		::RPG::Client::TextID _ChapterTitle; // 0x30
		::RPG::Client::TextID _ChapterRomanNumber; // 0x40
		::System::Boolean IsFinished; // 0x50
		::System::UInt32 _Index; // 0x54
		::System::UInt32 NodeType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_SuggestPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GET_SUGGESTPOWER_OFFSET))(this);
		}

		::System::Void set_SuggestPower(::RPG::Client::ActivityIdleLive::IdleLiveDecimal value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SET_SUGGESTPOWER_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityIdleLive::NodeUIData* Create(::RPG::Client::ActivityIdleLive::IdleLiveNode* node)
		{
			return ((::RPG::Client::ActivityIdleLive::NodeUIData*(*)(::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_CREATE_OFFSET))(node);
		}

		::System::String* GetNodeRomanNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETNODEROMANNUMBER_OFFSET))(this);
		}

		::System::String* GetFullNodeProgressText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETFULLNODEPROGRESSTEXT_OFFSET))(this);
		}

		::System::Boolean ShowRecommendPower()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SHOWRECOMMENDPOWER_OFFSET))(this);
		}
	};
}
