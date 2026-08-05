#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class PayManagerCXHandheld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD3B90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS17_0__GETUSERCOLLECTIONSID_B__0_OFFSET UNITYSDK_OFFSET(0x1CFD3BA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS17_0__GETUSERCOLLECTIONSID_B__1_OFFSET UNITYSDK_OFFSET(0x1CFD3E80)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c__DisplayClass17_0_TypeDefinitionIndex = 20861;

	class PayManagerCXHandheld___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::PayManagerCXHandheld* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetUserCollectionsId_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS17_0__GETUSERCOLLECTIONSID_B__0_OFFSET))(this, result);
		}

		::System::Void _GetUserCollectionsId_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS17_0__GETUSERCOLLECTIONSID_B__1_OFFSET))(this);
		}
	};
}
