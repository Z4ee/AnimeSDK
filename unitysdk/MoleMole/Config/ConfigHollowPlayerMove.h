#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DirectionStringConfigGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x18F36170)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x18F36250)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F36330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayerMove_TypeDefinitionIndex = 42980;

	class ConfigHollowPlayerMove : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GlobalFindPathIntervalDic; // 0x10
		::System::String* MoveFailStrechKey; // 0x18
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroup; // 0x20
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroupNoMove; // 0x40
		::MoleMole::Config::DirectionStringConfigGroup MoveFailEffectKeyGroup; // 0x60
		::UnityEngine::Vector4 CancelLocalFollowZone; // 0x80
		::System::Boolean StepPathLenCheckToggle; // 0x90
		::System::Boolean MovePrePerformance; // 0x91
		::System::Boolean AllowUnstableGlobalConitinueMove; // 0x92
		::System::Boolean AutoCancelLocalFollowMobile; // 0x93
		::System::Int32 MoveFailNoMoveAudioId; // 0x94
		::System::Single clickProtectedTime; // 0x98
		::System::Single clickProtectedTimeFirst; // 0x9C
		::System::Single pushBoxClickProtectedTime; // 0xA0
		::System::Boolean FinishNeedSync; // 0xA4
		::System::Boolean AutoCancelLocalFollowPC; // 0xA5
		::System::Boolean AllowPathTagGlobalConitinueMove; // 0xA6
		::System::Single leavingAnimInterval; // 0xA8
		::System::Single pushBoxClickProtectedTimeFirst; // 0xAC
		::System::Boolean AutoCancelLocalFollowMobileConsole; // 0xB0
		::System::Boolean MoveV2; // 0xB1
		::System::Boolean PlayerMoveUseCenterCamera; // 0xB2
		::System::Boolean AutoCancelLocalFollowConsole; // 0xB3
		::System::Int32 MoveFailAudioId; // 0xB4

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
