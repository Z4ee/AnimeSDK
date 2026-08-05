#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_15F9FE7F9AD3257D;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x118C7AC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_GET_OUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x118C7AB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x118C7890)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x118C78A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x118C7B50)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG___BASE_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x118C7B60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowScratchCardConfig_TypeDefinitionIndex = 47692;

	class MainCityChatShowScratchCardConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 SignID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_DBF2701137F18AA6 get_UICtrl()
		{
			return ((::Enum_3_DBF2701137F18AA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_15F9FE7F9AD3257D* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_15F9FE7F9AD3257D*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}

		::System::Int32 get_OutputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_GET_OUTPUTCOUNT_OFFSET))(this);
		}

		::System::String* GetOutputName(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_GETOUTPUTNAME_OFFSET))(this, idx);
		}

		::System::String* __base_GetOutputName(::System::Int32 P0)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG___BASE_GETOUTPUTNAME_OFFSET))(this, P0);
		}
	};
}
