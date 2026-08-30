#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Scripting/PreserveAttribute.h"

namespace System { class Type; }

#define SRF_SERVICE_SERVICESELECTORATTRIBUTE_GET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1EC41F70)
#define SRF_SERVICE_SERVICESELECTORATTRIBUTE_SET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1EC41F80)
#define SRF_SERVICE_SERVICESELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC41F60)

namespace SRF::Service
{
	inline static constexpr unsigned int ServiceSelectorAttribute_TypeDefinitionIndex = 34739;

	class ServiceSelectorAttribute : public ::UnityEngine::Scripting::PreserveAttribute
	{
	public:
		::System::Type* _ServiceType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICESELECTORATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_ServiceType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICESELECTORATTRIBUTE_GET_SERVICETYPE_OFFSET))(this);
		}

		::System::Void set_ServiceType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICESELECTORATTRIBUTE_SET_SERVICETYPE_OFFSET))(this, a1);
		}
	};
}
