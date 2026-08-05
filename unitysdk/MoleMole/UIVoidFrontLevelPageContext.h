#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_88A364F1F2179491_2.h"
#include "unitysdk/Enum_3_D39CEE6C882CC2A0.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODEDETAILCONTEXT_OFFSET UNITYSDK_OFFSET(0x140DE700)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODELISTCONTEXT_OFFSET UNITYSDK_OFFSET(0x140DE5D0)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_RESETCONTEXT_OFFSET UNITYSDK_OFFSET(0x140DE580)
#define MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140DE6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelPageContext_TypeDefinitionIndex = 89210;

	class UIVoidFrontLevelPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 battleId; // 0x28
		::Enum_3_D39CEE6C882CC2A0 widgetType; // 0x2C
		::System::Int32 nodeId; // 0x30
		::Enum_3_88A364F1F2179491_2 difficulty; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ResetContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_RESETCONTEXT_OFFSET))(this);
		}

		static ::MoleMole::UIVoidFrontLevelPageContext* GenToNodeListContext(::Enum_3_88A364F1F2179491_2 difficulty, ::System::Int32 focusNodeId)
		{
			return ((::MoleMole::UIVoidFrontLevelPageContext*(*)(::Enum_3_88A364F1F2179491_2, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODELISTCONTEXT_OFFSET))(difficulty, focusNodeId);
		}

		static ::MoleMole::UIVoidFrontLevelPageContext* GenToNodeDetailContext(::System::Int32 openNodeId, ::System::Int32 openBattleId)
		{
			return ((::MoleMole::UIVoidFrontLevelPageContext*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELPAGECONTEXT_GENTONODEDETAILCONTEXT_OFFSET))(openNodeId, openBattleId);
		}
	};
}
