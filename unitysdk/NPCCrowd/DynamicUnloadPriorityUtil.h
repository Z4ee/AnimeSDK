#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_DYNAMICUNLOADPRIORITYUTIL_FROMINT_OFFSET UNITYSDK_OFFSET(0xEBDCDA0)
#define NPCCROWD_DYNAMICUNLOADPRIORITYUTIL_TODISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xEBDCCB0)

namespace NPCCrowd
{
	inline static constexpr unsigned int DynamicUnloadPriorityUtil_TypeDefinitionIndex = 85636;

	class DynamicUnloadPriorityUtil : public ::System::Object
	{
	public:
		static ::System::String* ToDisplayName(::NPCCrowd::EDynamicUnloadPriority priority)
		{
			return ((::System::String*(*)(::NPCCrowd::EDynamicUnloadPriority))((::PBYTE)hIl2Cpp + NPCCROWD_DYNAMICUNLOADPRIORITYUTIL_TODISPLAYNAME_OFFSET))(priority);
		}

		static ::NPCCrowd::EDynamicUnloadPriority FromInt(::System::Int32 value)
		{
			return ((::NPCCrowd::EDynamicUnloadPriority(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_DYNAMICUNLOADPRIORITYUTIL_FROMINT_OFFSET))(value);
		}
	};
}
