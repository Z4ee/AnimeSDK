#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class EventInfo; }

#define MIHOYO_SDK_EVENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD91A30)
#define MIHOYO_SDK_EVENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD91A70)
#define MIHOYO_SDK_EVENTINFO___C___CCTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0x1AD91A80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EventInfo___c_TypeDefinitionIndex = 35192;

	class EventInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::EventInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::EventInfo___c**)Il2CppClass::FromTypeDefinitionIndex(EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x26800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::EventInfo* __cctor_b__54_0()
		{
			return ((::MiHoYo::SDK::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO___C___CCTOR_B__54_0_OFFSET))(this);
		}
	};
}
