#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::FlowCanvas { class ModifyItem; }

#define MOLEMOLE_FLOWCANVAS_MODIFYRESNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16038EE0)
#define MOLEMOLE_FLOWCANVAS_MODIFYRESNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16038F30)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ModifyResNode_TypeDefinitionIndex = 81813;

	class ModifyResNode : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Boolean, ::MoleMole::FlowCanvas::ModifyItem*>
	{
	public:
		static ::System::Boolean* StaticGet_globalShowTips()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ModifyResNode_TypeDefinitionIndex)->GetStaticField(0x12310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYRESNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isShowTips, ::MoleMole::FlowCanvas::ModifyItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::ModifyItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYRESNODE_INVOKE_OFFSET))(this, isShowTips, item);
		}
	};
}
