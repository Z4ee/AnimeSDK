#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Service { class SRServiceManager_ServiceStub; }
namespace SRF::Service { class ServiceSelectorAttribute; }

#define SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1846E330)
#define SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS26_0__SCANTYPEFORSELECTORS_B__0_OFFSET UNITYSDK_OFFSET(0x1846E570)

namespace SRF::Service
{
	inline static constexpr unsigned int SRServiceManager___c__DisplayClass26_0_TypeDefinitionIndex = 27707;

	class SRServiceManager___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::SRF::Service::ServiceSelectorAttribute* attrib; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ScanTypeForSelectors_b__0(::SRF::Service::SRServiceManager_ServiceStub* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRF::Service::SRServiceManager_ServiceStub*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS26_0__SCANTYPEFORSELECTORS_B__0_OFFSET))(this, p);
		}
	};
}
