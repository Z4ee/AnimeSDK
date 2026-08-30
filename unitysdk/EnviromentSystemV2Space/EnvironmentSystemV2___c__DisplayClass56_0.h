#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_357;
class Class_0_16E4307DCC419505_374;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { template <typename T> class Action_1; }

#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x106E5B90)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x106E76B0)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0x106E7A90)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvironmentSystemV2___c__DisplayClass56_0_TypeDefinitionIndex = 49897;

	class EnvironmentSystemV2___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* __9__2; // 0x10
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish; // 0x18
		::Class_0_16E4307DCC419505_357* targetProfile; // 0x20
		::Class_0_16E4307DCC419505_374* h; // 0x28
		::RPG::GameCore::EnviromentControlPriority priority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__0_OFFSET))(this, a1);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__2_OFFSET))(this, a1);
		}
	};
}
