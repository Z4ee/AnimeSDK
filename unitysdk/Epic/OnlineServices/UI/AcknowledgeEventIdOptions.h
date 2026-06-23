#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1CBDDB60)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1CBDDB40)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x1CBDDB70)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x1CBDDB50)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDDB80)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int AcknowledgeEventIdOptions_TypeDefinitionIndex = 34907;

	class AcknowledgeEventIdOptions : public ::System::Object
	{
	public:
		::System::UInt64 _UiEventId_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _Result_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_GET_UIEVENTID_OFFSET))(this);
		}

		::System::Void set_UiEventId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_SET_UIEVENTID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Result get_Result()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONS_SET_RESULT_OFFSET))(this, value);
		}
	};
}
