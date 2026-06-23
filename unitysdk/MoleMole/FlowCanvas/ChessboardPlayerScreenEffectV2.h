#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x16C9C260)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16C9C680)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_PROCESSSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x16C9C2D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0x16C9C540)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9C840)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16C9C910)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlayerScreenEffectV2_TypeDefinitionIndex = 60499;

	class ChessboardPlayerScreenEffectV2 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::String*, ::System::Boolean>
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _actived; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* a, ::System::Boolean tree)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_INVOKE_OFFSET))(this, a, tree);
		}

		::System::Void ProcessScreenEffect(::MoleMole::Config::ScreenEffectType itemItem1, ::System::String* itemItem2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_PROCESSSCREENEFFECT_OFFSET))(this, itemItem1, itemItem2);
		}

		::System::Void StopEffect(::System::String* itemItem2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_STOPEFFECT_OFFSET))(this, itemItem2);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECTV2___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
