#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_336;
class Class_0_16E4307DCC419505_355;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { template <typename T> class Action_1; }

#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF1F7970)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS55_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0xF1F94C0)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS55_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0xF1F98A0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvironmentSystemV2___c__DisplayClass55_0_TypeDefinitionIndex = 47616;

	class EnvironmentSystemV2___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish; // 0x10
		::Class_0_16E4307DCC419505_355* h; // 0x18
		::Class_0_16E4307DCC419505_336* targetProfile; // 0x20
		::System::Action_1<::System::Boolean>* __9__2; // 0x28
		::RPG::GameCore::EnviromentControlPriority priority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS55_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__0_OFFSET))(this, a1);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS55_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__2_OFFSET))(this, a1);
		}
	};
}
