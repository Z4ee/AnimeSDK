#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinitionInitParams; }
namespace SRF::Helpers { class MethodReference; }
namespace SRF::Helpers { class PropertyReference; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SRDEBUGGER_OPTIONDEFINITION_CREATE_OFFSET UNITYSDK_OFFSET(0x184356D0)
#define SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_1_OFFSET UNITYSDK_OFFSET(0x184356E0)
#define SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_OFFSET UNITYSDK_OFFSET(0x18435600)
#define SRDEBUGGER_OPTIONDEFINITION_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x18435510)
#define SRDEBUGGER_OPTIONDEFINITION_GET_ISMETHOD_OFFSET UNITYSDK_OFFSET(0x18435570)
#define SRDEBUGGER_OPTIONDEFINITION_GET_ISPROPERTY_OFFSET UNITYSDK_OFFSET(0x18435580)
#define SRDEBUGGER_OPTIONDEFINITION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x18435590)
#define SRDEBUGGER_OPTIONDEFINITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x184354F0)
#define SRDEBUGGER_OPTIONDEFINITION_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x184355B0)
#define SRDEBUGGER_OPTIONDEFINITION_GET_SORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18435530)
#define SRDEBUGGER_OPTIONDEFINITION_GET_TARGETTAB_OFFSET UNITYSDK_OFFSET(0x18435550)
#define SRDEBUGGER_OPTIONDEFINITION_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x18435520)
#define SRDEBUGGER_OPTIONDEFINITION_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x184355A0)
#define SRDEBUGGER_OPTIONDEFINITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18435500)
#define SRDEBUGGER_OPTIONDEFINITION_SET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x184355C0)
#define SRDEBUGGER_OPTIONDEFINITION_SET_SORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18435540)
#define SRDEBUGGER_OPTIONDEFINITION_SET_TARGETTAB_OFFSET UNITYSDK_OFFSET(0x18435560)
#define SRDEBUGGER_OPTIONDEFINITION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18435210)
#define SRDEBUGGER_OPTIONDEFINITION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x184350B0)
#define SRDEBUGGER_OPTIONDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x184355D0)

namespace SRDebugger
{
	inline static constexpr unsigned int OptionDefinition_TypeDefinitionIndex = 29601;

	class OptionDefinition : public ::System::Object
	{
	public:
		::System::String* _Category_k__BackingField; // 0x10
		::SRF::Helpers::PropertyReference* _Property_k__BackingField; // 0x18
		::System::String* _TargetTab_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::SRF::Helpers::MethodReference* _Method_k__BackingField; // 0x30
		::System::Int32 _SortPriority_k__BackingField; // 0x38

		::System::Void _ctor(::SRDebugger::OptionDefinitionInitParams* initParams)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinitionInitParams*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION__CTOR_OFFSET))(this, initParams);
		}

		::System::Void _ctor_1(::SRDebugger::OptionDefinitionInitParams* initParams, ::SRF::Helpers::MethodReference* method)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinitionInitParams*, ::SRF::Helpers::MethodReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION__CTOR_1_OFFSET))(this, initParams, method);
		}

		::System::Void _ctor_2(::SRDebugger::OptionDefinitionInitParams* initParams, ::SRF::Helpers::PropertyReference* property)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinitionInitParams*, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION__CTOR_2_OFFSET))(this, initParams, property);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::Int32 get_SortPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_SORTPRIORITY_OFFSET))(this);
		}

		::System::Void set_SortPriority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_SORTPRIORITY_OFFSET))(this, value);
		}

		::System::String* get_TargetTab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_TARGETTAB_OFFSET))(this);
		}

		::System::Void set_TargetTab(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_TARGETTAB_OFFSET))(this, value);
		}

		::System::Boolean get_IsMethod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_ISMETHOD_OFFSET))(this);
		}

		::System::Boolean get_IsProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_ISPROPERTY_OFFSET))(this);
		}

		::SRF::Helpers::MethodReference* get_Method()
		{
			return ((::SRF::Helpers::MethodReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::SRF::Helpers::MethodReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::MethodReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_METHOD_OFFSET))(this, value);
		}

		::SRF::Helpers::PropertyReference* get_Property()
		{
			return ((::SRF::Helpers::PropertyReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_PROPERTY_OFFSET))(this);
		}

		::System::Void set_Property(::SRF::Helpers::PropertyReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_PROPERTY_OFFSET))(this, value);
		}

		static ::SRDebugger::OptionDefinition* FromMethod(::System::String* name, ::System::Action* callback, ::System::String* category, ::System::Int32 sortPriority, ::System::String* tabName)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::String*, ::System::Action*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_OFFSET))(name, callback, category, sortPriority, tabName);
		}

		static ::SRDebugger::OptionDefinition* Create(::System::Reflection::PropertyInfo* propertyInfo, ::System::Object* invokeObj)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Reflection::PropertyInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_CREATE_OFFSET))(propertyInfo, invokeObj);
		}

		static ::SRDebugger::OptionDefinition* FromMethod_1(::System::Reflection::MethodInfo* methodInfo, ::System::Object* invokeObj)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Reflection::MethodInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_1_OFFSET))(methodInfo, invokeObj);
		}
	};
}
