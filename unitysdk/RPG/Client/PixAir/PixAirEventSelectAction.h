#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_7FF19F6206AF6DD7_39;
namespace RPG::Client::PixAir { class PixAirEventContentData; }
namespace RPG::Client::PixAir { class PixAirEventOptionData; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xC3CB590)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3CB7F0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_EVENTCONTENT_OFFSET UNITYSDK_OFFSET(0xC3CB860)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xC3CB870)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_SELECTOPTION_OFFSET UNITYSDK_OFFSET(0xC3CB600)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0xC3CB530)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CB500)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0xC3CB8E0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3CB950)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xC3CB880)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEventSelectAction_TypeDefinitionIndex = 73609;

	class PixAirEventSelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::Client::PixAir::PixAirEventContentData* _EventContent_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_7FF19F6206AF6DD7_39* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7FF19F6206AF6DD7_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_START_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::Void SelectOption(::RPG::Client::PixAir::PixAirEventOptionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEventOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_SELECTOPTION_OFFSET))(this, a1);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEventContentData* get_EventContent()
		{
			return ((::RPG::Client::PixAir::PixAirEventContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_EVENTCONTENT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_NODECASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET))(this);
		}
	};
}
