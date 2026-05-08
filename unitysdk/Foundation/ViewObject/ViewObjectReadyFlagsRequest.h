#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTREADYFLAGSREQUEST_EQUALS_OFFSET UNITYSDK_OFFSET(0x700DD0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectReadyFlagsRequest_TypeDefinitionIndex = 52664;

	struct alignas(4) ViewObjectReadyFlagsRequest
	{
		::System::UInt32 Flags; // 0x10
		::Foundation::ViewObject::EViewObjectComponentFeatureEvent FeatureEvent; // 0x14

		::System::Boolean Equals(::Foundation::ViewObject::ViewObjectReadyFlagsRequest other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectReadyFlagsRequest))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTREADYFLAGSREQUEST_EQUALS_OFFSET))(this, other);
		}
	};
}
