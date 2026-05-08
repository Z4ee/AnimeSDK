#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x170D29E0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_GET_OUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x170D29D0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x170D2810)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x170D2820)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170D2A70)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG___BASE_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x170D2AB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int UIMaincityGameBangbooPhotoShowConfig_TypeDefinitionIndex = 48142;

	class UIMaincityGameBangbooPhotoShowConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 PhotoGameID; // 0x10
		::System::String* ConfigCameraBezierSurface; // 0x18
		::System::Single photoCheckInterval; // 0x20
		::System::Boolean notChangeBGM; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_81A3942BCC6E42B5 get_UICtrl()
		{
			return ((::Enum_3_81A3942BCC6E42B5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_1737D2629B3D075C* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1737D2629B3D075C*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}

		::System::Int32 get_OutputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_GET_OUTPUTCOUNT_OFFSET))(this);
		}

		::System::String* GetOutputName(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG_GETOUTPUTNAME_OFFSET))(this, idx);
		}

		::System::String* __base_GetOutputName(::System::Int32 P0)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEBANGBOOPHOTOSHOWCONFIG___BASE_GETOUTPUTNAME_OFFSET))(this, P0);
		}
	};
}
