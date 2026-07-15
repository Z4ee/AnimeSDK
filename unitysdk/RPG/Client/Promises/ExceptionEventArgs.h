#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D2C4300)
#define RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D2C4310)
#define RPG_CLIENT_PROMISES_EXCEPTIONEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C42D0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int ExceptionEventArgs_TypeDefinitionIndex = 9573;

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
