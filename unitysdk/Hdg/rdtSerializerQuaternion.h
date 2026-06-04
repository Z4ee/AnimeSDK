#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERQUATERNION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA12D110)
#define HDG_RDTSERIALIZERQUATERNION_READ_OFFSET UNITYSDK_OFFSET(0xA12D1C0)
#define HDG_RDTSERIALIZERQUATERNION_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0xA12D0E0)
#define HDG_RDTSERIALIZERQUATERNION_WRITE_OFFSET UNITYSDK_OFFSET(0xA12D140)
#define HDG_RDTSERIALIZERQUATERNION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA12D0B0)
#define HDG_RDTSERIALIZERQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0xA12D0A0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerQuaternion_TypeDefinitionIndex = 44318;

	class rdtSerializerQuaternion : public ::System::Object
	{
	public:
		::System::Single w; // 0x10
		::System::Single x; // 0x14
		::System::Single z; // 0x18
		::System::Single y; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Object* ToUnityType()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERQUATERNION_READ_OFFSET))(this, a1);
		}
	};
}
