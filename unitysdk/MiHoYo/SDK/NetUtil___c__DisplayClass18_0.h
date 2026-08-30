#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63A5D0)
#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS18_0__PERFORMHTTPREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1A63B1E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil___c__DisplayClass18_0_TypeDefinitionIndex = 8151;

	class NetUtil___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* completeCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformHttpRequest_b__0(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS18_0__PERFORMHTTPREQUEST_B__0_OFFSET))(this, a1, a2);
		}
	};
}
