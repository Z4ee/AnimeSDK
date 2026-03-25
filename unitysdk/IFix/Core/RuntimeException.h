#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define IFIX_CORE_RUNTIMEEXCEPTION_GET_REAL_OFFSET UNITYSDK_OFFSET(0x15B4FC40)
#define IFIX_CORE_RUNTIMEEXCEPTION_SET_REAL_OFFSET UNITYSDK_OFFSET(0x15B4FC50)
#define IFIX_CORE_RUNTIMEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4FBE0)

namespace IFix::Core
{
	inline static constexpr unsigned int RuntimeException_TypeDefinitionIndex = 9814;

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

		::System::Void set_Real(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IFIX_CORE_RUNTIMEEXCEPTION_SET_REAL_OFFSET))(this, value);
		}
	};
}
