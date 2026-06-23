#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }
namespace BinaryTracingFramework::Serialize { class ISerializableObject; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GETTYPEGUID_OFFSET UNITYSDK_OFFSET(0xA5C540)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GET_SERIALIZEABLESUCCESS_OFFSET UNITYSDK_OFFSET(0x3E5670)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_RESET_OFFSET UNITYSDK_OFFSET(0xA5C530)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA5C520)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SET_SERIALIZEABLESUCCESS_OFFSET UNITYSDK_OFFSET(0x5C9410)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int SerializeObjectRef_TypeDefinitionIndex = 33976;

	struct alignas(8) SerializeObjectRef
	{
		::BinaryTracingFramework::Serialize::ISerializableObject* Obj; // 0x10
		::System::Boolean _SerializeableSuccess_k__BackingField; // 0x18

		::System::Boolean get_SerializeableSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GET_SERIALIZEABLESUCCESS_OFFSET))(this);
		}

		::System::Void set_SerializeableSuccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SET_SERIALIZEABLESUCCESS_OFFSET))(this, value);
		}

		::System::Void Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::BaseArchive*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_SERIALIZE_OFFSET))(this, archive);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_RESET_OFFSET))(this);
		}

		/*
		::System::Guid GetTypeGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREF_GETTYPEGUID_OFFSET))(this);
		}
		*/
	};
}
