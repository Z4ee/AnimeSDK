#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtDebug_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define HDG_RDTDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x8C1DDC0)
#define HDG_RDTDEBUG_DEBUG_1_OFFSET UNITYSDK_OFFSET(0x8C1C4B0)
#define HDG_RDTDEBUG_DEBUG_OFFSET UNITYSDK_OFFSET(0x8C10720)
#define HDG_RDTDEBUG_ERROR_1_OFFSET UNITYSDK_OFFSET(0x8C11230)
#define HDG_RDTDEBUG_ERROR_2_OFFSET UNITYSDK_OFFSET(0x8C11590)
#define HDG_RDTDEBUG_ERROR_OFFSET UNITYSDK_OFFSET(0x8C1DC60)
#define HDG_RDTDEBUG_INFO_1_OFFSET UNITYSDK_OFFSET(0x8C1DAB0)
#define HDG_RDTDEBUG_INFO_OFFSET UNITYSDK_OFFSET(0x8C1DA60)
#define HDG_RDTDEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x8C1D580)
#define HDG_RDTDEBUG_LOG_2_OFFSET UNITYSDK_OFFSET(0x8C1D820)
#define HDG_RDTDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x8C11280)
#define HDG_RDTDEBUG_WARNING_1_OFFSET UNITYSDK_OFFSET(0x8C1DC10)
#define HDG_RDTDEBUG_WARNING_OFFSET UNITYSDK_OFFSET(0x8C150A0)
#define HDG_RDTDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C1DE80)
#define HDG_RDTDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x8C1DE70)

namespace Hdg
{
	inline static constexpr unsigned int rdtDebug_TypeDefinitionIndex = 43761;

	class rdtDebug : public ::System::Object
	{
	public:
		static ::Hdg::rdtDebug_LogLevel* StaticGet_s_logLevel()
		{
			return (::Hdg::rdtDebug_LogLevel*)Il2CppClass::FromTypeDefinitionIndex(rdtDebug_TypeDefinitionIndex)->GetStaticField(0xD730);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_RDTDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Void Debug(::System::Object* instance, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_DEBUG_OFFSET))(instance, fmt, args);
		}

		static ::System::Void Debug_1(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_DEBUG_1_OFFSET))(fmt, args);
		}

		static ::System::Void Info(::System::Object* instance, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_INFO_OFFSET))(instance, fmt, args);
		}

		static ::System::Void Info_1(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_INFO_1_OFFSET))(fmt, args);
		}

		static ::System::Void Warning(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_WARNING_OFFSET))(fmt, args);
		}

		static ::System::Void Warning_1(::System::Object* instance, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_WARNING_1_OFFSET))(instance, fmt, args);
		}

		static ::System::Void Error(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ERROR_OFFSET))(fmt, args);
		}

		static ::System::Void Error_1(::System::Object* instance, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ERROR_1_OFFSET))(instance, fmt, args);
		}

		static ::System::Void Error_2(::System::Object* instance, ::System::Exception* e, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ERROR_2_OFFSET))(instance, e, fmt, args);
		}

		static ::System::Void Log(::System::Object* instance, ::System::Exception* e, ::Hdg::rdtDebug_LogLevel l, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*, ::Hdg::rdtDebug_LogLevel, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_LOG_OFFSET))(instance, e, l, fmt, args);
		}

		static ::System::Void Log_1(::System::Object* instance, ::Hdg::rdtDebug_LogLevel l, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Object*, ::Hdg::rdtDebug_LogLevel, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_LOG_1_OFFSET))(instance, l, fmt, args);
		}

		static ::System::Void Log_2(::Hdg::rdtDebug_LogLevel l, ::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::Hdg::rdtDebug_LogLevel, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_LOG_2_OFFSET))(l, fmt, args);
		}

		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ASSERT_OFFSET))(condition);
		}
	};
}
