#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FOUNDATION_COROUTINE_COROUTINEHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA8DB40)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8DAF0)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA8DB50)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA8DC30)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA8DA80)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_KILLCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA8DBA0)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F0A3200)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F0A3250)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE_TOCOUTINEID_OFFSET UNITYSDK_OFFSET(0xA8DAA0)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A32E0)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8DA90)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8DC40)
#define FOUNDATION_COROUTINE_COROUTINEHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA8DCA0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineHandle_TypeDefinitionIndex = 7825;

	struct alignas(4) CoroutineHandle
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_NextIndex()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineHandle_TypeDefinitionIndex)->GetStaticField(0x6930);
		}
		static ::Foundation::Coroutine::CoroutineHandle* StaticGet_Empty()
		{
			return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(CoroutineHandle_TypeDefinitionIndex)->GetStaticField(0x3680);
		}
		// static const ::System::Byte ReservedSpace = 0xF; // 0x0
		::System::Int32 _id; // 0x10

		::System::Void _ctor(::System::Byte ind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE__CTOR_OFFSET))(this, ind);
		}

		::System::Void _ctor_1(::System::Int32 coroutineId, ::System::Boolean isFromCoroutineId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE__CTOR_1_OFFSET))(this, coroutineId, isFromCoroutineId);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE__CCTOR_OFFSET))();
		}

		::System::Byte get_Key()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_GET_KEY_OFFSET))(this);
		}

		::System::Int32 ToCoutineId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_TOCOUTINEID_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::Coroutine::CoroutineHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::Foundation::Coroutine::CoroutineHandle a, ::Foundation::Coroutine::CoroutineHandle b)
		{
			return ((::System::Boolean(*)(::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::Foundation::Coroutine::CoroutineHandle a, ::Foundation::Coroutine::CoroutineHandle b)
		{
			return ((::System::Boolean(*)(::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Void KillCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_KILLCOROUTINE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
