#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/UI/OnDisplaySettingsUpdatedCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BF3920)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BF38C0)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GET_ISEXCLUSIVEINPUT_OFFSET UNITYSDK_OFFSET(0x8BF3900)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x8BF38E0)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8BF3F40)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BF38D0)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_ISEXCLUSIVEINPUT_OFFSET UNITYSDK_OFFSET(0x8BF3910)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x8BF38F0)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8BF3930)
#define EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF4050)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int OnDisplaySettingsUpdatedCallbackInfo_TypeDefinitionIndex = 41141;

	class OnDisplaySettingsUpdatedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::Boolean _IsExclusiveInput_k__BackingField; // 0x18
		::System::Boolean _IsVisible_k__BackingField; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsExclusiveInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GET_ISEXCLUSIVEINPUT_OFFSET))(this);
		}

		::System::Void set_IsExclusiveInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_ISEXCLUSIVEINPUT_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ONDISPLAYSETTINGSUPDATEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
