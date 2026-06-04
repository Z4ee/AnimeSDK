#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERCOLOR_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA12A1D0)
#define HDG_RDTSERIALIZERCOLOR_READ_OFFSET UNITYSDK_OFFSET(0xA12A280)
#define HDG_RDTSERIALIZERCOLOR_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0xA12A1C0)
#define HDG_RDTSERIALIZERCOLOR_WRITE_OFFSET UNITYSDK_OFFSET(0xA12A200)
#define HDG_RDTSERIALIZERCOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA12A190)
#define HDG_RDTSERIALIZERCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA12A180)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerColor_TypeDefinitionIndex = 44309;

	class rdtSerializerColor : public ::System::Object
	{
	public:
		::System::Single a; // 0x10
		::System::Single b; // 0x14
		::System::Single g; // 0x18
		::System::Single r; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Color ToUnityType()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_READ_OFFSET))(this, a1);
		}
	};
}
