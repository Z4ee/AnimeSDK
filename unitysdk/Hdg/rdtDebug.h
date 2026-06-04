#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/rdtDebug_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define HDG_RDTDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0xA125110)
#define HDG_RDTDEBUG_DEBUG_1_OFFSET UNITYSDK_OFFSET(0xA123730)
#define HDG_RDTDEBUG_DEBUG_OFFSET UNITYSDK_OFFSET(0xA119FD0)
#define HDG_RDTDEBUG_ERROR_1_OFFSET UNITYSDK_OFFSET(0xA11B830)
#define HDG_RDTDEBUG_ERROR_2_OFFSET UNITYSDK_OFFSET(0xA123ED0)
#define HDG_RDTDEBUG_ERROR_OFFSET UNITYSDK_OFFSET(0xA125050)
#define HDG_RDTDEBUG_INFO_1_OFFSET UNITYSDK_OFFSET(0xA124F30)
#define HDG_RDTDEBUG_INFO_OFFSET UNITYSDK_OFFSET(0xA124EE0)
#define HDG_RDTDEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0xA124B10)
#define HDG_RDTDEBUG_LOG_2_OFFSET UNITYSDK_OFFSET(0xA124D20)
#define HDG_RDTDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0xA1248A0)
#define HDG_RDTDEBUG_WARNING_1_OFFSET UNITYSDK_OFFSET(0xA125000)
#define HDG_RDTDEBUG_WARNING_OFFSET UNITYSDK_OFFSET(0xA11AD30)
#define HDG_RDTDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1251D0)
#define HDG_RDTDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0xA1251C0)

namespace Hdg
{
	inline static constexpr unsigned int rdtDebug_TypeDefinitionIndex = 44303;

	class rdtDebug : public ::System::Object
	{
	public:
		static ::Hdg::rdtDebug_LogLevel* StaticGet_s_logLevel()
		{
			return (::Hdg::rdtDebug_LogLevel*)Il2CppClass::FromTypeDefinitionIndex(rdtDebug_TypeDefinitionIndex)->GetStaticField(0x4310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_RDTDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Void Debug(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_DEBUG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Debug_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_DEBUG_1_OFFSET))(a1, a2);
		}

		static ::System::Void Info(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_INFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Info_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_INFO_1_OFFSET))(a1, a2);
		}

		static ::System::Void Warning(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_WARNING_OFFSET))(a1, a2);
		}

		static ::System::Void Warning_1(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_WARNING_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Error(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Void Error_1(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ERROR_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Error_2(::System::Object* a1, ::System::Exception* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ERROR_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Log(::System::Object* a1, ::System::Exception* a2, ::Hdg::rdtDebug_LogLevel a3, ::System::String* a4, ::Il2CppArray<::System::Object*>* a5)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Exception*, ::Hdg::rdtDebug_LogLevel, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_LOG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Log_1(::System::Object* a1, ::Hdg::rdtDebug_LogLevel a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::System::Object*, ::Hdg::rdtDebug_LogLevel, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_LOG_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Log_2(::Hdg::rdtDebug_LogLevel a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::Hdg::rdtDebug_LogLevel, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_LOG_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Assert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTDEBUG_ASSERT_OFFSET))(a1);
		}
	};
}
