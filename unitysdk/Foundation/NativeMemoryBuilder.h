#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRequest.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class NativeMemory; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_NATIVEMEMORYBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1C2143A0)
#define FOUNDATION_NATIVEMEMORYBUILDER_REQUESTBLOB_OFFSET UNITYSDK_OFFSET(0x1C214000)
#define FOUNDATION_NATIVEMEMORYBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C214470)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryBuilder_TypeDefinitionIndex = 8900;

	class NativeMemoryBuilder : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::NativeMemoryRequest>* _requests; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _taggedRequests; // 0x18
		::System::UInt64 _allocatorId; // 0x20
		::System::Int32 _alignment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYBUILDER__CTOR_OFFSET))(this);
		}

		::Foundation::NativeMemoryRequestHandle RequestBlob(::System::Int32 alignment, ::System::Int32 number)
		{
			return ((::Foundation::NativeMemoryRequestHandle(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYBUILDER_REQUESTBLOB_OFFSET))(this, alignment, number);
		}

		::Foundation::NativeMemory* Build()
		{
			return ((::Foundation::NativeMemory*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYBUILDER_BUILD_OFFSET))(this);
		}
	};
}
