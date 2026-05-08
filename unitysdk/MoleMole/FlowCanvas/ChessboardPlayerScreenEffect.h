#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace MoleMole::Config { class ChessboardEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_GETEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x16B77F60)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B77BE0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16B78260)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_PROCESSSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x16B78000)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B782A0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16B78330)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlayerScreenEffect_TypeDefinitionIndex = 77641;

	class ChessboardPlayerScreenEffect : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_INVOKE_OFFSET))(this, a);
		}

		::System::Void ProcessScreenEffect(::MoleMole::Config::ScreenEffectType itemItem1, ::System::String* itemItem2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_PROCESSSCREENEFFECT_OFFSET))(this, itemItem1, itemItem2);
		}

		::MoleMole::Config::ChessboardEffectConfig* GetEffectConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>* data)
		{
			return ((::MoleMole::Config::ChessboardEffectConfig*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_GETEFFECTCONFIG_OFFSET))(this, data);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
