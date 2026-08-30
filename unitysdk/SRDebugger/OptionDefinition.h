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

#define SRDEBUGGER_OPTIONDEFINITION_CREATE_OFFSET UNITYSDK_OFFSET(0x1E674290)
#define SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1E6742A0)
#define SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_OFFSET UNITYSDK_OFFSET(0x1E674170)
#define SRDEBUGGER_OPTIONDEFINITION_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1E674080)
#define SRDEBUGGER_OPTIONDEFINITION_GET_ISMETHOD_OFFSET UNITYSDK_OFFSET(0x1E6740E0)
#define SRDEBUGGER_OPTIONDEFINITION_GET_ISPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E6740F0)
#define SRDEBUGGER_OPTIONDEFINITION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E674100)
#define SRDEBUGGER_OPTIONDEFINITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E674060)
#define SRDEBUGGER_OPTIONDEFINITION_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1E674120)
#define SRDEBUGGER_OPTIONDEFINITION_GET_SORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E6740A0)
#define SRDEBUGGER_OPTIONDEFINITION_GET_TARGETTAB_OFFSET UNITYSDK_OFFSET(0x1E6740C0)
#define SRDEBUGGER_OPTIONDEFINITION_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1E674090)
#define SRDEBUGGER_OPTIONDEFINITION_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E674110)
#define SRDEBUGGER_OPTIONDEFINITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E674070)
#define SRDEBUGGER_OPTIONDEFINITION_SET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1E674130)
#define SRDEBUGGER_OPTIONDEFINITION_SET_SORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E6740B0)
#define SRDEBUGGER_OPTIONDEFINITION_SET_TARGETTAB_OFFSET UNITYSDK_OFFSET(0x1E6740D0)
#define SRDEBUGGER_OPTIONDEFINITION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E673D80)
#define SRDEBUGGER_OPTIONDEFINITION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E673BA0)
#define SRDEBUGGER_OPTIONDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E674140)

namespace SRDebugger
{
	inline static constexpr unsigned int OptionDefinition_TypeDefinitionIndex = 37262;

	class OptionDefinition : public ::System::Object
	{
	public:
		::SRF::Helpers::MethodReference* _Method_k__BackingField; // 0x10
		::SRF::Helpers::PropertyReference* _Property_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::String* _Category_k__BackingField; // 0x28
		::System::String* _TargetTab_k__BackingField; // 0x30
		::System::Int32 _SortPriority_k__BackingField; // 0x38

		::System::Void _ctor(::SRDebugger::OptionDefinitionInitParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinitionInitParams*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::SRDebugger::OptionDefinitionInitParams* a1, ::SRF::Helpers::MethodReference* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinitionInitParams*, ::SRF::Helpers::MethodReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::SRDebugger::OptionDefinitionInitParams* a1, ::SRF::Helpers::PropertyReference* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinitionInitParams*, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::Int32 get_SortPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_SORTPRIORITY_OFFSET))(this);
		}

		::System::Void set_SortPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_SORTPRIORITY_OFFSET))(this, a1);
		}

		::System::String* get_TargetTab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_TARGETTAB_OFFSET))(this);
		}

		::System::Void set_TargetTab(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_TARGETTAB_OFFSET))(this, a1);
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

		::System::Void set_Method(::SRF::Helpers::MethodReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::MethodReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_METHOD_OFFSET))(this, a1);
		}

		::SRF::Helpers::PropertyReference* get_Property()
		{
			return ((::SRF::Helpers::PropertyReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_GET_PROPERTY_OFFSET))(this);
		}

		::System::Void set_Property(::SRF::Helpers::PropertyReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_SET_PROPERTY_OFFSET))(this, a1);
		}

		static ::SRDebugger::OptionDefinition* FromMethod(::System::String* a1, ::System::Action* a2, ::System::String* a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::String*, ::System::Action*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::SRDebugger::OptionDefinition* Create(::System::Reflection::PropertyInfo* a1, ::System::Object* a2)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Reflection::PropertyInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_CREATE_OFFSET))(a1, a2);
		}

		static ::SRDebugger::OptionDefinition* FromMethod_1(::System::Reflection::MethodInfo* a1, ::System::Object* a2)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Reflection::MethodInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_OPTIONDEFINITION_FROMMETHOD_1_OFFSET))(a1, a2);
		}
	};
}
