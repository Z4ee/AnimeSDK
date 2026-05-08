#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/HackerGamePlayerAttachEffectData.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERPLAYERATTACHEFFECTEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x11737650)
#define MOLEMOLE_FLOWCANVAS_HACKERPLAYERATTACHEFFECTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x117376B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerPlayerAttachEffectEvent_TypeDefinitionIndex = 64339;

	class HackerPlayerAttachEffectEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::HackerGamePlayerAttachEffectData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYERATTACHEFFECTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYERATTACHEFFECTEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
