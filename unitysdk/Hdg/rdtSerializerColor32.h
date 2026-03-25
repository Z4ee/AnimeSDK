#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERCOLOR32_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FA860)
#define HDG_RDTSERIALIZERCOLOR32_READ_OFFSET UNITYSDK_OFFSET(0x83FA910)
#define HDG_RDTSERIALIZERCOLOR32_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x83FA830)
#define HDG_RDTSERIALIZERCOLOR32_WRITE_OFFSET UNITYSDK_OFFSET(0x83FA8A0)
#define HDG_RDTSERIALIZERCOLOR32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83FA810)
#define HDG_RDTSERIALIZERCOLOR32__CTOR_OFFSET UNITYSDK_OFFSET(0x83FA800)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerColor32_TypeDefinitionIndex = 37891;

	class rdtSerializerColor32 : public ::System::Object
	{
	public:
		::System::Byte r; // 0x10
		::System::Byte b; // 0x11
		::System::Byte g; // 0x12
		::System::Byte a; // 0x13

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Color32 c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32__CTOR_1_OFFSET))(this, c);
		}

		::UnityEngine::Color32 ToUnityType()
		{
			return ((::UnityEngine::Color32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* br)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR32_READ_OFFSET))(this, br);
		}
	};
}
