#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class ReservedObjectPool_ReservedObjectPoolData; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x801830)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x801740)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_GETDATAINSTANCE_OFFSET UNITYSDK_OFFSET(0x801710)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8018B0)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x8016B0)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x147986D0)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x14798790)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_PUSHSELF_OFFSET UNITYSDK_OFFSET(0x801720)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_RELEASESELF_OFFSET UNITYSDK_OFFSET(0x801730)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x801690)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x801910)
#define FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x801980)

namespace Foundation
{
	inline static constexpr unsigned int ReservedObjectPoolDataHandle_TypeDefinitionIndex = 66328;

	struct alignas(8) ReservedObjectPoolDataHandle
	{
		::Foundation::ReservedObjectPool_ReservedObjectPoolData* data; // 0x10
		::System::UInt32 version; // 0x18

		::System::Void _ctor(::Foundation::ReservedObjectPool_ReservedObjectPoolData* data)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ReservedObjectPool_ReservedObjectPoolData*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE__CTOR_OFFSET))(this, data);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_ISVALID_OFFSET))(this);
		}

		::UnityEngine::Object* GetDataInstance()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_GETDATAINSTANCE_OFFSET))(this);
		}

		::System::Void PushSelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_PUSHSELF_OFFSET))(this);
		}

		::System::Void ReleaseSelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_RELEASESELF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Foundation::ReservedObjectPoolDataHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ReservedObjectPoolDataHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Foundation::ReservedObjectPoolDataHandle left, ::Foundation::ReservedObjectPoolDataHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::ReservedObjectPoolDataHandle, ::Foundation::ReservedObjectPoolDataHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::ReservedObjectPoolDataHandle left, ::Foundation::ReservedObjectPoolDataHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::ReservedObjectPoolDataHandle, ::Foundation::ReservedObjectPoolDataHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOLDATAHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
