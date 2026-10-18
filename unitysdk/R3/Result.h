#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }

#define R3_RESULT_FAILURE_OFFSET UNITYSDK_OFFSET(0x1C421830)
#define R3_RESULT_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D30)
#define R3_RESULT_GET_ISFAILURE_OFFSET UNITYSDK_OFFSET(0xE630)
#define R3_RESULT_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x2F097F0)
#define R3_RESULT_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x1C4217D0)
#define R3_RESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C26F40)
#define R3_RESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x3C26ED0)

namespace R3
{
	inline static constexpr unsigned int Result_TypeDefinitionIndex = 35966;

	struct alignas(8) Result
	{
		::System::Exception* _Exception_k__BackingField; // 0x10

		::System::Void _ctor(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + R3_RESULT__CTOR_OFFSET))(this, a1);
		}

		static ::R3::Result get_Success()
		{
			return ((::R3::Result(*)())((::PBYTE)hIl2Cpp + R3_RESULT_GET_SUCCESS_OFFSET))();
		}

		static ::R3::Result Failure(::System::Exception* a1)
		{
			return ((::R3::Result(*)(::System::Exception*))((::PBYTE)hIl2Cpp + R3_RESULT_FAILURE_OFFSET))(a1);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_RESULT_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_RESULT_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Boolean get_IsFailure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_RESULT_GET_ISFAILURE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_RESULT_TOSTRING_OFFSET))(this);
		}
	};
}
