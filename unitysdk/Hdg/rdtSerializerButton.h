#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERBUTTON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x83FA570)
#define HDG_RDTSERIALIZERBUTTON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x83FA600)
#define HDG_RDTSERIALIZERBUTTON_EQUALS_OFFSET UNITYSDK_OFFSET(0x83FA580)
#define HDG_RDTSERIALIZERBUTTON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x83FA620)
#define HDG_RDTSERIALIZERBUTTON_READ_OFFSET UNITYSDK_OFFSET(0x83FA660)
#define HDG_RDTSERIALIZERBUTTON_WRITE_OFFSET UNITYSDK_OFFSET(0x83FA630)
#define HDG_RDTSERIALIZERBUTTON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83FA560)
#define HDG_RDTSERIALIZERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x83FA550)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerButton_TypeDefinitionIndex = 37889;

	class rdtSerializerButton : public ::System::Object
	{
	public:
		::System::Boolean Pressed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean inpressed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON__CTOR_1_OFFSET))(this, inpressed);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Hdg::rdtSerializerButton* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::Hdg::rdtSerializerButton*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_EQUALS_1_OFFSET))(this, p);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_READ_OFFSET))(this, r);
		}
	};
}
