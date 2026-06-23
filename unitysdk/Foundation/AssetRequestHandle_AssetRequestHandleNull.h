#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLENULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA307A0)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestHandle_AssetRequestHandleNull_TypeDefinitionIndex = 8239;

	class AssetRequestHandle_AssetRequestHandleNull : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLENULL__CTOR_OFFSET))(this);
		}
	};
}
