#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

class Class_3_1F4762C34AABBBF6;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_GETAREANAMEBYAREAID_OFFSET UNITYSDK_OFFSET(0x1581E6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1581E220)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1581E950)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaInteractName_TypeDefinitionIndex = 49293;

	class LD_AbyssS2_GetAreaInteractName : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::String*, ::System::Int32>
	{
	public:
		// static const ::System::String* MultiAreaNameBoard; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::System::Int32 areaSelectIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_INVOKE_OFFSET))(this, areaSelectIndex);
		}

		::System::String* GetAreaNameByAreaID(::Class_3_1F4762C34AABBBF6* rfMapArea)
		{
			return ((::System::String*(*)(::PVOID, ::Class_3_1F4762C34AABBBF6*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_GETAREANAMEBYAREAID_OFFSET))(this, rfMapArea);
		}
	};
}
