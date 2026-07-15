#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"

namespace SRDebugger { class ActionCompleteCallback; }
namespace SRDebugger { class InfoEntry; }
namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger { class PinnedUiCanvasCreated; }
namespace SRDebugger { class Settings; }
namespace SRDebugger { class VisibilityChangedDelegate; }
namespace SRDebugger::Services { class IDockConsoleService; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

namespace SRDebugger::Services
{
	inline static constexpr unsigned int IDebugService_TypeDefinitionIndex = 36508;

	class IDebugService
	{
	public:
	};
}
