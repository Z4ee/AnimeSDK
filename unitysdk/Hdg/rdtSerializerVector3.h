#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERVECTOR3_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xAF4AEC0)
#define HDG_RDTSERIALIZERVECTOR3_READ_OFFSET UNITYSDK_OFFSET(0xAF40EE0)
#define HDG_RDTSERIALIZERVECTOR3_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0xAF40BB0)
#define HDG_RDTSERIALIZERVECTOR3_WRITE_OFFSET UNITYSDK_OFFSET(0xAF40CC0)
#define HDG_RDTSERIALIZERVECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAF40B20)
#define HDG_RDTSERIALIZERVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0xAF40ED0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerVector3_TypeDefinitionIndex = 46974;

	class rdtSerializerVector3 : public ::System::Object
	{
	public:
		::System::Single z; // 0x10
		::System::Single y; // 0x14
		::System::Single x; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ToUnityType()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR3_READ_OFFSET))(this, a1);
		}
	};
}
