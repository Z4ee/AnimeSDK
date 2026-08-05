#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_BOXEDDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1D827AE0)
#define EPIC_ONLINESERVICES_BOXEDDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1D827AF0)
#define EPIC_ONLINESERVICES_BOXEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D827B00)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int BoxedData_TypeDefinitionIndex = 35500;

	class BoxedData : public ::System::Object
	{
	public:
		::System::Object* _Data_k__BackingField; // 0x10

		::System::Void _ctor(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA__CTOR_OFFSET))(this, data);
		}

		::System::Object* get_Data()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA_SET_DATA_OFFSET))(this, value);
		}
	};
}
