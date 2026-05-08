#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_GET_CONTINUERUNNING_OFFSET UNITYSDK_OFFSET(0x1C4BD880)
#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C4BD870)
#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C4BD860)
#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_SET_CONTINUERUNNING_OFFSET UNITYSDK_OFFSET(0x1C4BD890)
#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BD7F0)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int ScanFailureEventArgs_TypeDefinitionIndex = 6647;

	class ScanFailureEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* name_; // 0x10
		::System::Exception* exception_; // 0x18
		::System::Boolean continueRunning_; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS__CTOR_OFFSET))(this, name, e);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_GET_NAME_OFFSET))(this);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Boolean get_ContinueRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_GET_CONTINUERUNNING_OFFSET))(this);
		}

		::System::Void set_ContinueRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANFAILUREEVENTARGS_SET_CONTINUERUNNING_OFFSET))(this, value);
		}
	};
}
