#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_15F9FE7F9AD3257D;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x17E803E0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_OUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x17E803D0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x17E801E0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x17E801F0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E80470)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG___BASE_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x17E804B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int UIMaincityGameFindBangbooChatShowConfig_TypeDefinitionIndex = 85657;

	class UIMaincityGameFindBangbooChatShowConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::UInt32 CountDownSeconds; // 0x10
		::System::String* ConfigCameraBezierSurface; // 0x18
		::System::Int32 MainCityGameUIConfigGameID; // 0x20
		::System::Boolean IsHideCameraMove; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_7A4252233BCEB3A9 get_UICtrl()
		{
			return ((::Enum_3_7A4252233BCEB3A9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_15F9FE7F9AD3257D* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_15F9FE7F9AD3257D*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}

		::System::Int32 get_OutputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_OUTPUTCOUNT_OFFSET))(this);
		}

		::System::String* GetOutputName(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GETOUTPUTNAME_OFFSET))(this, idx);
		}

		::System::String* __base_GetOutputName(::System::Int32 P0)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG___BASE_GETOUTPUTNAME_OFFSET))(this, P0);
		}
	};
}
