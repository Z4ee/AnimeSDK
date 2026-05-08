#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_UTIL_ADDTIME_OFFSET UNITYSDK_OFFSET(0x19462F80)
#define MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_1_OFFSET UNITYSDK_OFFSET(0x194504A0)
#define MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_OFFSET UNITYSDK_OFFSET(0x19463360)
#define MIHOYO_SDK_UTIL_GETCURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x19462FE0)
#define MIHOYO_SDK_UTIL_GETDATETIME_OFFSET UNITYSDK_OFFSET(0x194630F0)
#define MIHOYO_SDK_UTIL_ISHOYODOMAIN_OFFSET UNITYSDK_OFFSET(0x19462D40)
#define MIHOYO_SDK_UTIL_ISVALIDEMAIL_OFFSET UNITYSDK_OFFSET(0x19463300)
#define MIHOYO_SDK_UTIL_MASKEMAIL_OFFSET UNITYSDK_OFFSET(0x194633E0)
#define MIHOYO_SDK_UTIL_YMDTOUTCTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x194631F0)
#define MIHOYO_SDK_UTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19463640)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Util_TypeDefinitionIndex = 19063;

	class Util : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsHoyoDomain(::System::String* url)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_ISHOYODOMAIN_OFFSET))(url);
		}

		static ::System::Collections::IEnumerator* AddTime(::System::Single seconds, ::System::Action* action)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_ADDTIME_OFFSET))(seconds, action);
		}

		static ::System::Int64 GetCurrentTimeStamp()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GETCURRENTTIMESTAMP_OFFSET))();
		}

		static ::System::DateTime GetDateTime(::System::Int64 timeStamp)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GETDATETIME_OFFSET))(timeStamp);
		}

		static ::System::Int64 YMDToUtcTimestamp(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_YMDTOUTCTIMESTAMP_OFFSET))(year, month, day);
		}

		static ::System::Boolean IsValidEmail(::System::String* email)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_ISVALIDEMAIL_OFFSET))(email);
		}

		static ::Il2CppArray<::System::Int32>* GenerateSequenceArray(::System::Int32 max)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_OFFSET))(max);
		}

		static ::Il2CppArray<::System::Int32>* GenerateSequenceArray_1(::System::Int32 min, ::System::Int32 max, ::System::Boolean reverse)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_1_OFFSET))(min, max, reverse);
		}

		static ::System::String* MaskEmail(::System::String* email)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_MASKEMAIL_OFFSET))(email);
		}
	};
}
