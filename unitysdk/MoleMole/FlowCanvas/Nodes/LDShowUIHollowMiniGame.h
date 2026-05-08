#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIHollowMiniGamePopWindowController; }
namespace MoleMole { class UIHollowPushBoxGame3DModelController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_CACHEAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x12326D10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_CLOSEBIGTVMINIGAME_OFFSET UNITYSDK_OFFSET(0x12328430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_ENTERBIGTV_OFFSET UNITYSDK_OFFSET(0x12327130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_HANDLELEVELTIMER_OFFSET UNITYSDK_OFFSET(0x12327D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x12327EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_ONHOLLOWCHANGECHESSBOARD_OFFSET UNITYSDK_OFFSET(0x12326E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12326610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_RESTOREAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x123286F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_SHOWBIGTVMINIGAME_OFFSET UNITYSDK_OFFSET(0x12327980)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_SHOWHOLLOWMINIGAME_OFFSET UNITYSDK_OFFSET(0x123267A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_STARTPUSHBOX_OFFSET UNITYSDK_OFFSET(0x123271A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_STOPPUSHBOX_OFFSET UNITYSDK_OFFSET(0x12328510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x123288D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x12328910)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowUIHollowMiniGame_TypeDefinitionIndex = 70701;

	class LDShowUIHollowMiniGame : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOnFinish; // 0xA8
		::System::String* _cachedAudioGameStateValue; // 0xB0
		::MoleMole::UIHollowPushBoxGame3DModelController* _pushBox3DCtrl; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _pauseLevelTimer; // 0xC0
		::UnityEngine::RenderTexture* _miniGameRT; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* _gameIDInput; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _skipFadeOutOnFail; // 0xD8
		::MoleMole::UIHollowMiniGamePopWindowController* _miniGamePopWindow; // 0xE0
		::FlowCanvas::FlowOutput* _flowOutput; // 0xE8
		::System::Boolean _isPlayerSucceeded; // 0xF0
		::System::Boolean _levelTimerPausedByThis; // 0xF1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void ShowHollowMiniGame(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_SHOWHOLLOWMINIGAME_OFFSET))(this, f);
		}

		::System::Void OnHollowChangeChessboard(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_ONHOLLOWCHANGECHESSBOARD_OFFSET))(this, args);
		}

		::System::Void EnterBigTv(::Struct_2_90E529DB4DCB014F sectionUid)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_ENTERBIGTV_OFFSET))(this, sectionUid);
		}

		::System::Void StartPushBox(::Struct_2_90E529DB4DCB014F sectionId)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_STARTPUSHBOX_OFFSET))(this, sectionId);
		}

		::System::Void ShowBigTvMiniGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_SHOWBIGTVMINIGAME_OFFSET))(this);
		}

		::System::Void OnEnterScene(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_ONENTERSCENE_OFFSET))(this, args);
		}

		::System::Void StopPushBox(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_STOPPUSHBOX_OFFSET))(this, isSuccess);
		}

		::System::Void CloseBigTvMiniGame(::System::Boolean isSuccess, ::System::Boolean skipFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_CLOSEBIGTVMINIGAME_OFFSET))(this, isSuccess, skipFadeOut);
		}

		::System::Void HandleLevelTimer(::System::Boolean isGameActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_HANDLELEVELTIMER_OFFSET))(this, isGameActive);
		}

		::System::Void CacheAudioState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_CACHEAUDIOSTATE_OFFSET))(this);
		}

		::System::Void RestoreAudioState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME_RESTOREAUDIOSTATE_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__11_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME__REGISTERPORTS_B__11_0_OFFSET))(this);
		}
	};
}
