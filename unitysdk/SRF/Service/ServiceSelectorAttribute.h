#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Scripting/PreserveAttribute.h"

namespace System { class Type; }

#define SRF_SERVICE_SERVICESELECTORATTRIBUTE_GET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1846E790)
#define SRF_SERVICE_SERVICESELECTORATTRIBUTE_SET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1846E7A0)
#define SRF_SERVICE_SERVICESELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1846E780)

namespace SRF::Service
{
	inline static constexpr unsigned int ServiceSelectorAttribute_TypeDefinitionIndex = 27695;

	class ServiceSelectorAttribute : public ::UnityEngine::Scripting::PreserveAttribute
	{
	public:
		::System::Type* _ServiceType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* serviceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICESELECTORATTRIBUTE__CTOR_OFFSET))(this, serviceType);
		}

		::System::Type* get_ServiceType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICESELECTORATTRIBUTE_GET_SERVICETYPE_OFFSET))(this);
		}

		::System::Void set_ServiceType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICESELECTORATTRIBUTE_SET_SERVICETYPE_OFFSET))(this, value);
		}
	};
}
