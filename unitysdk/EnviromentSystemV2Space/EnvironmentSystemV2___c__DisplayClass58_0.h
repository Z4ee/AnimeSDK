#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }

#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x153625F0)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS58_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x15364120)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS58_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__1_OFFSET UNITYSDK_OFFSET(0x15364140)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvironmentSystemV2___c__DisplayClass58_0_TypeDefinitionIndex = 49898;

	class EnvironmentSystemV2___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish; // 0x10
		::Class_0_16E4307DCC419505_374* h; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActiveProfileImmediatelyWithAsyncResLoading_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS58_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__0_OFFSET))(this);
		}

		::System::Void _SetActiveProfileImmediatelyWithAsyncResLoading_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS58_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__1_OFFSET))(this, a1);
		}
	};
}
