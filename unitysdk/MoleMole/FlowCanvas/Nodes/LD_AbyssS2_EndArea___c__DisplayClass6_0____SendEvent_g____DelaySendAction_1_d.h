#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMainPageController; }
namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_EndArea___c__DisplayClass6_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10D450F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10D453C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10D45420)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10D453D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10D450E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D__CTOR_OFFSET UNITYSDK_OFFSET(0x10D450D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_EndArea___c__DisplayClass6_0____SendEvent_g____DelaySendAction_1_d_TypeDefinitionIndex = 49174;

	class LD_AbyssS2_EndArea___c__DisplayClass6_0____SendEvent_g____DelaySendAction_1_d : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelMainPageController* _uimain_5__2; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_EndArea___c__DisplayClass6_0* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS6_0____SENDEVENT_G____DELAYSENDACTION_1_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
