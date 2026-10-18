#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class AgeGatePayManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9DDA0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__2_OFFSET UNITYSDK_OFFSET(0x1BE9EA30)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__4_OFFSET UNITYSDK_OFFSET(0x1BE9EB70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int AgeGatePayManager___c__DisplayClass19_0_TypeDefinitionIndex = 8483;

	class AgeGatePayManager___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::AgeGatePayManager* __4__this; // 0x10
		::System::Action_1<::System::Int32>* __9__4; // 0x18
		::System::String* email; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__2_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__4(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER___C__DISPLAYCLASS19_0__SHOWPARENTCONSENTREQUIRED_B__4_OFFSET))(this, a1);
		}
	};
}
