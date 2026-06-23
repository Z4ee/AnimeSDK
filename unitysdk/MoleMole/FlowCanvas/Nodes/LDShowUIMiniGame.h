#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18B26030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME_SHOWMAINCITYGAME_OFFSET UNITYSDK_OFFSET(0x18B26200)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18B26BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x18B26C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x18B26C30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowUIMiniGame_TypeDefinitionIndex = 69854;

	class LDShowUIMiniGame : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOnFinish; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _pauseLevelTimer; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* _gameIDInput; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _lightNpc; // 0xC0
		::FlowCanvas::FlowOutput* _flowOutput; // 0xC8
		::System::Int32 _rank; // 0xD0
		::System::Boolean _levelTimerPausedByThis; // 0xD4
		::System::Boolean _isPlayerSucceeded; // 0xD5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void ShowMainCityGame(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME_SHOWMAINCITYGAME_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__8_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
