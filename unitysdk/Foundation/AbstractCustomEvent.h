#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_ABSTRACTCUSTOMEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D8F5790)
#define FOUNDATION_ABSTRACTCUSTOMEVENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D8F56D0)
#define FOUNDATION_ABSTRACTCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F5670)

namespace Foundation
{
	inline static constexpr unsigned int AbstractCustomEvent_TypeDefinitionIndex = 7882;

	class AbstractCustomEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* invokeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ABSTRACTCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ABSTRACTCUSTOMEVENT_FINALIZE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ABSTRACTCUSTOMEVENT_CLEAR_OFFSET))(this);
		}
	};
}
