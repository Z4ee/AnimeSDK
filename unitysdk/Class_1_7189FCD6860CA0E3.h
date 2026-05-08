#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_7189FCD6860CA0E3_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xFA99B10)
#define CLASS_1_7189FCD6860CA0E3_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xFA99A90)
#define CLASS_1_7189FCD6860CA0E3__CCTOR_OFFSET UNITYSDK_OFFSET(0xFA99BB0)
#define CLASS_1_7189FCD6860CA0E3__CTOR_OFFSET UNITYSDK_OFFSET(0xFA99BA0)

inline static constexpr unsigned int Class_1_7189FCD6860CA0E3_TypeDefinitionIndex = 71264;

class Class_1_7189FCD6860CA0E3 : public ::System::Object
{
public:
	static ::Class_1_7189FCD6860CA0E3** StaticGet_Field_1_0()
	{
		return (::Class_1_7189FCD6860CA0E3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7189FCD6860CA0E3_TypeDefinitionIndex)->GetStaticField(0x3BF80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7189FCD6860CA0E3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7189FCD6860CA0E3__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::Config::Spline_WayPoint a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::Config::Spline_WayPoint, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7189FCD6860CA0E3_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::Spline_WayPoint Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::Config::Spline_WayPoint(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7189FCD6860CA0E3_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
