#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x106D0AC0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvProfileDataBase_TypeDefinitionIndex = 49806;

	class EnvProfileDataBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 version; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEDATABASE__CTOR_OFFSET))(this);
		}
	};
}
