#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_D40936EF3BF54118_69;
namespace RPG::Client::PixAir { class PixAirNodeContentSelectItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x1BD0CFF0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0x1BD0D060)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GET_CONTENTITEMS_OFFSET UNITYSDK_OFFSET(0x1BD0D0B0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0x1BD0D0C0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_SELECTCONTENT_OFFSET UNITYSDK_OFFSET(0x1BD0CF10)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0x1BD0CEB0)
#define RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD0C990)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeContentSelectAction_TypeDefinitionIndex = 78811;

	class PixAirNodeContentSelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirNodeContentSelectItem*>* _ContentItems_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_D40936EF3BF54118_69* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRNODECONTENTSELECTACTION__CTOR_OFFSET))(this, a1, a2);
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
	};
}
