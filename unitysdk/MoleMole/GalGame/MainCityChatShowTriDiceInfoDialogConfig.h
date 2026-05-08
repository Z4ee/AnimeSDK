#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x16E58240)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x16E58250)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E58550)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowTriDiceInfoDialogConfig_TypeDefinitionIndex = 50994;

	class MainCityChatShowTriDiceInfoDialogConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 startNodeID; // 0x10
		::System::Int32 endNodeID; // 0x14
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_81A3942BCC6E42B5 get_UICtrl()
		{
			return ((::Enum_3_81A3942BCC6E42B5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_1737D2629B3D075C* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1737D2629B3D075C*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
