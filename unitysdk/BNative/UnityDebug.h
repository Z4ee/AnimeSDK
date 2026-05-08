#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define BNATIVE_UNITYDEBUG_ASSETFORMAT_OFFSET UNITYSDK_OFFSET(0x17F30560)
#define BNATIVE_UNITYDEBUG_GET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x17F30240)
#define BNATIVE_UNITYDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x17F30320)
#define BNATIVE_UNITYDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17F303E0)
#define BNATIVE_UNITYDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x17F304A0)
#define BNATIVE_UNITYDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x17F30260)
#define BNATIVE_UNITYDEBUG_SET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x17F30250)
#define BNATIVE_UNITYDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x17F30230)

namespace BNative
{
	inline static constexpr unsigned int UnityDebug_TypeDefinitionIndex = 55808;

	class UnityDebug : public ::System::Object
	{
	public:
		::System::Boolean _DebugEnabled_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_DebugEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG_GET_DEBUGENABLED_OFFSET))(this);
		}

		::System::Void set_DebugEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG_SET_DEBUGENABLED_OFFSET))(this, value);
		}

		::System::Void Log(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG_LOG_OFFSET))(this, message);
		}

		::System::Void LogError(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG_LOGERROR_OFFSET))(this, message);
		}

		::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG_LOGEXCEPTION_OFFSET))(this, exception);
		}

		::System::Void LogWarning(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG_LOGWARNING_OFFSET))(this, message);
		}

		::System::Void AssetFormat(::System::Boolean condition, ::System::String* fmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_UNITYDEBUG_ASSETFORMAT_OFFSET))(this, condition, fmt);
		}
	};
}
