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

#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_ADDLEGACYINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1BD9CAD0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_CONFIGURECANVAS_OFFSET UNITYSDK_OFFSET(0x1BD9D4D0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_CREATEDEFAULTEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1BD9CA40)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_ENSUREEVENTSYSTEMEXISTS_OFFSET UNITYSDK_OFFSET(0x1BD9C870)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETMETHODOPTIONDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD9D9B0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x1BD9D4A0)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETPROPERTYOPTIONDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD9D650)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1BD9C820)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_SCANFOROPTIONS_OFFSET UNITYSDK_OFFSET(0x1BD9CB20)
#define SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL__GENERATEOPTIONDEFINITIONINITPARAM_OFFSET UNITYSDK_OFFSET(0x1BD9D710)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int SRDebuggerUtil_TypeDefinitionIndex = 37415;

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

		static ::System::Void AddLegacyInputSystem(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_ADDLEGACYINPUTSYSTEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>* ScanForOptions(::System::Object* a1, ::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>* a2, ::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>* a3)
		{
			return ((::System::Collections::Generic::List_1<::SRDebugger::OptionDefinition*>*(*)(::System::Object*, ::System::Func_3<::System::Object*, ::System::Reflection::PropertyInfo*, ::SRDebugger::OptionDefinition*>*, ::System::Func_3<::System::Object*, ::System::Reflection::MethodInfo*, ::SRDebugger::OptionDefinition*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_SCANFOROPTIONS_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetNumberString(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETNUMBERSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ConfigureCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_CONFIGURECANVAS_OFFSET))(a1);
		}

		static ::SRDebugger::OptionDefinition* GetPropertyOptionDefinition(::System::Object* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETPROPERTYOPTIONDEFINITION_OFFSET))(a1, a2);
		}

		static ::SRDebugger::OptionDefinition* GetMethodOptionDefinition(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::SRDebugger::OptionDefinition*(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL_GETMETHODOPTIONDEFINITION_OFFSET))(a1, a2);
		}

		static ::SRDebugger::OptionDefinitionInitParams* _GenerateOptionDefinitionInitParam(::System::Reflection::MemberInfo* a1)
		{
			return ((::SRDebugger::OptionDefinitionInitParams*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_SRDEBUGGERUTIL__GENERATEOPTIONDEFINITIONINITPARAM_OFFSET))(a1);
		}
	};
}
