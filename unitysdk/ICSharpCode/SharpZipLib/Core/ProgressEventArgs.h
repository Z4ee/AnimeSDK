#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_CONTINUERUNNING_OFFSET UNITYSDK_OFFSET(0x1FBA0B80)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FBA0B70)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_PERCENTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FBA0BA0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_PROCESSED_OFFSET UNITYSDK_OFFSET(0x1FBA0BD0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1FBA0BE0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_SET_CONTINUERUNNING_OFFSET UNITYSDK_OFFSET(0x1FBA0B90)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA0AF0)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int ProgressEventArgs_TypeDefinitionIndex = 6780;

	class ProgressEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* name_; // 0x10
		::System::Boolean continueRunning_; // 0x18
		::System::Int64 processed_; // 0x20
		::System::Int64 target_; // 0x28

		::System::Void _ctor(::System::String* name, ::System::Int64 processed, ::System::Int64 target)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS__CTOR_OFFSET))(this, name, processed, target);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_ContinueRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_CONTINUERUNNING_OFFSET))(this);
		}

		::System::Void set_ContinueRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_SET_CONTINUERUNNING_OFFSET))(this, value);
		}

		::System::Single get_PercentComplete()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_PERCENTCOMPLETE_OFFSET))(this);
		}

		::System::Int64 get_Processed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_PROCESSED_OFFSET))(this);
		}

		::System::Int64 get_Target()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PROGRESSEVENTARGS_GET_TARGET_OFFSET))(this);
		}
	};
}
