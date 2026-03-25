#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Scripting/PreserveAttribute.h"

namespace System { class Type; }

#define SRF_SERVICE_SERVICECONSTRUCTORATTRIBUTE_GET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1846E760)
#define SRF_SERVICE_SERVICECONSTRUCTORATTRIBUTE_SET_SERVICETYPE_OFFSET UNITYSDK_OFFSET(0x1846E770)
#define SRF_SERVICE_SERVICECONSTRUCTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1846E750)

namespace SRF::Service
{
	inline static constexpr unsigned int ServiceConstructorAttribute_TypeDefinitionIndex = 27696;

	class ServiceConstructorAttribute : public ::UnityEngine::Scripting::PreserveAttribute
	{
	public:
		::System::Type* _ServiceType_k__BackingField; // 0x10

		::System::Void _ctor(::System::Type* serviceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICECONSTRUCTORATTRIBUTE__CTOR_OFFSET))(this, serviceType);
		}

		::System::Type* get_ServiceType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICECONSTRUCTORATTRIBUTE_GET_SERVICETYPE_OFFSET))(this);
		}

		::System::Void set_ServiceType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_SERVICE_SERVICECONSTRUCTORATTRIBUTE_SET_SERVICETYPE_OFFSET))(this, value);
		}
	};
}
