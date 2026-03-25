#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERSLIDER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8402420)
#define HDG_RDTSERIALIZERSLIDER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x84024C0)
#define HDG_RDTSERIALIZERSLIDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x8402430)
#define HDG_RDTSERIALIZERSLIDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8402500)
#define HDG_RDTSERIALIZERSLIDER_READ_OFFSET UNITYSDK_OFFSET(0x84025C0)
#define HDG_RDTSERIALIZERSLIDER_WRITE_OFFSET UNITYSDK_OFFSET(0x8402560)
#define HDG_RDTSERIALIZERSLIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8400660)
#define HDG_RDTSERIALIZERSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x8402410)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerSlider_TypeDefinitionIndex = 37905;

	class rdtSerializerSlider : public ::System::Object
	{
	public:
		::System::Single LimitMin; // 0x10
		::System::Single Value; // 0x14
		::System::Single LimitMax; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single invalue, ::System::Single inmin, ::System::Single inmax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER__CTOR_1_OFFSET))(this, invalue, inmin, inmax);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Hdg::rdtSerializerSlider* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::Hdg::rdtSerializerSlider*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_EQUALS_1_OFFSET))(this, p);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERSLIDER_READ_OFFSET))(this, r);
		}
	};
}
