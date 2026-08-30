#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPLightDebugData.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_CRPLIGHTDEBUG_RESET_OFFSET UNITYSDK_OFFSET(0x3B7F6D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPLightDebug_TypeDefinitionIndex = 36884;

	struct alignas(8) CRPLightDebug
	{
		::System::Int32 frame; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::CRPLightDebugData>* lightInfos; // 0x18
		::System::Int32 supplementLightIndex; // 0x20
		::System::Int32 localLightIndex; // 0x24

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPLIGHTDEBUG_RESET_OFFSET))(this);
		}
	};
}
