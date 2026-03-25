#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FC1F0)
#define HDG_RDTSERIALIZERINT_READ_OFFSET UNITYSDK_OFFSET(0x83FC250)
#define HDG_RDTSERIALIZERINT_WRITE_OFFSET UNITYSDK_OFFSET(0x83FC220)
#define HDG_RDTSERIALIZERINT__CTOR_OFFSET UNITYSDK_OFFSET(0x83FC1E0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerInt_TypeDefinitionIndex = 37894;

	class rdtSerializerInt : public ::System::Object
	{
	public:
		::System::Int32 v; // 0x10

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT__CTOR_OFFSET))(this, value);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT_READ_OFFSET))(this, r);
		}
	};
}
