#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS_GET_CONTINUERUNNING_OFFSET UNITYSDK_OFFSET(0x1E823800)
#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E8237F0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS_SET_CONTINUERUNNING_OFFSET UNITYSDK_OFFSET(0x1E823810)
#define ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E823790)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int ScanEventArgs_TypeDefinitionIndex = 6775;

	class ScanEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* name_; // 0x10
		::System::Boolean continueRunning_; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_ContinueRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS_GET_CONTINUERUNNING_OFFSET))(this);
		}

		::System::Void set_ContinueRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_SCANEVENTARGS_SET_CONTINUERUNNING_OFFSET))(this, value);
		}
	};
}
