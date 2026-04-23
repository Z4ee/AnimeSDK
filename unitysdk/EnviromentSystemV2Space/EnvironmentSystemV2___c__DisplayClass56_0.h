#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }

#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF931E30)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0xF934E60)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__1_OFFSET UNITYSDK_OFFSET(0xF934E80)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvironmentSystemV2___c__DisplayClass56_0_TypeDefinitionIndex = 46069;

	class EnvironmentSystemV2___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_318* h; // 0x10
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* onFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActiveProfileImmediatelyWithAsyncResLoading_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__0_OFFSET))(this);
		}

		::System::Void _SetActiveProfileImmediatelyWithAsyncResLoading_b__1(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__DISPLAYCLASS56_0__SETACTIVEPROFILEIMMEDIATELYWITHASYNCRESLOADING_B__1_OFFSET))(this, val);
		}
	};
}
