#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1840FFB0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x184104F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_PROCESSSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x18410050)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0x184103B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x184106B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18410780)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlayerScreenEffectByType_TypeDefinitionIndex = 59352;

	class ChessboardPlayerScreenEffectByType : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_4<::System::String*, ::MoleMole::Config::ScreenEffectType, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _actived; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* key, ::MoleMole::Config::ScreenEffectType screenEffectType, ::System::Boolean value, ::System::Boolean useAtmosphereVolume)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ScreenEffectType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_INVOKE_OFFSET))(this, key, screenEffectType, value, useAtmosphereVolume);
		}

		::System::Void ProcessScreenEffect(::MoleMole::Config::ScreenEffectType itemItem1, ::System::String* itemItem2, ::System::Boolean useAtmosphereVolume)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_PROCESSSCREENEFFECT_OFFSET))(this, itemItem1, itemItem2, useAtmosphereVolume);
		}

		::System::Void StopEffect(::System::String* itemItem2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_STOPEFFECT_OFFSET))(this, itemItem2);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTBYTYPE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
