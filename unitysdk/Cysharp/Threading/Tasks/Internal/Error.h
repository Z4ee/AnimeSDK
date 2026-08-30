#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1D74DC00)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_MORETHANONEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D74DD70)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_NOELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D74DCD0)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D74DE10)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTIONCORE_OFFSET UNITYSDK_OFFSET(0x1D74DBB0)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWINVALIDOPERATIONEXCEPTIONCORE_OFFSET UNITYSDK_OFFSET(0x1D74DEB0)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWNOTYETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D74DE60)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWOPERATIONCANCELEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D74DF00)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 43074;

	class Error : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentNullExceptionCore(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTIONCORE_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentOutOfRange(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(a1);
		}

		static ::System::Exception* NoElements()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_NOELEMENTS_OFFSET))();
		}

		static ::System::Exception* MoreThanOneElement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_MORETHANONEELEMENT_OFFSET))();
		}

		static ::System::Void ThrowArgumentException(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowNotYetCompleted()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWNOTYETCOMPLETED_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationExceptionCore(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWINVALIDOPERATIONEXCEPTIONCORE_OFFSET))(a1);
		}

		static ::System::Void ThrowOperationCanceledException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWOPERATIONCANCELEDEXCEPTION_OFFSET))();
		}
	};
}
