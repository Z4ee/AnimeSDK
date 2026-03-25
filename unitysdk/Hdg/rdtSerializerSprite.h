#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERSPRITE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x84026C0)
#define HDG_RDTSERIALIZERSPRITE_READ_OFFSET UNITYSDK_OFFSET(0x8402700)
#define HDG_RDTSERIALIZERSPRITE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x8402620)
#define HDG_RDTSERIALIZERSPRITE_WRITE_OFFSET UNITYSDK_OFFSET(0x84026D0)
#define HDG_RDTSERIALIZERSPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x84026B0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerSprite_TypeDefinitionIndex = 37906;

	class rdtSerializerSprite : public ::System::Object
	{
	public:
		::System::String* spriteName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_SERIALIZE_OFFSET))(objIn, registry);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_READ_OFFSET))(this, r);
		}
	};
}
