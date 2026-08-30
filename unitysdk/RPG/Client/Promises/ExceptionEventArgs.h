#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C6593D0)
#define RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C6593E0)
#define RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6593A0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int ExceptionEventArgs_TypeDefinitionIndex = 9852;

	class ExceptionEventArgs : public ::System::EventArgs
	{
	public:
		::System::Exception* _Exception_k__BackingField; // 0x10

		::System::Void _ctor(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS__CTOR_OFFSET))(this, a1);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Void set_Exception(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS_SET_EXCEPTION_OFFSET))(this, a1);
		}
	};
}
