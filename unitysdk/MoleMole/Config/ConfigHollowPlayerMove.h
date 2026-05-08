#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DirectionStringConfigGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x1102BD50)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x1102BE30)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1102BF10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayerMove_TypeDefinitionIndex = 71708;

	class ConfigHollowPlayerMove : public ::System::Object
	{
	public:
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroupNoMove; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GlobalFindPathIntervalDic; // 0x30
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroup; // 0x38
		::MoleMole::Config::DirectionStringConfigGroup MoveFailEffectKeyGroup; // 0x58
		::System::String* MoveFailStrechKey; // 0x78
		::System::Single pushBoxClickProtectedTime; // 0x80
		::System::Int32 MoveFailNoMoveAudioId; // 0x84
		::System::Single pushBoxClickProtectedTimeFirst; // 0x88
		::System::Int32 MoveFailAudioId; // 0x8C
		::UnityEngine::Vector4 CancelLocalFollowZone; // 0x90
		::System::Single leavingAnimInterval; // 0xA0
		::System::Single clickProtectedTimeFirst; // 0xA4
		::System::Boolean AutoCancelLocalFollowMobileConsole; // 0xA8
		::System::Boolean FinishNeedSync; // 0xA9
		::System::Boolean MoveV2; // 0xAA
		::System::Single clickProtectedTime; // 0xAC
		::System::Boolean PlayerMoveUseCenterCamera; // 0xB0
		::System::Boolean AllowPathTagGlobalConitinueMove; // 0xB1
		::System::Boolean AllowUnstableGlobalConitinueMove; // 0xB2
		::System::Boolean AutoCancelLocalFollowMobile; // 0xB3
		::System::Boolean AutoCancelLocalFollowConsole; // 0xB4
		::System::Boolean AutoCancelLocalFollowPC; // 0xB5
		::System::Boolean MovePrePerformance; // 0xB6
		::System::Boolean StepPathLenCheckToggle; // 0xB7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoCancelLocalFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET))(this);
		}

		::System::Void set_AutoCancelLocalFollow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET))(this, value);
		}
	};
}
