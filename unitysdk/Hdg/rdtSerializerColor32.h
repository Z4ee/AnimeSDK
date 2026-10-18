#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERCOLOR32_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xAF40710)
#define HDG_RDTSERIALIZERCOLOR32_READ_OFFSET UNITYSDK_OFFSET(0xAF40960)
#define HDG_RDTSERIALIZERCOLOR32_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0xAF406F0)
#define HDG_RDTSERIALIZERCOLOR32_WRITE_OFFSET UNITYSDK_OFFSET(0xAF40750)
#define HDG_RDTSERIALIZERCOLOR32__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAF406D0)
#define HDG_RDTSERIALIZERCOLOR32__CTOR_OFFSET UNITYSDK_OFFSET(0xAF406C0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerColor32_TypeDefinitionIndex = 46956;

	class rdtSerializerColor32 : public ::System::Object
	{
	public:
		::System::Byte a; // 0x10
		::System::Byte b; // 0x11
		::System::Byte r; // 0x12
		::System::Byte g; // 0x13

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Color32 ToUnityType()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_READ_OFFSET))(this, a1);
		}
	};
}
