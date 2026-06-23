#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ExceptionInfo_ExceptionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_EXCEPTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E370DD0)

namespace Foundation
{
	inline static constexpr unsigned int ExceptionInfo_TypeDefinitionIndex = 7883;

	class ExceptionInfo : public ::System::Object
	{
	public:
		::System::String* realMessage; // 0x10
		::System::String* message; // 0x18
		::Foundation::ExceptionInfo_ExceptionType exceptionType; // 0x20
		::System::Int32 errCode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCEPTIONINFO__CTOR_OFFSET))(this);
		}
	};
}
