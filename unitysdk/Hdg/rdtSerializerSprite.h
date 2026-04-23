#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERSPRITE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C2A7C0)
#define HDG_RDTSERIALIZERSPRITE_READ_OFFSET UNITYSDK_OFFSET(0x8C2A800)
#define HDG_RDTSERIALIZERSPRITE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C2A720)
#define HDG_RDTSERIALIZERSPRITE_WRITE_OFFSET UNITYSDK_OFFSET(0x8C2A7D0)
#define HDG_RDTSERIALIZERSPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C2A7B0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerSprite_TypeDefinitionIndex = 43783;

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
