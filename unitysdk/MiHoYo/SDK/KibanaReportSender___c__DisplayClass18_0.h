#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x84F9EF0)
#define MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x84FA770)
#define MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x84FAD70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReportSender___c__DisplayClass18_0_TypeDefinitionIndex = 37262;

	class KibanaReportSender___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostRequest_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__0_OFFSET))(this, responseString);
		}

		::System::Void _PostRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__1_OFFSET))(this);
		}
	};
}
