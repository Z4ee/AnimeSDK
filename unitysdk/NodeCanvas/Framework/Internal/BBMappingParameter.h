#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/BBObjectParameter.h"

namespace NodeCanvas::Framework { class Variable; }
namespace System { class String; }

#define NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1B0F2C90)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1B0F2CB0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_GET_TARGETSUBGRAPHVARIABLEID_OFFSET UNITYSDK_OFFSET(0x1B0F2C80)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_SET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1B0F2CA0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_SET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1B0F2CC0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0F2D20)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F2CD0)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int BBMappingParameter_TypeDefinitionIndex = 27159;

	class BBMappingParameter : public ::NodeCanvas::Framework::Internal::BBObjectParameter
	{
	public:
		::System::String* _targetSubGraphVariableID; // 0x60
		::System::Boolean _canRead; // 0x68
		::System::Boolean _canWrite; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NodeCanvas::Framework::Variable* subVariable)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER__CTOR_1_OFFSET))(this, subVariable);
		}

		::System::String* get_targetSubGraphVariableID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_GET_TARGETSUBGRAPHVARIABLEID_OFFSET))(this);
		}

		::System::Boolean get_canRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_GET_CANREAD_OFFSET))(this);
		}

		::System::Void set_canRead(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_SET_CANREAD_OFFSET))(this, value);
		}

		::System::Boolean get_canWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void set_canWrite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBMAPPINGPARAMETER_SET_CANWRITE_OFFSET))(this, value);
		}
	};
}
