#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace Hdg { class rdtSerializerVector3; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERBOUNDS_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A67710)
#define HDG_RDTSERIALIZERBOUNDS_READ_OFFSET UNITYSDK_OFFSET(0x16A67960)
#define HDG_RDTSERIALIZERBOUNDS_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x16A67680)
#define HDG_RDTSERIALIZERBOUNDS_WRITE_OFFSET UNITYSDK_OFFSET(0x16A67790)
#define HDG_RDTSERIALIZERBOUNDS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16A675C0)
#define HDG_RDTSERIALIZERBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A675B0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerBounds_TypeDefinitionIndex = 47413;

	class rdtSerializerBounds : public ::System::Object
	{
	public:
		::Hdg::rdtSerializerVector3* centre; // 0x10
		::Hdg::rdtSerializerVector3* size; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBOUNDS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBOUNDS__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds ToUnityType()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBOUNDS_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBOUNDS_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBOUNDS_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBOUNDS_READ_OFFSET))(this, a1);
		}
	};
}
