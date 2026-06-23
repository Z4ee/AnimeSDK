#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A3924F0)
#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A3924A0)
#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A392370)
#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_TRYSWITCH_OFFSET UNITYSDK_OFFSET(0x1A3925E0)
#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3928D0)
#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A392910)
#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT__REGISTERPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0x1A392960)
#define MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A392970)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerSwitchNapEffect_TypeDefinitionIndex = 72146;

	class HackerSwitchNapEffect : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _then; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* _effectKey; // 0xB0
		::System::String* lastPlayKey; // 0xB8
		::System::Nullable_1<::System::UInt32> uid; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_CLEAR_OFFSET))(this);
		}

		::System::Void TrySwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT_TRYSWITCH_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow _)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT__REGISTERPORTS_B__1_0_OFFSET))(this, _);
		}

		::System::Void _RegisterPorts_b__1_1(::FlowCanvas::Flow _)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT__REGISTERPORTS_B__1_1_OFFSET))(this, _);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSWITCHNAPEFFECT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
