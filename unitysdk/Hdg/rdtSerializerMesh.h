#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERMESH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FD4E0)
#define HDG_RDTSERIALIZERMESH_READ_OFFSET UNITYSDK_OFFSET(0x83FD520)
#define HDG_RDTSERIALIZERMESH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FD440)
#define HDG_RDTSERIALIZERMESH_WRITE_OFFSET UNITYSDK_OFFSET(0x83FD4F0)
#define HDG_RDTSERIALIZERMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x83FD4D0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerMesh_TypeDefinitionIndex = 37898;

	class rdtSerializerMesh : public ::System::Object
	{
	public:
		::System::String* meshName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_SERIALIZE_OFFSET))(objIn, registry);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMESH_READ_OFFSET))(this, r);
		}
	};
}
