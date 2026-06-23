#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_2_F5737224A0253470;
namespace MoleMole::FlowCanvas { class ModifyPropItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_GETCONFIGMAXVAL_OFFSET UNITYSDK_OFFSET(0x1510D220)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1510D060)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_MODIFYPROP_OFFSET UNITYSDK_OFFSET(0x1510D1D0)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1510D310)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSHPDESC_OFFSET UNITYSDK_OFFSET(0x1510D2C0)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSTEAMSTAMINA_OFFSET UNITYSDK_OFFSET(0x1510D270)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1510D360)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ModifyPropNode_TypeDefinitionIndex = 46160;

	class ModifyPropNode : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::ModifyPropItem*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::ModifyPropItem*>* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::ModifyPropItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_INVOKE_OFFSET))(this, properties);
		}

		::System::Void ModifyProp(::MoleMole::FlowCanvas::ModifyPropItem* property)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_MODIFYPROP_OFFSET))(this, property);
		}

		::System::Single GetConfigMaxVal(::System::Int32 avatarTID, ::MoleMole::Config::BaseProperty prop)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_GETCONFIGMAXVAL_OFFSET))(this, avatarTID, prop);
		}

		::System::Void ProcessTeamStamina(::MoleMole::FlowCanvas::ModifyPropItem* property, ::Class_2_F5737224A0253470* model)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*, ::Class_2_F5737224A0253470*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSTEAMSTAMINA_OFFSET))(this, property, model);
		}

		::System::Void ProcessHPDesc(::MoleMole::FlowCanvas::ModifyPropItem* property)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSHPDESC_OFFSET))(this, property);
		}

		::System::Boolean PreProcess(::MoleMole::FlowCanvas::ModifyPropItem* property, ::Class_2_F5737224A0253470* model)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*, ::Class_2_F5737224A0253470*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PREPROCESS_OFFSET))(this, property, model);
		}
	};
}
