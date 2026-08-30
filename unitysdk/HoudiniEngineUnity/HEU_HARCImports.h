#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_HARCIMPORTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4029E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HARCImports_TypeDefinitionIndex = 39227;

	class HEU_HARCImports : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HARCIMPORTS__CTOR_OFFSET))(this);
		}
	};
}
