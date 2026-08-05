#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_THREADID_GET_ISINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1F4BF440)
#define FOUNDATION_THREADID_GET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1F4BF170)
#define FOUNDATION_THREADID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F4BEE30)
#define FOUNDATION_THREADID_INITIALIZEMAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1F4BECE0)
#define FOUNDATION_THREADID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4BF4D0)

namespace Foundation
{
	inline static constexpr unsigned int ThreadId_TypeDefinitionIndex = 8300;

	class ThreadId : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__mainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ThreadId_TypeDefinitionIndex)->GetStaticField(0x38A0);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet__mainThreadIdCache()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(ThreadId_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet__value()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(ThreadId_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 InvalidThreadId = 0x80000000; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_THREADID__CCTOR_OFFSET))();
		}

		static ::System::Void InitializeMainThreadId()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_THREADID_INITIALIZEMAINTHREADID_OFFSET))();
		}

		static ::System::Int32 get_Value()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_THREADID_GET_VALUE_OFFSET))();
		}

		static ::System::Nullable_1<::System::Int32> get_MainThreadId()
		{
			return ((::System::Nullable_1<::System::Int32>(*)())((::PBYTE)hIl2Cpp + FOUNDATION_THREADID_GET_MAINTHREADID_OFFSET))();
		}

		static ::System::Boolean get_IsInMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_THREADID_GET_ISINMAINTHREAD_OFFSET))();
		}
	};
}
