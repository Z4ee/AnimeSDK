#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLOWCANVAS_WILD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA95620)

namespace FlowCanvas
{
	inline static constexpr unsigned int Wild_TypeDefinitionIndex = 30371;

	class Wild : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_WILD__CTOR_OFFSET))(this);
		}
	};
}
