#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_ID_OFFSET UNITYSDK_OFFSET(0x1ADAB4B0)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADBC640)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ADBC660)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_ID_OFFSET UNITYSDK_OFFSET(0x1ADBC630)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADBC650)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ADBC670)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADBC5C0)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADBC590)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADBC690)
#define PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBC680)

namespace ParadoxNotion
{
	inline static constexpr unsigned int DynamicParameterDefinition_TypeDefinitionIndex = 27622;

	class DynamicParameterDefinition : public ::System::Object
	{
	public:
		::System::String* _ID; // 0x10
		::System::String* _name; // 0x18
		::System::String* _type; // 0x20
		::System::Type* _type_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION__CTOR_1_OFFSET))(this, name, type);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::String* get_ID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_NAME_OFFSET))(this, value);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DYNAMICPARAMETERDEFINITION_SET_TYPE_OFFSET))(this, value);
		}
	};
}
