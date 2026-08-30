#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERMESH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A6C080)
#define HDG_RDTSERIALIZERMESH_READ_OFFSET UNITYSDK_OFFSET(0x16A6C130)
#define HDG_RDTSERIALIZERMESH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A6BFE0)
#define HDG_RDTSERIALIZERMESH_WRITE_OFFSET UNITYSDK_OFFSET(0x16A6C090)
#define HDG_RDTSERIALIZERMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x16A6C070)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerMesh_TypeDefinitionIndex = 47423;

	class rdtSerializerMesh : public ::System::Object
	{
	public:
		::System::String* meshName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_SERIALIZE_OFFSET))(a1, a2);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_READ_OFFSET))(this, a1);
		}
	};
}
