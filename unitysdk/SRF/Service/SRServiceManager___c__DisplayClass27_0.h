#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Service { class SRServiceManager_ServiceStub; }
namespace SRF::Service { class ServiceConstructorAttribute; }
namespace System::Reflection { class MethodInfo; }

#define SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC41A30)
#define SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS27_0__SCANTYPEFORCONSTRUCTORS_B__0_OFFSET UNITYSDK_OFFSET(0x1EC41C70)
#define SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS27_0__SCANTYPEFORCONSTRUCTORS_B__1_OFFSET UNITYSDK_OFFSET(0x1EC41CA0)

namespace SRF::Service
{
	inline static constexpr unsigned int SRServiceManager___c__DisplayClass27_0_TypeDefinitionIndex = 34752;

	class SRServiceManager___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::SRF::Service::ServiceConstructorAttribute* attrib; // 0x10
		::System::Reflection::MethodInfo* m; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ScanTypeForConstructors_b__0(::SRF::Service::SRServiceManager_ServiceStub* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRF::Service::SRServiceManager_ServiceStub*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS27_0__SCANTYPEFORCONSTRUCTORS_B__0_OFFSET))(this, a1);
		}

		::System::Object* _ScanTypeForConstructors_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER___C__DISPLAYCLASS27_0__SCANTYPEFORCONSTRUCTORS_B__1_OFFSET))(this);
		}
	};
}
