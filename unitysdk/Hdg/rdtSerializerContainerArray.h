#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/SerialisationHelpers_ArrayElementType.h"
#include "unitysdk/Hdg/rdtSerializerContainerArray_ListType.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x83FBA30)
#define HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FB6A0)
#define HDG_RDTSERIALIZERCONTAINERARRAY_READ_OFFSET UNITYSDK_OFFSET(0x83FC160)
#define HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZEIMP_OFFSET UNITYSDK_OFFSET(0x83FAA20)
#define HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FA980)
#define HDG_RDTSERIALIZERCONTAINERARRAY_WRITE_OFFSET UNITYSDK_OFFSET(0x83FC0E0)
#define HDG_RDTSERIALIZERCONTAINERARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x83FAA10)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerContainerArray_TypeDefinitionIndex = 37892;

	class rdtSerializerContainerArray : public ::System::Object
	{
	public:
		::System::Collections::IList* m_array; // 0x10
		::Hdg::SerialisationHelpers_ArrayElementType m_arrayElementType; // 0x18
		::Hdg::rdtSerializerContainerArray_ListType m_listType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZE_OFFSET))(objIn, registry);
		}

		::System::Void SerializeImp(::System::Collections::IList* array, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_SERIALIZEIMP_OFFSET))(this, array, registry);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Object* DeserializeArray(::System::Type* elementType, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_DESERIALIZEARRAY_OFFSET))(this, elementType, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCONTAINERARRAY_READ_OFFSET))(this, r);
		}
	};
}
