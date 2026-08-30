#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TELEMETRYINTERFACE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD37C70)
#define MIHOYO_SDK_TELEMETRYINTERFACE___C__DISPLAYCLASS6_0__DESTORY_B__0_OFFSET UNITYSDK_OFFSET(0x1CD39620)
#define MIHOYO_SDK_TELEMETRYINTERFACE___C__DISPLAYCLASS6_0__DESTORY_B__1_OFFSET UNITYSDK_OFFSET(0x1CD397E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryInterface___c__DisplayClass6_0_TypeDefinitionIndex = 47033;

	class TelemetryInterface___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::Action* __9__1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _Destory_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE___C__DISPLAYCLASS6_0__DESTORY_B__0_OFFSET))(this, a1);
		}

		::System::Void _Destory_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE___C__DISPLAYCLASS6_0__DESTORY_B__1_OFFSET))(this);
		}
	};
}
