#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_PAYINFOPARAM_EXPEND_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x7A3650)

namespace MoleMole
{
	inline static constexpr unsigned int PayInfoParam_Expend_TypeDefinitionIndex = 53303;

	struct alignas(4) PayInfoParam_Expend
	{
		::System::UInt32 tab_id; // 0x10

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PAYINFOPARAM_EXPEND_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}
	};
}
