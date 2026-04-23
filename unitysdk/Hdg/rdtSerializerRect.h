#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERRECT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C25800)
#define HDG_RDTSERIALIZERRECT_READ_OFFSET UNITYSDK_OFFSET(0x8C258B0)
#define HDG_RDTSERIALIZERRECT_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x8C257F0)
#define HDG_RDTSERIALIZERRECT_WRITE_OFFSET UNITYSDK_OFFSET(0x8C25830)
#define HDG_RDTSERIALIZERRECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8C257E0)
#define HDG_RDTSERIALIZERRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C257D0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerRect_TypeDefinitionIndex = 43777;

	class rdtSerializerRect : public ::System::Object
	{
	public:
		::System::Single y; // 0x10
		::System::Single x; // 0x14
		::System::Single height; // 0x18
		::System::Single width; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Rect r)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT__CTOR_1_OFFSET))(this, r);
		}

		::UnityEngine::Rect ToUnityType()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERRECT_READ_OFFSET))(this, r);
		}
	};
}
