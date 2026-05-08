#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x10E1C4F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_ONOPEN_OFFSET UNITYSDK_OFFSET(0x10E1C500)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1C760)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowMessageItem_TypeDefinitionIndex = 53331;

	class MainCityChatShowMessageItem : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 ItemConfigId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM__CTOR_OFFSET))(this);
		}

		::Enum_3_81A3942BCC6E42B5 get_UICtrl()
		{
			return ((::Enum_3_81A3942BCC6E42B5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_1737D2629B3D075C* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1737D2629B3D075C*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
