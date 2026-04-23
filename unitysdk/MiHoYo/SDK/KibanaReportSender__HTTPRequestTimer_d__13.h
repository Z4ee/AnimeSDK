#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class KibanaReportSender; }

#define MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8D2E610)
#define MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D2E670)
#define MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D2E6D0)
#define MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8D2E680)
#define MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D2E600)
#define MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x8D2CD30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReportSender__HTTPRequestTimer_d__13_TypeDefinitionIndex = 43140;

	class KibanaReportSender__HTTPRequestTimer_d__13 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::KibanaReportSender* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER__HTTPREQUESTTIMER_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
