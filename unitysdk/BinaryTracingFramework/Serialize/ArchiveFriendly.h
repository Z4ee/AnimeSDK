#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class BaseArchive; }
namespace BinaryTracingFramework::Serialize { class ISerializableObject; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_ARCHIVEFRIENDLY_SERIALIZEOBJ_OFFSET UNITYSDK_OFFSET(0x1F653C90)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_ARCHIVEFRIENDLY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F651120)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int ArchiveFriendly_TypeDefinitionIndex = 34609;

	class ArchiveFriendly : public ::System::Object
	{
	public:
		static ::BinaryTracingFramework::Serialize::BaseArchive* SerializeObj(::BinaryTracingFramework::Serialize::BaseArchive* archive, ::BinaryTracingFramework::Serialize::ISerializableObject* serializableObject)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::BinaryTracingFramework::Serialize::BaseArchive*, ::BinaryTracingFramework::Serialize::ISerializableObject*))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_ARCHIVEFRIENDLY_SERIALIZEOBJ_OFFSET))(archive, serializableObject);
		}

		static ::BinaryTracingFramework::Serialize::BaseArchive* Serialize(::BinaryTracingFramework::Serialize::BaseArchive* archive, ::System::Guid& guid)
		{
			return ((::BinaryTracingFramework::Serialize::BaseArchive*(*)(::BinaryTracingFramework::Serialize::BaseArchive*, ::System::Guid&))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_ARCHIVEFRIENDLY_SERIALIZE_OFFSET))(archive, guid);
		}
	};
}
