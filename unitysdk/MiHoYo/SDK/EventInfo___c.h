#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class EventInfo; }

#define MIHOYO_SDK_EVENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52D580)
#define MIHOYO_SDK_EVENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E52D5C0)
#define MIHOYO_SDK_EVENTINFO___C___CCTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0x1E52D5D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EventInfo___c_TypeDefinitionIndex = 37417;

	class EventInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::EventInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::EventInfo___c**)Il2CppClass::FromTypeDefinitionIndex(EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x29C20);
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
