#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace Hdg { class rdtSerializerVector4; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERMATRIX4X4_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FCF60)
#define HDG_RDTSERIALIZERMATRIX4X4_READ_OFFSET UNITYSDK_OFFSET(0x83FD1C0)
#define HDG_RDTSERIALIZERMATRIX4X4_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x83FCEA0)
#define HDG_RDTSERIALIZERMATRIX4X4_WRITE_OFFSET UNITYSDK_OFFSET(0x83FCF90)
#define HDG_RDTSERIALIZERMATRIX4X4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83FCDC0)
#define HDG_RDTSERIALIZERMATRIX4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x83FCDB0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerMatrix4x4_TypeDefinitionIndex = 37897;

	class rdtSerializerMatrix4x4 : public ::System::Object
	{
	public:
		::Hdg::rdtSerializerVector4* col0; // 0x10
		::Hdg::rdtSerializerVector4* col2; // 0x18
		::Hdg::rdtSerializerVector4* col1; // 0x20
		::Hdg::rdtSerializerVector4* col3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Matrix4x4 m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4__CTOR_1_OFFSET))(this, m);
		}

		::UnityEngine::Matrix4x4 ToUnityType()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_READ_OFFSET))(this, r);
		}
	};
}
