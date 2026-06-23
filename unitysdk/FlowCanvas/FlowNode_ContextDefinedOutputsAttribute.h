#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define FLOWCANVAS_FLOWNODE_CONTEXTDEFINEDOUTPUTSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C4C0)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode_ContextDefinedOutputsAttribute_TypeDefinitionIndex = 30603;

	class FlowNode_ContextDefinedOutputsAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Type*>* types; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_CONTEXTDEFINEDOUTPUTSATTRIBUTE__CTOR_OFFSET))(this, types);
		}
	};
}
