#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger { class OptionDefinitionInitParams; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }

#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_ADDLEGACYINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x19E6F3B0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_CONFIGURECANVAS_OFFSET UNITYSDK_OFFSET(0x19E6F9D0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_CREATEDEFAULTEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x19E6F320)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_ENSUREEVENTSYSTEMEXISTS_OFFSET UNITYSDK_OFFSET(0x19E6F100)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETMETHODOPTIONDEFINITION_OFFSET UNITYSDK_OFFSET(0x19E6FDD0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x19E6F9A0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETPROPERTYOPTIONDEFINITION_OFFSET UNITYSDK_OFFSET(0x19E6FBA0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x19E6F0B0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_SCANFOROPTIONS_OFFSET UNITYSDK_OFFSET(0x19E6F400)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL__GENERATEOPTIONDEFINITIONINITPARAM_OFFSET UNITYSDK_OFFSET(0x19E6FC60)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int SRDebuggerUtil_TypeDefinitionIndex = 35474;

	class SRDebuggerUtil : public ::System::Object
	{
	public:
		static ::System::Boolean get_IsMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GET_ISMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean EnsureEventSystemExists()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_ENSUREEVENTSYSTEMEXISTS_OFFSET))();
		}

		static ::System::Void CreateDefaultEventSystem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_CREATEDEFAULTEVENTSYSTEM_OFFSET))();
		}

		static ::System::Void AddLegacyInputSystem(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_ADDLEGACYINPUTSYSTEM_OFFSET))(go);
		}

		static ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* ScanForOptions(::System::Object* obj, ::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>* propertyOptionCreateFunc, ::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>* methodOptionCreateFunc)
		{
			return ((::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*(*)(::System::Object*, ::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>*, ::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_SCANFOROPTIONS_OFFSET))(obj, propertyOptionCreateFunc, methodOptionCreateFunc);
		}

		static ::System::String* GetNumberString(::System::Int32 value, ::System::Int32 max, ::System::String* exceedsMaxString)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETNUMBERSTRING_OFFSET))(value, max, exceedsMaxString);
		}

		static ::System::Void ConfigureCanvas(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_CONFIGURECANVAS_OFFSET))(canvas);
		}

		static ::SRDebugger::OptionDefinition* GetPropertyOptionDefinition(::System::Object* instance, ::System::Reflection::PropertyInfo* propertyInfo)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETPROPERTYOPTIONDEFINITION_OFFSET))(instance, propertyInfo);
		}

		static ::SRDebugger::OptionDefinition* GetMethodOptionDefinition(::System::Object* instance, ::System::Reflection::MethodInfo* methodInfo)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETMETHODOPTIONDEFINITION_OFFSET))(instance, methodInfo);
		}

		static ::SRDebugger::OptionDefinitionInitParams* _GenerateOptionDefinitionInitParam(::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::SRDebugger::OptionDefinitionInitParams*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL__GENERATEOPTIONDEFINITIONINITPARAM_OFFSET))(memberInfo);
		}
	};
}
