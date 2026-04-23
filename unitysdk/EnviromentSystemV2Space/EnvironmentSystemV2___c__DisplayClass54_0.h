#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_299;
class Class_0_16E4307DCC419505_318;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { template <typename T> class Action_1; }

#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF931A80)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS54_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0xF934AB0)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS54_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0xF934DA0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvironmentSystemV2___c__DisplayClass54_0_TypeDefinitionIndex = 46068;

	class EnvironmentSystemV2___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_318* h; // 0x10
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish; // 0x18
		::Class_0_16E4307DCC419505_299* targetProfile; // 0x20
		::System::Action_1<::System::Boolean>* __9__2; // 0x28
		::RPG::GameCore::EnviromentControlPriority priority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__0(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS54_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__0_OFFSET))(this, v);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__2(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS54_0__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__2_OFFSET))(this, val);
		}
	};
}
