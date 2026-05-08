#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class NativeMemory; }

#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x588B50)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BFE5690)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE_RESOLVEBLOB_OFFSET UNITYSDK_OFFSET(0x9BD2B0)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFE5A40)
#define FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryRequestHandle_TypeDefinitionIndex = 8850;

	struct alignas(8) NativeMemoryRequestHandle
	{
		static ::Foundation::NativeMemoryRequestHandle* StaticGet_Null()
		{
			return (::Foundation::NativeMemoryRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NativeMemoryRequestHandle_TypeDefinitionIndex)->GetStaticField(0x3CF0);
		}
		::System::UInt64 _allocatorId; // 0x10
		::System::UInt64 _requestId; // 0x18

		::System::Void _ctor(::System::UInt64 allocatorId, ::System::UInt64 requestId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CTOR_OFFSET))(this, allocatorId, requestId);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean op_Equality(::Foundation::NativeMemoryRequestHandle left, ::Foundation::NativeMemoryRequestHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE_GET_ISNULL_OFFSET))(this);
		}

		/*
		::Foundation::NativeMemoryBlob ResolveBlob(::Foundation::NativeMemory* memory)
		{
			return ((::Foundation::NativeMemoryBlob(*)(::PVOID, ::Foundation::NativeMemory*))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORYREQUESTHANDLE_RESOLVEBLOB_OFFSET))(this, memory);
		}
		*/
	};
}
