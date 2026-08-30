#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB199BC0)
#define HDG_RDTSERIALIZERINT_READ_OFFSET UNITYSDK_OFFSET(0xB199C80)
#define HDG_RDTSERIALIZERINT_WRITE_OFFSET UNITYSDK_OFFSET(0xB199BF0)
#define HDG_RDTSERIALIZERINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB199BB0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerInt_TypeDefinitionIndex = 47419;

	class rdtSerializerInt : public ::System::Object
	{
	public:
		::System::Int32 v; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT__CTOR_OFFSET))(this, a1);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERINT_READ_OFFSET))(this, a1);
		}
	};
}
