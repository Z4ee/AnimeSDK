#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERVECTOR4_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x153580C0)
#define HDG_RDTSERIALIZERVECTOR4_READ_OFFSET UNITYSDK_OFFSET(0x15352570)
#define HDG_RDTSERIALIZERVECTOR4_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x153521C0)
#define HDG_RDTSERIALIZERVECTOR4_WRITE_OFFSET UNITYSDK_OFFSET(0x15352270)
#define HDG_RDTSERIALIZERVECTOR4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x153520E0)
#define HDG_RDTSERIALIZERVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x15352560)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerVector4_TypeDefinitionIndex = 45199;

	class rdtSerializerVector4 : public ::System::Object
	{
	public:
		::System::Single w; // 0x10
		::System::Single x; // 0x14
		::System::Single z; // 0x18
		::System::Single y; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 ToUnityType()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR4_READ_OFFSET))(this, a1);
		}
	};
}
