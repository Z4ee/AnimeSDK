#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DirectionStringConfigGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_GET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x1625F6E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE_SET_AUTOCANCELLOCALFOLLOW_OFFSET UNITYSDK_OFFSET(0x1625F7B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1625F880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayerMove_TypeDefinitionIndex = 44538;

	class ConfigHollowPlayerMove : public ::System::Object
	{
	public:
		::System::String* MoveFailStrechKey; // 0x10
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroup; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* GlobalFindPathIntervalDic; // 0x38
		::MoleMole::Config::DirectionStringConfigGroup MoveFailTextureSheetKeyGroupNoMove; // 0x40
		::MoleMole::Config::DirectionStringConfigGroup MoveFailEffectKeyGroup; // 0x60
		::System::Int32 MoveFailAudioId; // 0x80
		::UnityEngine::Vector4 CancelLocalFollowZone; // 0x84
		::System::Single clickProtectedTimeFirst; // 0x94
		::System::Single leavingAnimInterval; // 0x98
		::System::Single pushBoxClickProtectedTime; // 0x9C
		::System::Boolean StepPathLenCheckToggle; // 0xA0
		::System::Boolean AutoCancelLocalFollowMobileConsole; // 0xA1
		::System::Boolean AllowUnstableGlobalConitinueMove; // 0xA2
		::System::Single pushBoxClickProtectedTimeFirst; // 0xA4
		::System::Single clickProtectedTime; // 0xA8
		::System::Boolean AllowPathTagGlobalConitinueMove; // 0xAC
		::System::Boolean AutoCancelLocalFollowConsole; // 0xAD
		::System::Boolean FinishNeedSync; // 0xAE
		::System::Boolean AutoCancelLocalFollowPC; // 0xAF
		::System::Boolean PlayerMoveUseCenterCamera; // 0xB0
		::System::Boolean MoveV2; // 0xB1
		::System::Boolean AutoCancelLocalFollowMobile; // 0xB2
		::System::Boolean MovePrePerformance; // 0xB3
		::System::Int32 MoveFailNoMoveAudioId; // 0xB4

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
