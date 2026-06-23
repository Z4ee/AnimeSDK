#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NODECANVAS_FRAMEWORK_VARIABLESEPERATOR_GET_ISEDITINGNAME_OFFSET UNITYSDK_OFFSET(0x1D53C220)
#define NODECANVAS_FRAMEWORK_VARIABLESEPERATOR_SET_ISEDITINGNAME_OFFSET UNITYSDK_OFFSET(0x1D53C230)
#define NODECANVAS_FRAMEWORK_VARIABLESEPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53C210)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int VariableSeperator_TypeDefinitionIndex = 29404;

	class VariableSeperator : public ::System::Object
	{
	public:
		::System::Boolean _isEditingName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLESEPERATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isEditingName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLESEPERATOR_GET_ISEDITINGNAME_OFFSET))(this);
		}

		::System::Void set_isEditingName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLESEPERATOR_SET_ISEDITINGNAME_OFFSET))(this, value);
		}
	};
}
