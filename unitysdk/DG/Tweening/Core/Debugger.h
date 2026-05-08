#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/LogBehaviour.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }
namespace System { class String; }

#define DG_TWEENING_CORE_DEBUGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1C4AB750)
#define DG_TWEENING_CORE_DEBUGGER_LOGINVALIDTWEEN_OFFSET UNITYSDK_OFFSET(0x1C4AB820)
#define DG_TWEENING_CORE_DEBUGGER_LOGMISSINGMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C4ABA60)
#define DG_TWEENING_CORE_DEBUGGER_LOGNESTEDTWEEN_OFFSET UNITYSDK_OFFSET(0x1C4AB8B0)
#define DG_TWEENING_CORE_DEBUGGER_LOGNONPATHTWEEN_OFFSET UNITYSDK_OFFSET(0x1C4AB9D0)
#define DG_TWEENING_CORE_DEBUGGER_LOGNULLTWEEN_OFFSET UNITYSDK_OFFSET(0x1C4AB940)
#define DG_TWEENING_CORE_DEBUGGER_LOGREMOVEACTIVETWEENERROR_OFFSET UNITYSDK_OFFSET(0x1C4ABB10)
#define DG_TWEENING_CORE_DEBUGGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1C4AB7B0)
#define DG_TWEENING_CORE_DEBUGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1C4AB6F0)
#define DG_TWEENING_CORE_DEBUGGER_LOG_OFFSET UNITYSDK_OFFSET(0x1C4AB690)
#define DG_TWEENING_CORE_DEBUGGER_SETLOGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C4ABBC0)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int Debugger_TypeDefinitionIndex = 25489;

	class Debugger : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_logPriority()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Debugger_TypeDefinitionIndex)->GetStaticField(0x47E0);
		}

		static ::System::Void Log(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOG_OFFSET))(message);
		}

		static ::System::Void LogWarning(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGWARNING_OFFSET))(message);
		}

		static ::System::Void LogError(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGERROR_OFFSET))(message);
		}

		static ::System::Void LogReport(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGREPORT_OFFSET))(message);
		}

		static ::System::Void LogInvalidTween(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGINVALIDTWEEN_OFFSET))(t);
		}

		static ::System::Void LogNestedTween(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGNESTEDTWEEN_OFFSET))(t);
		}

		static ::System::Void LogNullTween(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGNULLTWEEN_OFFSET))(t);
		}

		static ::System::Void LogNonPathTween(::DG::Tweening::Tween* t)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGNONPATHTWEEN_OFFSET))(t);
		}

		static ::System::Void LogMissingMaterialProperty(::System::String* propertyName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGMISSINGMATERIALPROPERTY_OFFSET))(propertyName);
		}

		static ::System::Void LogRemoveActiveTweenError(::System::String* propertyName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_LOGREMOVEACTIVETWEENERROR_OFFSET))(propertyName);
		}

		static ::System::Void SetLogPriority(::DG::Tweening::LogBehaviour logBehaviour)
		{
			return ((::System::Void(*)(::DG::Tweening::LogBehaviour))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DEBUGGER_SETLOGPRIORITY_OFFSET))(logBehaviour);
		}
	};
}
