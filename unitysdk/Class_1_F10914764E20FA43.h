#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F10914764E20FA43_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC2C320)
#define CLASS_1_F10914764E20FA43_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC2C2A0)
#define CLASS_1_F10914764E20FA43__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC2C3C0)
#define CLASS_1_F10914764E20FA43__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2C3B0)

inline static constexpr unsigned int Class_1_F10914764E20FA43_TypeDefinitionIndex = 91267;

class Class_1_F10914764E20FA43 : public ::System::Object
{
public:
	static ::Class_1_F10914764E20FA43** StaticGet_Field_1_0()
	{
		return (::Class_1_F10914764E20FA43**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F10914764E20FA43_TypeDefinitionIndex)->GetStaticField(0x41980);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F10914764E20FA43__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F10914764E20FA43__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::Config::Spline_WayPoint a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::Config::Spline_WayPoint, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F10914764E20FA43_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::Spline_WayPoint Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::Config::Spline_WayPoint(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F10914764E20FA43_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
