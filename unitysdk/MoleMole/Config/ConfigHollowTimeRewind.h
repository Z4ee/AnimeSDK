#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54E8F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowTimeRewind_TypeDefinitionIndex = 76613;

	class ConfigHollowTimeRewind : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single switchPlayDelayTime; // 0x58
		::System::Single switchCameraAdjustDelayTime; // 0x5C
		::System::String* switchCameraStretchKey; // 0x60
		::MoleMole::HollowChessboard::ColorModifyInfo pauseColorModifyInfoData; // 0x68
		::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> pauseBlendData; // 0x98
		::System::String* enterPausePlayerSheetAnimKey; // 0xD8
		::Il2CppArray<::System::String*>* overridePausePathTexture; // 0xE0
		::Il2CppArray<::System::String*>* overridePauseFinishTexture; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND__CTOR_OFFSET))(this);
		}
	};
}
