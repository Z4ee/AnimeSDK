#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/ExceptionHandlerType.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define IFIX_CORE_EXCEPTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B537360)

namespace IFix::Core
{
	inline static constexpr unsigned int ExceptionHandler_TypeDefinitionIndex = 9767;

	class ExceptionHandler : public ::System::Object
	{
	public:
		::System::Type* CatchType; // 0x10
		::System::Int32 CatchTypeId; // 0x18
		::IFix::Core::ExceptionHandlerType HandlerType; // 0x1C
		::System::Int32 HandlerEnd; // 0x20
		::System::Int32 TryStart; // 0x24
		::System::Int32 HandlerStart; // 0x28
		::System::Int32 TryEnd; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_EXCEPTIONHANDLER__CTOR_OFFSET))(this);
		}
	};
}
