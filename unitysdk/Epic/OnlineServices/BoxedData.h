#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_BOXEDDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0xB339F50)
#define EPIC_ONLINESERVICES_BOXEDDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0xB339F60)
#define EPIC_ONLINESERVICES_BOXEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB339F70)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int BoxedData_TypeDefinitionIndex = 44905;

	class BoxedData : public ::System::Object
	{
	public:
		::System::Object* _Data_k__BackingField; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Object* get_Data()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA_SET_DATA_OFFSET))(this, a1);
		}
	};
}
