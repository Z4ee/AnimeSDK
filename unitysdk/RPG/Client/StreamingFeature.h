#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_STREAMINGFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0xE105AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int StreamingFeature_TypeDefinitionIndex = 67934;

	class StreamingFeature : public ::System::Object
	{
	public:
		::System::Boolean LodDither; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STREAMINGFEATURE__CTOR_OFFSET))(this);
		}
	};
}
