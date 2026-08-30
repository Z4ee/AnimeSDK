#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }

#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x106C30E0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentProfile___c__DisplayClass31_0_TypeDefinitionIndex = 50013;

	class EnviromentProfile___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviromentProfile* __4__this; // 0x10
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onLoadFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}
	};
}
