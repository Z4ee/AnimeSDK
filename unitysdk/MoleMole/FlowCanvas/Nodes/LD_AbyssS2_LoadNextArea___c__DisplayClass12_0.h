#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_LoadNextArea; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17110B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___C__DISPLAYCLASS12_0___ABYSSLOADNEXT_ALLFINISHEDCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x17110C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___C__DISPLAYCLASS12_0___ABYSSLOADNEXT_ALLFINISHEDCALLBACK_G___NOTIFYAREAEND_0_OFFSET UNITYSDK_OFFSET(0x17110B80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_LoadNextArea___c__DisplayClass12_0_TypeDefinitionIndex = 72021;

	class LD_AbyssS2_LoadNextArea___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_LoadNextArea* __4__this; // 0x10
		::System::Boolean isSetAvatarToTrue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void __AbyssLoadNext_AllFinishedCallback_g___NotifyAreaEnd_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___C__DISPLAYCLASS12_0___ABYSSLOADNEXT_ALLFINISHEDCALLBACK_G___NOTIFYAREAEND_0_OFFSET))(this);
		}

		::System::Void __AbyssLoadNext_AllFinishedCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___C__DISPLAYCLASS12_0___ABYSSLOADNEXT_ALLFINISHEDCALLBACK_B__1_OFFSET))(this);
		}
	};
}
