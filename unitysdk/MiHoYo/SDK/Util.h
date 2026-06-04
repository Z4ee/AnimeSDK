#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_UTIL_ADDTIME_OFFSET UNITYSDK_OFFSET(0x18446320)
#define MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1845A820)
#define MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_OFFSET UNITYSDK_OFFSET(0x1845A7C0)
#define MIHOYO_SDK_UTIL_GETCURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x184428D0)
#define MIHOYO_SDK_UTIL_GETDATETIME_OFFSET UNITYSDK_OFFSET(0x18442A30)
#define MIHOYO_SDK_UTIL_ISHOYODOMAIN_OFFSET UNITYSDK_OFFSET(0x1845A560)
#define MIHOYO_SDK_UTIL_ISVALIDEMAIL_OFFSET UNITYSDK_OFFSET(0x18439740)
#define MIHOYO_SDK_UTIL_MASKEMAIL_OFFSET UNITYSDK_OFFSET(0x1845A8E0)
#define MIHOYO_SDK_UTIL_YMDTOUTCTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1845A720)
#define MIHOYO_SDK_UTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1845AAC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Util_TypeDefinitionIndex = 8140;

	class Util : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsHoyoDomain(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_ISHOYODOMAIN_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* AddTime(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_ADDTIME_OFFSET))(a1, a2);
		}

		static ::System::Int64 GetCurrentTimeStamp()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GETCURRENTTIMESTAMP_OFFSET))();
		}

		static ::System::DateTime GetDateTime(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GETDATETIME_OFFSET))(a1);
		}

		static ::System::Int64 YMDToUtcTimestamp(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_YMDTOUTCTIMESTAMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsValidEmail(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_ISVALIDEMAIL_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* GenerateSequenceArray(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* GenerateSequenceArray_1(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_GENERATESEQUENCEARRAY_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* MaskEmail(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UTIL_MASKEMAIL_OFFSET))(a1);
		}
	};
}
