#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG_GETANIMLISTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1625EF00)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1625EF80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructConfig_TypeDefinitionIndex = 59287;

	class ConfigHollowChessboard_PieceChangeStructConfig : public ::System::Object
	{
	public:
		::System::String* RefreshTextureSheetConfigKey; // 0x10
		::UnityEngine::AnimationCurve* FlushWriteAlphaCurve; // 0x18
		::MoleMole::ConfigAnimationCurveGroup* TVAnim; // 0x20
		::System::Single MaxFlushWriteValue; // 0x28
		::System::Boolean hidePieceInPath; // 0x2C
		::System::Boolean useOldConfig; // 0x2D
		::System::Boolean isWrite; // 0x2E
		::System::Single protectTime; // 0x30
		::System::Single refreshViewDelayTime; // 0x34
		::System::Single FlushWriteDuration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetAnimListValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_PIECECHANGESTRUCTCONFIG_GETANIMLISTVALUEDROPDOWN_OFFSET))();
		}
	};
}
