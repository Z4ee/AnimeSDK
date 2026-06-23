#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIUrbanMapLeftLocationContext; }
namespace MoleMole { class UIUrbanMapLeftTastListRow01Context; }
namespace MoleMole { class UIUrbanMapLeftTastListRow02Context; }
namespace MoleMole { class UIUrbanMapLeftTastListRow03Context; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET01CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1655CCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightTastListWidget01Context_TypeDefinitionIndex = 65545;

	class UIUrbanMapRightTastListWidget01Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIUrbanMapLeftTastListRow03Context* CollectChild; // 0x28
		::MoleMole::UIUrbanMapLeftLocationContext* LocationContext; // 0x30
		::UnityEngine::Events::UnityAction* OnClose; // 0x38
		::MoleMole::UIUrbanMapLeftTastListRow02Context* LevelChild; // 0x40
		::System::String* Title; // 0x48
		::MoleMole::UIUrbanMapLeftTastListRow01Context* QuestChild; // 0x50
		::System::Int32 ModulePriovity; // 0x58
		::System::Boolean Is2dMode; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET01CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
