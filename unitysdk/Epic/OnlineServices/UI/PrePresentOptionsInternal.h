#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UI { class PrePresentOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A39C70)
#define EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A39BF0)
#define EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A39BD0)
#define EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_SET_PLATFORMSPECIFICDATA_OFFSET UNITYSDK_OFFSET(0x7BE220)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int PrePresentOptionsInternal_TypeDefinitionIndex = 42812;

	struct alignas(8) PrePresentOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlatformSpecificData; // 0x18

		::System::Void set_PlatformSpecificData(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_SET_PLATFORMSPECIFICDATA_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UI::PrePresentOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::PrePresentOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
