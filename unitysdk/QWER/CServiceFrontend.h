#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/SServiceFrontendID.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CRunner; }
namespace QWER { class IService; }

#define QWER_CSERVICEFRONTEND_EXECAWAKE_OFFSET UNITYSDK_OFFSET(0x1BE8AE10)
#define QWER_CSERVICEFRONTEND_GET_FRONTENDID_OFFSET UNITYSDK_OFFSET(0x1BE8ADF0)
#define QWER_CSERVICEFRONTEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8AE40)

namespace QWER
{
	inline static constexpr unsigned int CServiceFrontend_TypeDefinitionIndex = 85863;

	class CServiceFrontend : public ::System::Object
	{
	public:
		::QWER::CRunner* m_oRunner; // 0x10
		::QWER::IService* m_oService; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CSERVICEFRONTEND__CTOR_OFFSET))(this);
		}

		::QWER::SServiceFrontendID get_FrontendID()
		{
			return ((::QWER::SServiceFrontendID(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CSERVICEFRONTEND_GET_FRONTENDID_OFFSET))(this);
		}

		::System::Void ExecAwake(::QWER::IService* oService)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::IService*))((::PBYTE)hIl2Cpp + QWER_CSERVICEFRONTEND_EXECAWAKE_OFFSET))(this, oService);
		}
	};
}
