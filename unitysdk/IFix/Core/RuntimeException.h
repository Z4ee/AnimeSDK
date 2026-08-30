#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define IFIX_CORE_RUNTIMEEXCEPTION_GET_REAL_OFFSET UNITYSDK_OFFSET(0x1CC782C0)
#define IFIX_CORE_RUNTIMEEXCEPTION_SET_REAL_OFFSET UNITYSDK_OFFSET(0x1CC782D0)
#define IFIX_CORE_RUNTIMEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC78260)

namespace IFix::Core
{
	inline static constexpr unsigned int RuntimeException_TypeDefinitionIndex = 10070;

	class RuntimeException : public ::System::Exception
	{
	public:
		::System::Exception* _Real_k__BackingField; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_RUNTIMEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Exception* get_Real()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_RUNTIMEEXCEPTION_GET_REAL_OFFSET))(this);
		}

		::System::Void set_Real(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IFIX_CORE_RUNTIMEEXCEPTION_SET_REAL_OFFSET))(this, a1);
		}
	};
}
