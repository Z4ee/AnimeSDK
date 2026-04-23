#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERCOLOR_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C22740)
#define HDG_RDTSERIALIZERCOLOR_READ_OFFSET UNITYSDK_OFFSET(0x8C227F0)
#define HDG_RDTSERIALIZERCOLOR_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x8C22730)
#define HDG_RDTSERIALIZERCOLOR_WRITE_OFFSET UNITYSDK_OFFSET(0x8C22770)
#define HDG_RDTSERIALIZERCOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8C22700)
#define HDG_RDTSERIALIZERCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8C226F0)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerColor_TypeDefinitionIndex = 43767;

	class rdtSerializerColor : public ::System::Object
	{
	public:
		::System::Single r; // 0x10
		::System::Single b; // 0x14
		::System::Single g; // 0x18
		::System::Single a; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR__CTOR_1_OFFSET))(this, c);
		}

		::UnityEngine::Color ToUnityType()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* br)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERCOLOR_READ_OFFSET))(this, br);
		}
	};
}
