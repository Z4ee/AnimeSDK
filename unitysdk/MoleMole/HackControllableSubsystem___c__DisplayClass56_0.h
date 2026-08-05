#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1737BC40)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__3_OFFSET UNITYSDK_OFFSET(0x1737C090)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__4_OFFSET UNITYSDK_OFFSET(0x1737C0A0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__FINISHFORCEDEXITBLACKFADE_1_OFFSET UNITYSDK_OFFSET(0x1737BCA0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__ISBACKTOAVATARFINISHED_0_OFFSET UNITYSDK_OFFSET(0x1737BC50)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__STARTFORCEEXITBLACKFADEFLOW_2_OFFSET UNITYSDK_OFFSET(0x1737BDB0)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass56_0_TypeDefinitionIndex = 57107;

	class HackControllableSubsystem___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::System::Action* startBackToAvatar; // 0x10
		::System::Func_1<::System::Boolean>* isBackToAvatarFinished; // 0x18
		::System::Action* finishBackToAvatar; // 0x20
		::System::Action* cancelForceExitStreamingWait; // 0x28
		::System::Single fadeOutTime; // 0x30
		::System::Single cameraTime; // 0x34
		::System::Boolean forceExitBlackFadeFlowStarted; // 0x38
		::System::Single fadeInTime; // 0x3C
		::UnityEngine::Vector3 exitStreamingPosition; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ProcessForceExitStreamingBlackFade_g__IsBackToAvatarFinished_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__ISBACKTOAVATARFINISHED_0_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_g__FinishForcedExitBlackFade_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__FINISHFORCEDEXITBLACKFADE_1_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_g__StartForceExitBlackFadeFlow_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_G__STARTFORCEEXITBLACKFADEFLOW_2_OFFSET))(this);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__3(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__3_OFFSET))(this, _);
		}

		::System::Void _ProcessForceExitStreamingBlackFade_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS56_0__PROCESSFORCEEXITSTREAMINGBLACKFADE_B__4_OFFSET))(this);
		}
	};
}
