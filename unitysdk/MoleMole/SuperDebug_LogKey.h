#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_SUPERDEBUG_LOGKEY_GET_GRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x1F4C1B30)
#define MOLEMOLE_SUPERDEBUG_LOGKEY_GET_ZIPLINEHINT_OFFSET UNITYSDK_OFFSET(0x1F4C1AF0)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_LogKey_TypeDefinitionIndex = 7960;

	struct alignas(1) SuperDebug_LogKey
	{
		static ::System::String* get_ZipLineHint()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGKEY_GET_ZIPLINEHINT_OFFSET))();
		}

		static ::System::String* get_GraphEvent()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGKEY_GET_GRAPHEVENT_OFFSET))();
		}
	};
}
