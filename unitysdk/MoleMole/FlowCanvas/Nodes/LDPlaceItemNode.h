#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_2_208CC9941471731A_131;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLACEITEMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1160E6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLACEITEMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1160EAC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlaceItemNode_TypeDefinitionIndex = 56527;

	class LDPlaceItemNode : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Boolean, ::System::Int32, ::System::String*, ::System::Int32>
	{
	public:
		::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* itemList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLACEITEMNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 itemId, ::System::String* anchorPos, ::System::Int32 overridePickType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLACEITEMNODE_INVOKE_OFFSET))(this, itemId, anchorPos, overridePickType);
		}
	};
}
