#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x20F50)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_ISEXCLUSIVEINPUT_OFFSET UNITYSDK_OFFSET(0x21110)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x21060)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int OnDisplaySettingsUpdatedCallbackInfoInternal_TypeDefinitionIndex = 41945;

	struct alignas(8) OnDisplaySettingsUpdatedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::Int32 m_IsVisible; // 0x18
		::System::Int32 m_IsExclusiveInput; // 0x1C

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsExclusiveInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFOINTERNAL_GET_ISEXCLUSIVEINPUT_OFFSET))(this);
		}
	};
}
