#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UI { class AcknowledgeEventIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3BCBD70)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCBD50)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x3A2C790)
#define EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x869800)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int AcknowledgeEventIdOptionsInternal_TypeDefinitionIndex = 44972;

	struct alignas(8) AcknowledgeEventIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt64 m_UiEventId; // 0x18
		::Epic::OnlineServices::Result m_Result; // 0x20

		::System::Void set_UiEventId(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_UIEVENTID_OFFSET))(this, a1);
		}

		::System::Void set_Result(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_RESULT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UI::AcknowledgeEventIdOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::AcknowledgeEventIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ACKNOWLEDGEEVENTIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
