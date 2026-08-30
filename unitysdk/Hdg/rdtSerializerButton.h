#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERBUTTON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xB196C50)
#define HDG_RDTSERIALIZERBUTTON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB196CD0)
#define HDG_RDTSERIALIZERBUTTON_EQUALS_OFFSET UNITYSDK_OFFSET(0xB196C60)
#define HDG_RDTSERIALIZERBUTTON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB196CF0)
#define HDG_RDTSERIALIZERBUTTON_READ_OFFSET UNITYSDK_OFFSET(0xB196D90)
#define HDG_RDTSERIALIZERBUTTON_WRITE_OFFSET UNITYSDK_OFFSET(0xB196D00)
#define HDG_RDTSERIALIZERBUTTON__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB196C40)
#define HDG_RDTSERIALIZERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xB196C30)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerButton_TypeDefinitionIndex = 47414;

	class rdtSerializerButton : public ::System::Object
	{
	public:
		::System::Boolean Pressed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON__CTOR_1_OFFSET))(this, a1);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Hdg::rdtSerializerButton* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Hdg::rdtSerializerButton*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Write(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_WRITE_OFFSET))(this, a1);
		}

		::System::Void Read(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERBUTTON_READ_OFFSET))(this, a1);
		}
	};
}
