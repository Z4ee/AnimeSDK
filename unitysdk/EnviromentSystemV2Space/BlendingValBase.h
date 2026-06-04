#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENVIROMENTSYSTEMV2SPACE_BLENDINGVALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x135CFE50)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int BlendingValBase_TypeDefinitionIndex = 46501;

	class BlendingValBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_BLENDINGVALBASE__CTOR_OFFSET))(this);
		}
	};
}
