#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Scripting/PreserveAttribute.h"

namespace System { class Type; }

#define SRF_SERVICE_SERVICEATTRIBUTE_GET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x19EA9640)
#define SRF_SERVICE_SERVICEATTRIBUTE_SET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x19EA9650)
#define SRF_SERVICE_SERVICEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA9630)

namespace SRF::Service
{
	inline static constexpr unsigned int ServiceAttribute_TypeDefinitionIndex = 33318;

	class ServiceAttribute : public ::UnityEngine::Scripting::PreserveAttribute
	{
	public:
		::System::Type* _ServiceType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* serviceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICEATTRIBUTE__CTOR_OFFSET))(this, serviceType);
		}

		::System::Type* get_ServiceType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICEATTRIBUTE_GET_SERVICETYPE_OFFSET))(this);
		}

		::System::Void set_ServiceType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICEATTRIBUTE_SET_SERVICETYPE_OFFSET))(this, value);
		}
	};
}
