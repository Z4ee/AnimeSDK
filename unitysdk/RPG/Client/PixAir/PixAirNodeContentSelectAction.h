#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_D40936EF3BF54118_67;
namespace RPG::Client::PixAir { class PixAirNodeContentSelectItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xC3E0270)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3E02E0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GET_CONTENTITEMS_OFFSET UNITYSDK_OFFSET(0xC3E0330)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xC3E0340)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_SELECTCONTENT_OFFSET UNITYSDK_OFFSET(0xC3E0190)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0xC3E0130)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3DFD30)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0xC3E03B0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3E0420)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xC3E0350)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeContentSelectAction_TypeDefinitionIndex = 73615;

	class PixAirNodeContentSelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeContentSelectItem*>* _ContentItems_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_67* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_START_OFFSET))(this);
		}

		::System::Void SelectContent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_SELECTCONTENT_OFFSET))(this, a1);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeContentSelectItem*>* get_ContentItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeContentSelectItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GET_CONTENTITEMS_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GET_NODECASE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET))(this);
		}
	};
}
