#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define FLOWCANVAS_FLOWNODE_CONTEXTDEFINEDINPUTSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF89160)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode_ContextDefinedInputsAttribute_TypeDefinitionIndex = 31239;

	class FlowNode_ContextDefinedInputsAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Type*>* types; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_CONTEXTDEFINEDINPUTSATTRIBUTE__CTOR_OFFSET))(this, types);
		}
	};
}
