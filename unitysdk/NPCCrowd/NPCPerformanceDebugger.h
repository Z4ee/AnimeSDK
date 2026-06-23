#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define NPCCROWD_NPCPERFORMANCEDEBUGGER_GETDEBUGSUMMARY_OFFSET UNITYSDK_OFFSET(0x11F89830)
#define NPCCROWD_NPCPERFORMANCEDEBUGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F8B850)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceDebugger_TypeDefinitionIndex = 78374;

	class NPCPerformanceDebugger : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet__sb()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceDebugger_TypeDefinitionIndex)->GetStaticField(0x47040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEDEBUGGER__CCTOR_OFFSET))();
		}

		static ::System::String* GetDebugSummary()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCEDEBUGGER_GETDEBUGSUMMARY_OFFSET))();
		}
	};
}
