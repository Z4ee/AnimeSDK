#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define BNATIVE_DEFAULTDEBUG_ASSETFORMAT_OFFSET UNITYSDK_OFFSET(0x156CBE60)
#define BNATIVE_DEFAULTDEBUG_GET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x156CB8C0)
#define BNATIVE_DEFAULTDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x156CBA40)
#define BNATIVE_DEFAULTDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x156CBBA0)
#define BNATIVE_DEFAULTDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x156CBD00)
#define BNATIVE_DEFAULTDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x156CB8E0)
#define BNATIVE_DEFAULTDEBUG_SET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x156CB8D0)
#define BNATIVE_DEFAULTDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x156CBF00)

namespace BNative
{
	inline static constexpr unsigned int DefaultDebug_TypeDefinitionIndex = 46468;

	class DefaultDebug : public ::System::Object
	{
	public:
		::System::Boolean _DebugEnabled_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_DebugEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_GET_DEBUGENABLED_OFFSET))(this);
		}

		::System::Void set_DebugEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_SET_DEBUGENABLED_OFFSET))(this, value);
		}

		::System::Void Log(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOG_OFFSET))(this, message);
		}

		::System::Void LogError(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOGERROR_OFFSET))(this, message);
		}

		::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOGEXCEPTION_OFFSET))(this, exception);
		}

		::System::Void LogWarning(::System::Object* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_LOGWARNING_OFFSET))(this, message);
		}

		::System::Void AssetFormat(::System::Boolean condition, ::System::String* fmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUG_ASSETFORMAT_OFFSET))(this, condition, fmt);
		}
	};
}
