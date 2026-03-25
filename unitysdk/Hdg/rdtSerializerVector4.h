#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERVECTOR4_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8402990)
#define HDG_RDTSERIALIZERVECTOR4_READ_OFFSET UNITYSDK_OFFSET(0x83FD3D0)
#define HDG_RDTSERIALIZERVECTOR4_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x83FCF50)
#define HDG_RDTSERIALIZERVECTOR4_WRITE_OFFSET UNITYSDK_OFFSET(0x83FD140)
#define HDG_RDTSERIALIZERVECTOR4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83FCE70)
#define HDG_RDTSERIALIZERVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x83FD3C0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerVector4_TypeDefinitionIndex = 37910;

	class rdtSerializerVector4 : public ::System::Object
	{
	public:
		::System::Single y; // 0x10
		::System::Single w; // 0x14
		::System::Single z; // 0x18
		::System::Single x; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector4 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4__CTOR_1_OFFSET))(this, v);
		}

		::UnityEngine::Vector4 ToUnityType()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* bw)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_WRITE_OFFSET))(this, bw);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_READ_OFFSET))(this, r);
		}
	};
}
