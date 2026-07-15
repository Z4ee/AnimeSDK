#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CRPREFLECTIONSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD760)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPReflectionSettings_TypeDefinitionIndex = 64922;

	class CRPReflectionSettings : public ::System::Object
	{
	public:
		::System::Boolean EnableSSR; // 0x10
		::System::Single PlaneReflectionScale; // 0x14
		::System::Boolean UseSDRReflectionCube; // 0x18
		::System::Boolean EnableProbePreBRDF; // 0x19
		::System::Boolean HalfEnvDefault; // 0x1A
		::System::Boolean HalfEnvStory; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPREFLECTIONSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
