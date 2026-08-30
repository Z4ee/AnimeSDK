#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKHttpDnsService___c__DisplayClass5_0; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EB6C0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_1__REQUESTHOSTADDR_B__3_OFFSET UNITYSDK_OFFSET(0x1C6EE4C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService___c__DisplayClass5_1_TypeDefinitionIndex = 46555;

	class HoYoSDKHttpDnsService___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKHttpDnsService___c__DisplayClass5_0* CS___8__locals1; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::System::Action_1<::System::String*>* internalCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Void _RequestHostAddr_b__3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_1__REQUESTHOSTADDR_B__3_OFFSET))(this, a1);
		}
	};
}
