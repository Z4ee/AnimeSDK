#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERTEXTURE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x84027F0)
#define HDG_RDTSERIALIZERTEXTURE_READ_OFFSET UNITYSDK_OFFSET(0x8402830)
#define HDG_RDTSERIALIZERTEXTURE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x8402730)
#define HDG_RDTSERIALIZERTEXTURE_WRITE_OFFSET UNITYSDK_OFFSET(0x8402800)
#define HDG_RDTSERIALIZERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x84027E0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerTexture_TypeDefinitionIndex = 37907;

	class rdtSerializerTexture : public ::System::Object
	{
	public:
		::System::String* texName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE__CTOR_OFFSET))(this);
		}

		static ::System::Object* Serialize(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_SERIALIZE_OFFSET))(objIn, registry);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERTEXTURE_READ_OFFSET))(this, r);
		}
	};
}
