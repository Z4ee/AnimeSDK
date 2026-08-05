#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27D530)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS4_0__REQUESTHOSTADDR_B__0_OFFSET UNITYSDK_OFFSET(0x1D27D540)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService___c__DisplayClass4_0_TypeDefinitionIndex = 37147;

	class HoYoSDKHttpDnsService___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* callback; // 0x10
		::System::String* strHost; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestHostAddr_b__0(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* dicIps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS4_0__REQUESTHOSTADDR_B__0_OFFSET))(this, dicIps);
		}
	};
}
