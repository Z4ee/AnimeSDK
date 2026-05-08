#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_RESOURCEMGR__CTOR_OFFSET UNITYSDK_OFFSET(0xF5D1E60)

namespace Foundation
{
	inline static constexpr unsigned int ResourceMgr_TypeDefinitionIndex = 57966;

	class ResourceMgr : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESOURCEMGR__CTOR_OFFSET))(this);
		}
	};
}
