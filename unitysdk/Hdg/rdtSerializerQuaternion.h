#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERQUATERNION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FD5C0)
#define HDG_RDTSERIALIZERQUATERNION_READ_OFFSET UNITYSDK_OFFSET(0x83FD670)
#define HDG_RDTSERIALIZERQUATERNION_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x83FD590)
#define HDG_RDTSERIALIZERQUATERNION_WRITE_OFFSET UNITYSDK_OFFSET(0x83FD5F0)
#define HDG_RDTSERIALIZERQUATERNION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83FD560)
#define HDG_RDTSERIALIZERQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x83FD550)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerQuaternion_TypeDefinitionIndex = 37899;

	class rdtSerializerQuaternion : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single z; // 0x14
		::System::Single w; // 0x18
		::System::Single y; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Quaternion v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION__CTOR_1_OFFSET))(this, v);
		}

		::System::Object* ToUnityType()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* bw)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_WRITE_OFFSET))(this, bw);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_READ_OFFSET))(this, r);
		}
	};
}
