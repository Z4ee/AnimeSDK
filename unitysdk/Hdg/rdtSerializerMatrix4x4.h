#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace Hdg { class rdtSerializerVector4; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERMATRIX4X4_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x153521D0)
#define HDG_RDTSERIALIZERMATRIX4X4_READ_OFFSET UNITYSDK_OFFSET(0x15352490)
#define HDG_RDTSERIALIZERMATRIX4X4_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x15352110)
#define HDG_RDTSERIALIZERMATRIX4X4_WRITE_OFFSET UNITYSDK_OFFSET(0x15352200)
#define HDG_RDTSERIALIZERMATRIX4X4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15351F90)
#define HDG_RDTSERIALIZERMATRIX4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x15351F80)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerMatrix4x4_TypeDefinitionIndex = 45186;

	class rdtSerializerMatrix4x4 : public ::System::Object
	{
	public:
		::Hdg::rdtSerializerVector4* col2; // 0x10
		::Hdg::rdtSerializerVector4* col1; // 0x18
		::Hdg::rdtSerializerVector4* col3; // 0x20
		::Hdg::rdtSerializerVector4* col0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 ToUnityType()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERMATRIX4X4_READ_OFFSET))(this, a1);
		}
	};
}
