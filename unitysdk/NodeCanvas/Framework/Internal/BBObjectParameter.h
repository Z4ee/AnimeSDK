#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/BBParameter_1.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CC483D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_GET_VARTYPE_OFFSET UNITYSDK_OFFSET(0x1CC483F0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_SETTYPE_OFFSET UNITYSDK_OFFSET(0x1CC48480)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CC483E0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CC48360)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CC48330)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC48580)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CC485A0)
#define NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC48430)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int BBObjectParameter_TypeDefinitionIndex = 29792;

	class BBObjectParameter : public ::NodeCanvas::Framework::BBParameter_1<::System::Object*>
	{
	public:
		::System::String* _type; // 0x50
		::System::Type* _type_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER__CTOR_1_OFFSET))(this, t);
		}

		::System::Void _ctor_2(::NodeCanvas::Framework::BBParameter* source)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::BBParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER__CTOR_2_OFFSET))(this, source);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_SET_TYPE_OFFSET))(this, value);
		}

		::System::Type* get_varType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_GET_VARTYPE_OFFSET))(this);
		}

		::System::Void SetType(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_BBOBJECTPARAMETER_SETTYPE_OFFSET))(this, t);
		}
	};
}
