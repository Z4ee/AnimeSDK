#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class AgeGatePayManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1759F290)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__3_OFFSET UNITYSDK_OFFSET(0x1759FC50)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__5_OFFSET UNITYSDK_OFFSET(0x1759FDC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int AgeGatePayManager___c__DisplayClass19_0_TypeDefinitionIndex = 7501;

	class AgeGatePayManager___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::AgeGatePayManager* __4__this; // 0x10
		::System::String* email; // 0x18
		::System::Action_1<::System::Int32>* __9__5; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__3_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__5(::System::Int32 cooldown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__5_OFFSET))(this, cooldown);
		}
	};
}
