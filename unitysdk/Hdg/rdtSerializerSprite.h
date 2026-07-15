#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERSPRITE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15357AC0)
#define HDG_RDTSERIALIZERSPRITE_READ_OFFSET UNITYSDK_OFFSET(0x15357B70)
#define HDG_RDTSERIALIZERSPRITE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15357A20)
#define HDG_RDTSERIALIZERSPRITE_WRITE_OFFSET UNITYSDK_OFFSET(0x15357AD0)
#define HDG_RDTSERIALIZERSPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x15357AB0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerSprite_TypeDefinitionIndex = 45195;

	class rdtSerializerSprite : public ::System::Object
	{
	public:
		::System::String* spriteName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_SERIALIZE_OFFSET))(a1, a2);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSPRITE_READ_OFFSET))(this, a1);
		}
	};
}
