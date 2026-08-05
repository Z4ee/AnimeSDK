#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowScriptBase.h"

namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas { class Port; }
namespace FlowCanvas { class ValueHandlerObject; }
namespace FlowCanvas::Macros { class MacroInputNode; }
namespace FlowCanvas::Macros { class MacroOutputNode; }
namespace ParadoxNotion { class DynamicParameterDefinition; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_MACROS_MACRO_ADDEXAMPLEPORTS_OFFSET UNITYSDK_OFFSET(0x1DB22DC0)
#define FLOWCANVAS_MACROS_MACRO_ADDINPUTDEFINITION_OFFSET UNITYSDK_OFFSET(0x1DB22B30)
#define FLOWCANVAS_MACROS_MACRO_ADDOUTPUTDEFINITION_OFFSET UNITYSDK_OFFSET(0x1DB22C70)
#define FLOWCANVAS_MACROS_MACRO_CALLFLOWINPUT_OFFSET UNITYSDK_OFFSET(0x1DB22F90)
#define FLOWCANVAS_MACROS_MACRO_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1DB22810)
#define FLOWCANVAS_MACROS_MACRO_GET_BINDMACRONODEWRAPPERID_OFFSET UNITYSDK_OFFSET(0x1DB22820)
#define FLOWCANVAS_MACROS_MACRO_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1DB22840)
#define FLOWCANVAS_MACROS_MACRO_GET_EXIT_OFFSET UNITYSDK_OFFSET(0x1DB22990)
#define FLOWCANVAS_MACROS_MACRO_ONDERIVEDDATADESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DB22770)
#define FLOWCANVAS_MACROS_MACRO_ONDERIVEDDATASERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DB22710)
#define FLOWCANVAS_MACROS_MACRO_ONGRAPHVALIDATE_OFFSET UNITYSDK_OFFSET(0x1DB22AF0)
#define FLOWCANVAS_MACROS_MACRO_SET_BINDMACRONODEWRAPPERID_OFFSET UNITYSDK_OFFSET(0x1DB22830)
#define FLOWCANVAS_MACROS_MACRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB23180)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int Macro_TypeDefinitionIndex = 31367;

	class Macro : public ::FlowCanvas::FlowScriptBase
	{
	public:
		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* inputDefinitions; // 0xE0
		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* outputDefinitions; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowHandler*>* entryActionMap; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowHandler*>* exitActionMap; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::ValueHandlerObject*>* entryFunctionMap; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::ValueHandlerObject*>* exitFunctionMap; // 0x108
		::FlowCanvas::Macros::MacroInputNode* _entry; // 0x110
		::FlowCanvas::Macros::MacroOutputNode* _exit; // 0x118
		::System::Int32 _BindMacroNodeWrapperID_k__BackingField; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO__CTOR_OFFSET))(this);
		}

		::System::Object* OnDerivedDataSerialization()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_ONDERIVEDDATASERIALIZATION_OFFSET))(this);
		}

		::System::Void OnDerivedDataDeserialization(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_ONDERIVEDDATADESERIALIZATION_OFFSET))(this, data);
		}

		::System::Boolean get_allowBlackboardOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET))(this);
		}

		::System::Int32 get_BindMacroNodeWrapperID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_GET_BINDMACRONODEWRAPPERID_OFFSET))(this);
		}

		::System::Void set_BindMacroNodeWrapperID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_SET_BINDMACRONODEWRAPPERID_OFFSET))(this, value);
		}

		::FlowCanvas::Macros::MacroInputNode* get_entry()
		{
			return ((::FlowCanvas::Macros::MacroInputNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_GET_ENTRY_OFFSET))(this);
		}

		::FlowCanvas::Macros::MacroOutputNode* get_exit()
		{
			return ((::FlowCanvas::Macros::MacroOutputNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_GET_EXIT_OFFSET))(this);
		}

		::System::Void OnGraphValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_ONGRAPHVALIDATE_OFFSET))(this);
		}

		::FlowCanvas::Port* AddInputDefinition(::ParadoxNotion::DynamicParameterDefinition* def)
		{
			return ((::FlowCanvas::Port*(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_ADDINPUTDEFINITION_OFFSET))(this, def);
		}

		::FlowCanvas::Port* AddOutputDefinition(::ParadoxNotion::DynamicParameterDefinition* def)
		{
			return ((::FlowCanvas::Port*(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_ADDOUTPUTDEFINITION_OFFSET))(this, def);
		}

		::System::Void AddExamplePorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_ADDEXAMPLEPORTS_OFFSET))(this);
		}

		::System::Void CallFlowInput(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_CALLFLOWINPUT_OFFSET))(this, name);
		}
	};
}
